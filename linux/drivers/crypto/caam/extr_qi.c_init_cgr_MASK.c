
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int cs_thres; int mode; int cscn_en; } ;
struct qm_mcc_initcgr {TYPE_1__ cgr; int we_mask; } ;
struct device {int dummy; } ;
typedef int opts ;
struct TYPE_5__ {int cgrid; int cb; } ;
struct TYPE_6__ {TYPE_2__ cgr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int const) ;
 int FUNC_3 (struct device*,char*,int,...) ;
 int FUNC_4 (struct qm_mcc_initcgr*,int ,int) ;
 TYPE_3__ VAR_8 ;
 int FUNC_5 (int *,int const,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*,int ,struct qm_mcc_initcgr*) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_9)
{
 int VAR_10;
 struct qm_mcc_initcgr VAR_11;
 const u64 VAR_12 = (u64)FUNC_1(FUNC_6()) *
   VAR_0;

 VAR_10 = FUNC_7(&VAR_8.cgr.cgrid);
 if (VAR_10) {
  FUNC_3(VAR_9, "CGR alloc failed for rsp FQs: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_8.cgr.cb = VAR_7;
 FUNC_4(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.we_mask = FUNC_0(VAR_4 | VAR_5 |
       VAR_6);
 VAR_11.cgr.cscn_en = VAR_3;
 VAR_11.cgr.mode = VAR_2;
 FUNC_5(&VAR_11.cgr.cs_thres, VAR_12, 1);

 VAR_10 = FUNC_8(&VAR_8.cgr, VAR_1, &VAR_11);
 if (VAR_10) {
  FUNC_3(VAR_9, "Error %d creating CAAM CGRID: %u\n", VAR_10,
   VAR_8.cgr.cgrid);
  return VAR_10;
 }

 FUNC_2(VAR_9, "Congestion threshold set to %llu\n", VAR_12);
 return 0;
}
