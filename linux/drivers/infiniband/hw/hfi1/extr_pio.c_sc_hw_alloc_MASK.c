
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct send_context_info {int type; int allocated; } ;
struct hfi1_devdata {scalar_t__ num_send_contexts; scalar_t__* hw_to_sw; struct send_context_info* send_contexts; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hfi1_devdata*) ;
 int FUNC_1 (struct hfi1_devdata*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct hfi1_devdata *VAR_1, int VAR_2, u32 *VAR_3,
         u32 *VAR_4)
{
 struct send_context_info *VAR_5;
 u32 VAR_6;
 u32 VAR_7;

 for (VAR_6 = 0, VAR_5 = &VAR_1->send_contexts[0];
   VAR_6 < VAR_1->num_send_contexts; VAR_6++, VAR_5++) {
  if (VAR_5->type == VAR_2 && VAR_5->allocated == 0) {
   VAR_5->allocated = 1;

   VAR_7 = FUNC_0(VAR_1) - VAR_6 - 1;
   VAR_1->hw_to_sw[VAR_7] = VAR_6;
   *VAR_3 = VAR_6;
   *VAR_4 = VAR_7;
   return 0;
  }
 }
 FUNC_1(VAR_1, "Unable to locate a free type %d send context\n", VAR_2);
 return -VAR_0;
}
