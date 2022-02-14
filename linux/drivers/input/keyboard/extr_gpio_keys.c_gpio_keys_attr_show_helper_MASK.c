
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gpio_keys_drvdata {struct gpio_button_data* data; TYPE_1__* pdata; } ;
struct gpio_button_data {int * code; int disabled; TYPE_2__* button; } ;
typedef size_t ssize_t ;
struct TYPE_4__ {unsigned int type; } ;
struct TYPE_3__ {int nbuttons; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,unsigned long*) ;
 int FUNC_1 (unsigned long*) ;
 unsigned long* FUNC_2 (int,int ) ;
 int FUNC_3 (unsigned int) ;
 size_t FUNC_4 (char*,scalar_t__,char*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_5(struct gpio_keys_drvdata *VAR_3,
       char *VAR_4, unsigned int VAR_5,
       bool VAR_6)
{
 int VAR_7 = FUNC_3(VAR_5);
 unsigned long *VAR_8;
 ssize_t VAR_9;
 int VAR_10;

 VAR_8 = FUNC_2(VAR_7, VAR_1);
 if (!VAR_8)
  return -VAR_0;

 for (VAR_10 = 0; VAR_10 < VAR_3->pdata->nbuttons; VAR_10++) {
  struct gpio_button_data *VAR_11 = &VAR_3->data[VAR_10];

  if (VAR_11->button->type != VAR_5)
   continue;

  if (VAR_6 && !VAR_11->disabled)
   continue;

  FUNC_0(*VAR_11->code, VAR_8);
 }

 VAR_9 = FUNC_4(VAR_4, VAR_2 - 1, "%*pbl", VAR_7, VAR_8);
 VAR_4[VAR_9++] = '\n';
 VAR_4[VAR_9] = '\0';

 FUNC_1(VAR_8);

 return VAR_9;
}
