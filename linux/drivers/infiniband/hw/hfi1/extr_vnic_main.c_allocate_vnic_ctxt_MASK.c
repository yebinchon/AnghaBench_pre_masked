
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hfi1_devdata {int flags; int node; int pport; } ;
struct hfi1_ctxtdata {int flags; int seq_cnt; int is_vnic; int ctxt; } ;
struct TYPE_2__ {int sps_ctxts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct hfi1_devdata*,char*,int ) ;
 int FUNC_2 (struct hfi1_devdata*,char*) ;
 int FUNC_3 (int ,int ,struct hfi1_ctxtdata**) ;
 TYPE_1__ VAR_7 ;
 int FUNC_4 (struct hfi1_ctxtdata*) ;

__attribute__((used)) static int FUNC_5(struct hfi1_devdata *VAR_8,
         struct hfi1_ctxtdata **VAR_9)
{
 struct hfi1_ctxtdata *VAR_10;
 int VAR_11;

 if (VAR_8->flags & VAR_3)
  return -VAR_1;

 VAR_11 = FUNC_3(VAR_8->pport, VAR_8->node, &VAR_10);
 if (VAR_11 < 0) {
  FUNC_2(VAR_8, "Unable to create ctxtdata, failing open\n");
  return -VAR_2;
 }

 VAR_10->flags = FUNC_0(VAR_4) |
   FUNC_0(VAR_6) |
   FUNC_0(VAR_5) |
   FUNC_0(VAR_0);
 VAR_10->seq_cnt = 1;
 VAR_10->is_vnic = 1;

 FUNC_4(VAR_10);

 VAR_7.sps_ctxts++;
 FUNC_1(VAR_8, "created vnic context %d\n", VAR_10->ctxt);
 *VAR_9 = VAR_10;

 return 0;
}
