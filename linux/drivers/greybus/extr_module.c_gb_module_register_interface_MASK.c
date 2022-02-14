
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gb_module {int dev; } ;
struct gb_interface {scalar_t__ type; int mutex; int interface_id; struct gb_module* module; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (struct gb_interface*) ;
 int FUNC_2 (struct gb_interface*) ;
 int FUNC_3 (struct gb_interface*) ;
 int FUNC_4 (struct gb_interface*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct gb_interface *VAR_1)
{
 struct gb_module *VAR_2 = VAR_1->module;
 u8 VAR_3 = VAR_1->interface_id;
 int VAR_4;

 FUNC_5(&VAR_1->mutex);

 VAR_4 = FUNC_1(VAR_1);
 if (VAR_4) {
  if (VAR_1->type != VAR_0) {
   FUNC_0(&VAR_2->dev,
    "failed to activate interface %u: %d\n",
    VAR_3, VAR_4);
  }

  FUNC_2(VAR_1);
  goto err_unlock;
 }

 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4)
  goto err_interface_deactivate;

 VAR_4 = FUNC_4(VAR_1);
 if (VAR_4) {
  FUNC_0(&VAR_2->dev, "failed to enable interface %u: %d\n",
   VAR_3, VAR_4);
  goto err_interface_deactivate;
 }

 FUNC_6(&VAR_1->mutex);

 return;

err_interface_deactivate:
 FUNC_3(VAR_1);
err_unlock:
 FUNC_6(&VAR_1->mutex);
}
