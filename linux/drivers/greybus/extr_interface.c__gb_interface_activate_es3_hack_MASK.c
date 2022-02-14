
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_interface {int dummy; } ;
typedef enum gb_interface_type { ____Placeholder_gb_interface_type } gb_interface_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gb_interface*,int*) ;

__attribute__((used)) static int FUNC_1(struct gb_interface *VAR_2,
        enum gb_interface_type *VAR_3)
{
 int VAR_4 = 3;
 int VAR_5;

 while (VAR_4--) {
  VAR_5 = FUNC_0(VAR_2, VAR_3);
  if (VAR_5 == -VAR_0 && *VAR_3 == VAR_1)
   continue;

  break;
 }

 return VAR_5;
}
