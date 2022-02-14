
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct smbiod {int iod_state; int iod_scred; int iod_flags; struct thread* iod_td; struct smb_vc* iod_vc; } ;
struct smb_vc {int vc_paddr; scalar_t__ vc_laddr; int vc_genid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;

 int VAR_2 ;

 int VAR_3 ;
 scalar_t__ FUNC_2 (struct smb_vc*,scalar_t__,struct thread*) ;
 scalar_t__ FUNC_3 (struct smb_vc*,int ,struct thread*) ;
 scalar_t__ FUNC_4 (struct smb_vc*,struct thread*) ;
 int FUNC_5 (struct smb_vc*,int ,int *) ;
 int FUNC_6 (struct smbiod*) ;
 int FUNC_7 (struct smbiod*) ;
 scalar_t__ FUNC_8 (struct smb_vc*,int *) ;
 scalar_t__ FUNC_9 (struct smb_vc*,int *) ;

__attribute__((used)) static int
FUNC_10(struct smbiod *VAR_4)
{
 struct smb_vc *VAR_5 = VAR_4->iod_vc;
 struct thread *VAR_6 = VAR_4->iod_td;
 int VAR_7;

 FUNC_1("%d\n", VAR_4->iod_state);
 switch(VAR_4->iod_state) {
     case 128:
  FUNC_0("called for already opened connection\n");
  return VAR_0;
     case 129:
  return VAR_1;
     default:
  break;
 }
 VAR_5->vc_genid++;
 VAR_7 = 0;

 VAR_7 = (int)FUNC_4(VAR_5, VAR_6);
 if (VAR_7)
  goto fail;
 FUNC_1("tcreate\n");
 if (VAR_5->vc_laddr) {
  VAR_7 = (int)FUNC_2(VAR_5, VAR_5->vc_laddr, VAR_6);
  if (VAR_7)
   goto fail;
 }
 FUNC_1("tbind\n");
 VAR_7 = (int)FUNC_3(VAR_5, VAR_5->vc_paddr, VAR_6);
 if (VAR_7)
  goto fail;
 FUNC_5(VAR_5, VAR_3, &VAR_4->iod_flags);
 VAR_4->iod_state = VAR_2;
 FUNC_1("tconnect\n");

 VAR_7 = (int)FUNC_8(VAR_5, &VAR_4->iod_scred);
 if (VAR_7)
  goto fail;
 FUNC_1("snegotiate\n");
 VAR_7 = (int)FUNC_9(VAR_5, &VAR_4->iod_scred);
 if (VAR_7)
  goto fail;
 VAR_4->iod_state = 128;
 FUNC_1("completed\n");
 FUNC_7(VAR_4);
 return (0);

 fail:
 FUNC_6(VAR_4);
 return (VAR_7);
}
