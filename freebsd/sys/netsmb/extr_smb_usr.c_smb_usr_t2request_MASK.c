
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbioc_t2rq {int ioc_setupcnt; int ioc_rparamcnt; int ioc_rdatacnt; int ioc_rdata; int ioc_rparam; int ioc_tdata; int ioc_tdatacnt; int ioc_tparam; int ioc_tparamcnt; scalar_t__ ioc_name; int * ioc_setup; } ;
struct mdchain {scalar_t__ md_top; } ;
struct smb_t2rq {int t2_setupcount; int t2_maxpcount; int t2_maxdcount; int * t_name; struct mdchain t2_rdata; struct mdchain t2_rparam; int t2_tdata; int t2_tparam; scalar_t__ t2_maxscount; int * t2_setupdata; } ;
struct smb_share {int dummy; } ;
struct smb_cred {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct smb_share*) ;
 int FUNC_1 (struct smb_t2rq*,int ) ;
 int FUNC_2 (scalar_t__) ;
 struct smb_t2rq* FUNC_3 (int,int ,int ) ;
 int FUNC_4 (struct mdchain*,int ,int,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int * FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct smb_t2rq*) ;
 int FUNC_9 (struct smb_t2rq*,int ,int ,struct smb_cred*) ;
 int FUNC_10 (struct smb_t2rq*) ;

int
FUNC_11(struct smb_share *VAR_6, struct smbioc_t2rq *VAR_7,
 struct smb_cred *VAR_8)
{
 struct smb_t2rq *VAR_9;
 struct mdchain *VAR_10;
 int VAR_11, VAR_12;

 if (VAR_7->ioc_setupcnt > 3)
  return VAR_0;
 VAR_9 = FUNC_3(sizeof(struct smb_t2rq), VAR_4, VAR_5);
 VAR_11 = FUNC_9(VAR_9, FUNC_0(VAR_6), VAR_7->ioc_setup[0], VAR_8);
 if (VAR_11) {
  FUNC_1(VAR_9, VAR_4);
  return VAR_11;
 }
 VAR_12 = VAR_9->t2_setupcount = VAR_7->ioc_setupcnt;
 if (VAR_12 > 1)
  VAR_9->t2_setupdata = VAR_7->ioc_setup;
 if (VAR_7->ioc_name) {
  VAR_9->t_name = FUNC_6(VAR_7->ioc_name, 128);
  if (VAR_9->t_name == ((void*)0)) {
   VAR_11 = VAR_2;
   goto bad;
  }
 }
 VAR_9->t2_maxscount = 0;
 VAR_9->t2_maxpcount = VAR_7->ioc_rparamcnt;
 VAR_9->t2_maxdcount = VAR_7->ioc_rdatacnt;
 VAR_11 = FUNC_5(&VAR_9->t2_tparam, VAR_7->ioc_tparamcnt, VAR_7->ioc_tparam);
 if (VAR_11)
  goto bad;
 VAR_11 = FUNC_5(&VAR_9->t2_tdata, VAR_7->ioc_tdatacnt, VAR_7->ioc_tdata);
 if (VAR_11)
  goto bad;
 VAR_11 = FUNC_10(VAR_9);
 if (VAR_11)
  goto bad;
 VAR_10 = &VAR_9->t2_rparam;
 if (VAR_10->md_top) {
  VAR_12 = FUNC_2(VAR_10->md_top);
  if (VAR_12 > VAR_7->ioc_rparamcnt) {
   VAR_11 = VAR_1;
   goto bad;
  }
  VAR_7->ioc_rparamcnt = VAR_12;
  VAR_11 = FUNC_4(VAR_10, VAR_7->ioc_rparam, VAR_12, VAR_3);
  if (VAR_11)
   goto bad;
 } else
  VAR_7->ioc_rparamcnt = 0;
 VAR_10 = &VAR_9->t2_rdata;
 if (VAR_10->md_top) {
  VAR_12 = FUNC_2(VAR_10->md_top);
  if (VAR_12 > VAR_7->ioc_rdatacnt) {
   VAR_11 = VAR_1;
   goto bad;
  }
  VAR_7->ioc_rdatacnt = VAR_12;
  VAR_11 = FUNC_4(VAR_10, VAR_7->ioc_rdata, VAR_12, VAR_3);
 } else
  VAR_7->ioc_rdatacnt = 0;
bad:
 if (VAR_9->t_name)
  FUNC_7(VAR_9->t_name);
 FUNC_8(VAR_9);
 FUNC_1(VAR_9, VAR_4);
 return VAR_11;
}
