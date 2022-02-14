
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lp55xx_chip {TYPE_1__* cl; struct firmware* fw; } ;
struct firmware {scalar_t__ size; int data; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (struct lp55xx_chip*) ;
 int FUNC_2 (struct lp55xx_chip*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct lp55xx_chip *VAR_1)
{
 const struct firmware *VAR_2 = VAR_1->fw;

 if (VAR_2->size > VAR_0) {
  FUNC_0(&VAR_1->cl->dev, "firmware data size overflow: %zu\n",
   VAR_2->size);
  return;
 }







 FUNC_1(VAR_1);
 FUNC_2(VAR_1, VAR_2->data, VAR_2->size);
}
