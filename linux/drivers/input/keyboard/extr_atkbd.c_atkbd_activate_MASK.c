
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ps2dev {TYPE_1__* serio; } ;
struct atkbd {struct ps2dev ps2dev; } ;
struct TYPE_2__ {int phys; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 scalar_t__ FUNC_1 (struct ps2dev*,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct atkbd *VAR_1)
{
 struct ps2dev *VAR_2 = &VAR_1->ps2dev;





 if (FUNC_1(VAR_2, ((void*)0), VAR_0)) {
  FUNC_0(&VAR_2->serio->dev,
   "Failed to enable keyboard on %s\n",
   VAR_2->serio->phys);
  return -1;
 }

 return 0;
}
