
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gpio_keys_drvdata {int disable_lock; struct gpio_button_data* data; TYPE_1__* pdata; int input; } ;
struct gpio_button_data {int * code; TYPE_2__* button; } ;
typedef int ssize_t ;
struct TYPE_4__ {unsigned int type; int can_disable; } ;
struct TYPE_3__ {int nbuttons; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long*) ;
 int FUNC_1 (char const*,unsigned long*,int) ;
 int FUNC_2 (unsigned long*,unsigned long const*,int) ;
 unsigned long* FUNC_3 (int,int ) ;
 unsigned long* FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (struct gpio_button_data*) ;
 int FUNC_7 (struct gpio_button_data*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_11(struct gpio_keys_drvdata *VAR_3,
        const char *VAR_4, unsigned int VAR_5)
{
 int VAR_6 = FUNC_5(VAR_5);
 const unsigned long *VAR_7 = FUNC_4(VAR_3->input, VAR_5);
 unsigned long *VAR_8;
 ssize_t VAR_9;
 int VAR_10;

 VAR_8 = FUNC_3(VAR_6, VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_9 = FUNC_1(VAR_4, VAR_8, VAR_6);
 if (VAR_9)
  goto out;


 if (!FUNC_2(VAR_8, VAR_7, VAR_6)) {
  VAR_9 = -VAR_0;
  goto out;
 }

 for (VAR_10 = 0; VAR_10 < VAR_3->pdata->nbuttons; VAR_10++) {
  struct gpio_button_data *VAR_11 = &VAR_3->data[VAR_10];

  if (VAR_11->button->type != VAR_5)
   continue;

  if (FUNC_10(*VAR_11->code, VAR_8) &&
      !VAR_11->button->can_disable) {
   VAR_9 = -VAR_0;
   goto out;
  }
 }

 FUNC_8(&VAR_3->disable_lock);

 for (VAR_10 = 0; VAR_10 < VAR_3->pdata->nbuttons; VAR_10++) {
  struct gpio_button_data *VAR_12 = &VAR_3->data[VAR_10];

  if (VAR_12->button->type != VAR_5)
   continue;

  if (FUNC_10(*VAR_12->code, VAR_8))
   FUNC_6(VAR_12);
  else
   FUNC_7(VAR_12);
 }

 FUNC_9(&VAR_3->disable_lock);

out:
 FUNC_0(VAR_8);
 return VAR_9;
}
