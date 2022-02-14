
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int dummy; } ;
struct psmouse {struct ps2dev ps2dev; } ;
struct alps_data {int flags; int dev_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct psmouse*,int) ;
 scalar_t__ FUNC_2 (struct psmouse*) ;
 scalar_t__ FUNC_3 (struct psmouse*) ;
 int FUNC_4 (struct ps2dev*,int *,int ) ;

__attribute__((used)) static int FUNC_5(unsigned char VAR_3[][4],
     struct alps_data *VAR_4,
     struct psmouse *VAR_5)
{
 bool VAR_6 = 0;
 int VAR_7 = 0;
 struct ps2dev *VAR_8 = &VAR_5->ps2dev;

 if (FUNC_0(VAR_4->dev_id)) {
  VAR_6 = (VAR_3[0][0] >> 4) & 0x01;

  if (!VAR_6) {

   if (FUNC_3(VAR_5) == 0 &&
    FUNC_2(VAR_5) == 0) {
    VAR_7 = FUNC_1(VAR_5,
         0xD7);
   }
   FUNC_3(VAR_5);
   FUNC_4(VAR_8, ((void*)0), VAR_2);

   if (VAR_7 == 0x0C || VAR_7 == 0x1D)
    VAR_6 = 1;
  }
 }

 if (VAR_6)
  VAR_4->flags |= VAR_0 |
     VAR_1;

 return 0;
}
