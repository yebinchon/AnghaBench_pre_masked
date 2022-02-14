
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gp2ap020a00f_data {scalar_t__ cur_opmode; } ;
typedef enum gp2ap020a00f_opmode { ____Placeholder_gp2ap020a00f_opmode } gp2ap020a00f_opmode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct gp2ap020a00f_data*,int) ;

__attribute__((used)) static int FUNC_1(struct gp2ap020a00f_data *VAR_6,
   enum gp2ap020a00f_opmode VAR_7, int VAR_8)
{
 enum gp2ap020a00f_opmode VAR_9;

 if (VAR_7 != VAR_2 &&
     VAR_7 != VAR_4)
  return -VAR_0;

 if (VAR_8 == VAR_1) {
  if (VAR_6->cur_opmode == VAR_5)
   VAR_9 = VAR_7;
  else
   VAR_9 = VAR_3;
 } else {
  if (VAR_6->cur_opmode == VAR_3)
   VAR_9 = (VAR_7 == VAR_2) ?
     VAR_4 :
     VAR_2;
  else
   VAR_9 = VAR_5;
 }

 return FUNC_0(VAR_6, VAR_9);
}
