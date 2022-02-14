
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uniphier_system_bus_priv {int dev; TYPE_1__* bank; } ;
struct TYPE_2__ {scalar_t__ end; scalar_t__ base; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int,int) ;

__attribute__((used)) static int FUNC_2(
    const struct uniphier_system_bus_priv *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->bank); VAR_2++) {
  for (VAR_3 = VAR_2 + 1; VAR_3 < FUNC_0(VAR_1->bank); VAR_3++) {
   if (VAR_1->bank[VAR_2].end > VAR_1->bank[VAR_3].base &&
       VAR_1->bank[VAR_2].base < VAR_1->bank[VAR_3].end) {
    FUNC_1(VAR_1->dev,
     "region overlap between bank%d and bank%d\n",
     VAR_2, VAR_3);
    return -VAR_0;
   }
  }
 }

 return 0;
}
