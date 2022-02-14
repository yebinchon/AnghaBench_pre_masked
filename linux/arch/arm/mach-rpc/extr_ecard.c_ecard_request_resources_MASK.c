
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* driver; } ;
struct expansion_card {TYPE_2__ dev; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct expansion_card*,int) ;
 int FUNC_1 (struct expansion_card*,int) ;
 int FUNC_2 (struct expansion_card*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;

int FUNC_5(struct expansion_card *VAR_2)
{
 int VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (FUNC_0(VAR_2, VAR_3) &&
      !FUNC_4(FUNC_2(VAR_2, VAR_3),
     FUNC_1(VAR_2, VAR_3),
     VAR_2->dev.driver->name)) {
   VAR_4 = -VAR_0;
   break;
  }
 }

 if (VAR_4) {
  while (VAR_3--)
   if (FUNC_0(VAR_2, VAR_3))
    FUNC_3(FUNC_2(VAR_2, VAR_3),
         FUNC_1(VAR_2, VAR_3));
 }
 return VAR_4;
}
