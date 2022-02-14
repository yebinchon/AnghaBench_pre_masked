
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_pportdata {int dummy; } ;
struct hfi1_devdata {int node; } ;
struct hfi1_ctxtdata {int flags; scalar_t__ ctxt; int seq_cnt; int sc; int rcvhdrqentsize; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct hfi1_devdata*,char*) ;
 int FUNC_3 (struct hfi1_pportdata*,int ,struct hfi1_ctxtdata**) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct hfi1_devdata*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct hfi1_devdata *VAR_8,
        struct hfi1_pportdata *VAR_9)
{
 struct hfi1_ctxtdata *VAR_10;
 int VAR_11;


 FUNC_0(VAR_3 != 0);

 VAR_11 = FUNC_3(VAR_9, VAR_8->node, &VAR_10);
 if (VAR_11 < 0) {
  FUNC_2(VAR_8, "Kernel receive context allocation failed\n");
  return VAR_11;
 }






 VAR_10->flags = FUNC_1(VAR_4) |
  FUNC_1(VAR_6) |
  FUNC_1(VAR_5) |
  FUNC_1(VAR_0);


 if (VAR_10->ctxt == VAR_3)
  VAR_10->flags |= VAR_2;
 VAR_10->seq_cnt = 1;

 VAR_10->sc = FUNC_5(VAR_8, VAR_7, VAR_10->rcvhdrqentsize, VAR_8->node);
 if (!VAR_10->sc) {
  FUNC_2(VAR_8, "Kernel send context allocation failed\n");
  return -VAR_1;
 }
 FUNC_4(VAR_10->sc);

 return 0;
}
