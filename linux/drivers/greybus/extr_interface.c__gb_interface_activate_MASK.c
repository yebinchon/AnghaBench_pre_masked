
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_interface {int active; scalar_t__ removed; scalar_t__ ejected; } ;
typedef enum gb_interface_type { ____Placeholder_gb_interface_type } gb_interface_type ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct gb_interface*,int*) ;
 int FUNC_1 (struct gb_interface*) ;
 int FUNC_2 (struct gb_interface*) ;
 int FUNC_3 (struct gb_interface*,int) ;
 int FUNC_4 (struct gb_interface*) ;
 int FUNC_5 (struct gb_interface*,int) ;
 int FUNC_6 (struct gb_interface*,int) ;
 int FUNC_7 (struct gb_interface*) ;

__attribute__((used)) static int FUNC_8(struct gb_interface *VAR_2,
      enum gb_interface_type *VAR_3)
{
 int VAR_4;

 *VAR_3 = VAR_1;

 if (VAR_2->ejected || VAR_2->removed)
  return -VAR_0;

 VAR_4 = FUNC_6(VAR_2, 1);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_3(VAR_2, 1);
 if (VAR_4)
  goto err_vsys_disable;

 VAR_4 = FUNC_5(VAR_2, 1);
 if (VAR_4)
  goto err_refclk_disable;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4) {
  switch (*VAR_3) {
  case 128:
  case 129:
   goto err_hibernate_link;
  default:
   goto err_unipro_disable;
  }
 }

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4)
  goto err_hibernate_link;

 VAR_4 = FUNC_4(VAR_2);
 if (VAR_4)
  goto err_hibernate_link;

 VAR_2->active = 1;

 FUNC_7(VAR_2);

 return 0;

err_hibernate_link:
 FUNC_1(VAR_2);
err_unipro_disable:
 FUNC_5(VAR_2, 0);
err_refclk_disable:
 FUNC_3(VAR_2, 0);
err_vsys_disable:
 FUNC_6(VAR_2, 0);

 return VAR_4;
}
