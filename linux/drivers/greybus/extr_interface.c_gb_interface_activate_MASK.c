
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_interface {int type; int dev; } ;
typedef enum gb_interface_type { ____Placeholder_gb_interface_type } gb_interface_type ;


 int VAR_0 ;


 int FUNC_0 (struct gb_interface*,int*) ;
 int FUNC_1 (struct gb_interface*,int*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct gb_interface*) ;

int FUNC_4(struct gb_interface *VAR_1)
{
 enum gb_interface_type VAR_2;
 int VAR_3;

 switch (VAR_1->type) {
 case 128:
 case 129:
  VAR_3 = FUNC_1(VAR_1, &VAR_2);
  break;
 default:
  VAR_3 = FUNC_0(VAR_1, &VAR_2);
 }


 if (VAR_1->type != 128) {
  if (VAR_2 != VAR_1->type) {
   FUNC_2(&VAR_1->dev, "failed to detect interface type\n");

   if (!VAR_3)
    FUNC_3(VAR_1);

   return -VAR_0;
  }
 } else {
  VAR_1->type = VAR_2;
 }

 return VAR_3;
}
