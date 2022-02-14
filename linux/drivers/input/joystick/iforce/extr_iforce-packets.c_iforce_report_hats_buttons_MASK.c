
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct input_dev {int absbit; } ;
struct iforce {TYPE_1__* type; struct input_dev* dev; } ;
struct TYPE_4__ {int x; int y; } ;
struct TYPE_3__ {scalar_t__* btn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 TYPE_2__* VAR_4 ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,scalar_t__,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct iforce *VAR_5, u8 *VAR_6)
{
 struct input_dev *VAR_7 = VAR_5->dev;
 int VAR_8;

 FUNC_1(VAR_7, VAR_0, VAR_4[VAR_6[6] >> 4].x);
 FUNC_1(VAR_7, VAR_1, VAR_4[VAR_6[6] >> 4].y);

 for (VAR_8 = 0; VAR_5->type->btn[VAR_8] >= 0; VAR_8++)
  FUNC_2(VAR_7, VAR_5->type->btn[VAR_8],
     VAR_6[(VAR_8 >> 3) + 5] & (1 << (VAR_8 & 7)));


 if (VAR_8 <= 8) {
  u8 VAR_9 = VAR_6[6];

  if (FUNC_3(VAR_2, VAR_7->absbit)) {
   if (VAR_9 & FUNC_0(3))
    FUNC_1(VAR_7, VAR_2, -1);
   else if (VAR_9 & FUNC_0(1))
    FUNC_1(VAR_7, VAR_2, 1);
   else
    FUNC_1(VAR_7, VAR_2, 0);
  }

  if (FUNC_3(VAR_3, VAR_7->absbit)) {
   if (VAR_9 & FUNC_0(0))
    FUNC_1(VAR_7, VAR_3, -1);
   else if (VAR_9 & FUNC_0(2))
    FUNC_1(VAR_7, VAR_3, 1);
   else
    FUNC_1(VAR_7, VAR_3, 0);
  }
 }
}
