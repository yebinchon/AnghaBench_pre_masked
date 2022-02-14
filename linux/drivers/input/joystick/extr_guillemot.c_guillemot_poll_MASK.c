
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct input_dev {int dummy; } ;
struct guillemot {TYPE_1__* type; int bads; int gameport; int reads; struct input_dev* dev; } ;
struct gameport {int dummy; } ;
struct TYPE_4__ {int x; int y; } ;
struct TYPE_3__ {scalar_t__* abs; scalar_t__* btn; scalar_t__ hat; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct guillemot* FUNC_0 (struct gameport*) ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (struct input_dev*,scalar_t__,int) ;
 int FUNC_3 (struct input_dev*,scalar_t__,int) ;
 int FUNC_4 (struct input_dev*) ;

__attribute__((used)) static void FUNC_5(struct gameport *VAR_4)
{
 struct guillemot *VAR_5 = FUNC_0(VAR_4);
 struct input_dev *VAR_6 = VAR_5->dev;
 u8 VAR_7[VAR_2];
 int VAR_8;

 VAR_5->reads++;

 if (FUNC_1(VAR_5->gameport, VAR_7) != VAR_2 * 8 ||
  VAR_7[0] != 0x55 || VAR_7[16] != 0xaa) {
  VAR_5->bads++;
 } else {

  for (VAR_8 = 0; VAR_8 < 6 && VAR_5->type->abs[VAR_8] >= 0; VAR_8++)
   FUNC_2(VAR_6, VAR_5->type->abs[VAR_8], VAR_7[VAR_8 + 5]);

  if (VAR_5->type->hat) {
   FUNC_2(VAR_6, VAR_0, VAR_3[VAR_7[4] >> 4].x);
   FUNC_2(VAR_6, VAR_1, VAR_3[VAR_7[4] >> 4].y);
  }

  for (VAR_8 = 0; VAR_8 < 16 && VAR_5->type->btn[VAR_8] >= 0; VAR_8++)
   FUNC_3(VAR_6, VAR_5->type->btn[VAR_8], (VAR_7[2 + (VAR_8 >> 3)] >> (VAR_8 & 7)) & 1);
 }

 FUNC_4(VAR_6);
}
