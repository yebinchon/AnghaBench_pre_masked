
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct is_table {unsigned int end; scalar_t__ start; int (* is_int ) (struct hfi1_devdata*,scalar_t__) ;scalar_t__ is_name; } ;
struct hfi1_devdata {int dummy; } ;


 int FUNC_0 (struct hfi1_devdata*,char*,unsigned int) ;
 struct is_table* VAR_0 ;
 int FUNC_1 (struct hfi1_devdata*,scalar_t__) ;
 int FUNC_2 (struct hfi1_devdata*,struct is_table const*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct hfi1_devdata *VAR_1, unsigned int VAR_2)
{
 const struct is_table *VAR_3;


 for (VAR_3 = &VAR_0[0]; VAR_3->is_name; VAR_3++) {
  if (VAR_2 <= VAR_3->end) {
   FUNC_2(VAR_1, VAR_3, VAR_2);
   VAR_3->is_int(VAR_1, VAR_2 - VAR_3->start);
   return;
  }
 }

 FUNC_0(VAR_1, "invalid interrupt source %u\n", VAR_2);
}
