
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mxt_data {int last_message_count; int max_reportid; int num_touchids; int update_input; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mxt_data*) ;
 int FUNC_1 (struct mxt_data*,int) ;

__attribute__((used)) static irqreturn_t FUNC_2(struct mxt_data *VAR_2)
{
 int VAR_3, VAR_4;
 u8 VAR_5 = VAR_2->last_message_count;

 if (VAR_5 < 1 || VAR_5 > VAR_2->max_reportid)
  VAR_5 = 1;


 VAR_3 = FUNC_1(VAR_2, VAR_5 + 1);
 if (VAR_3 < 0)
  return VAR_1;

 else if (VAR_3 <= VAR_5)
  goto update_count;


 do {
  VAR_4 = FUNC_1(VAR_2, 2);
  if (VAR_4 < 0)
   return VAR_1;

  VAR_3 += VAR_4;

  if (VAR_4 < 2)
   break;
 } while (VAR_3 < VAR_2->num_touchids);

update_count:
 VAR_2->last_message_count = VAR_3;

 if (VAR_2->update_input) {
  FUNC_0(VAR_2);
  VAR_2->update_input = 0;
 }

 return VAR_0;
}
