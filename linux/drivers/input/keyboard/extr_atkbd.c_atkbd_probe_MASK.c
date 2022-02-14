
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ps2dev {TYPE_1__* serio; } ;
struct atkbd {int id; scalar_t__ translated; struct ps2dev ps2dev; } ;
struct TYPE_2__ {int dev; int phys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct atkbd*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int ) ;
 scalar_t__ FUNC_3 (struct ps2dev*,unsigned char*,int ) ;
 int FUNC_4 (unsigned char) ;

__attribute__((used)) static int FUNC_5(struct atkbd *VAR_5)
{
 struct ps2dev *VAR_6 = &VAR_5->ps2dev;
 unsigned char VAR_7[2];







 if (VAR_3)
  if (FUNC_3(VAR_6, ((void*)0), VAR_1))
   FUNC_2(&VAR_6->serio->dev,
     "keyboard reset failed on %s\n",
     VAR_6->serio->phys);
 VAR_7[0] = VAR_7[1] = 0xa5;
 if (FUNC_3(VAR_6, VAR_7, VAR_0)) {






  VAR_7[0] = 0;
  if (FUNC_3(VAR_6, VAR_7, VAR_2))
   return -1;
  VAR_5->id = 0xabba;
  return 0;
 }

 if (!FUNC_4(VAR_7[0]))
  return -1;

 VAR_5->id = (VAR_7[0] << 8) | VAR_7[1];

 if (VAR_5->id == 0xaca1 && VAR_5->translated) {
  FUNC_1(&VAR_6->serio->dev,
   "NCD terminal keyboards are only supported on non-translating controllers. "
   "Use i8042.direct=1 to disable translation.\n");
  return -1;
 }





 if (!VAR_4)
  FUNC_0(VAR_5);

 return 0;
}
