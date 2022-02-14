
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct input_handler {int dummy; } ;
struct input_device_id {int dummy; } ;
struct input_dev {int name; int keybit; } ;
struct TYPE_6__ {int name; struct input_handler* handler; struct input_dev* dev; struct bh_priv* private; } ;
struct bh_priv {unsigned long* seen; TYPE_1__ handle; } ;
struct TYPE_7__ {int code; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct bh_priv*) ;
 struct bh_priv* FUNC_6 (int,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct input_handler *VAR_5,
  struct input_dev *VAR_6, const struct input_device_id *VAR_7)
{
 struct bh_priv *VAR_8;
 int VAR_9;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_4); VAR_10++)
  if (FUNC_7(VAR_4[VAR_10].code, VAR_6->keybit))
   break;

 if (VAR_10 == FUNC_0(VAR_4))
  return -VAR_1;

 VAR_8 = FUNC_6(sizeof(*VAR_8) +
         (sizeof(unsigned long) * FUNC_0(VAR_4)),
         VAR_3);
 if (!VAR_8)
  return -VAR_2;

 VAR_8->seen = (unsigned long *) &VAR_8[1];
 VAR_8->handle.private = VAR_8;
 VAR_8->handle.dev = VAR_6;
 VAR_8->handle.handler = VAR_5;
 VAR_8->handle.name = VAR_0;

 VAR_9 = FUNC_3(&VAR_8->handle);
 if (VAR_9)
  goto err_free_priv;

 VAR_9 = FUNC_2(&VAR_8->handle);
 if (VAR_9)
  goto err_unregister_handle;

 FUNC_1("connected to %s\n", VAR_6->name);

 return 0;

 err_unregister_handle:
 FUNC_4(&VAR_8->handle);

 err_free_priv:
 FUNC_5(VAR_8);
 return VAR_9;
}
