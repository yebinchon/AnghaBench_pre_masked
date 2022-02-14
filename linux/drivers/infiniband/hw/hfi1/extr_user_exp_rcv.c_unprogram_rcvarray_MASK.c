
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct tid_rb_node {scalar_t__ rcventry; int mmu; struct tid_group* grp; } ;
struct tid_group {int dummy; } ;
struct hfi1_filedata {int handler; struct tid_rb_node** entry_to_rb; struct hfi1_ctxtdata* uctxt; } ;
struct hfi1_devdata {int dummy; } ;
struct hfi1_ctxtdata {scalar_t__ expected_count; scalar_t__ expected_base; int ctxt; struct hfi1_devdata* dd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct hfi1_filedata*,struct tid_rb_node*) ;
 int FUNC_2 (struct hfi1_devdata*,char*,scalar_t__,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct hfi1_filedata *VAR_4, u32 VAR_5,
         struct tid_group **VAR_6)
{
 struct hfi1_ctxtdata *VAR_7 = VAR_4->uctxt;
 struct hfi1_devdata *VAR_8 = VAR_7->dd;
 struct tid_rb_node *VAR_9;
 u8 VAR_10 = FUNC_0(VAR_5, VAR_0);
 u32 VAR_11 = FUNC_0(VAR_5, VAR_3) << 1, VAR_12;

 if (VAR_11 >= VAR_7->expected_count) {
  FUNC_2(VAR_8, "Invalid RcvArray entry (%u) index for ctxt %u\n",
      VAR_11, VAR_7->ctxt);
  return -VAR_2;
 }

 if (VAR_10 == 0x3)
  return -VAR_2;

 VAR_12 = VAR_11 + (VAR_10 - 1);

 VAR_9 = VAR_4->entry_to_rb[VAR_12];
 if (!VAR_9 || VAR_9->rcventry != (VAR_7->expected_base + VAR_12))
  return -VAR_1;

 if (VAR_6)
  *VAR_6 = VAR_9->grp;

 if (!VAR_4->handler)
  FUNC_1(VAR_4, VAR_9);
 else
  FUNC_3(VAR_4->handler, &VAR_9->mmu);

 return 0;
}
