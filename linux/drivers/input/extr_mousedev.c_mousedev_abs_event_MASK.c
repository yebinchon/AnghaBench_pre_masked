
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int x; int abs_event; int y; } ;
struct mousedev {TYPE_1__ packet; } ;
struct input_dev {int dummy; } ;




 int FUNC_0 (int,int,int) ;
 int FUNC_1 (struct input_dev*,int const) ;
 int FUNC_2 (struct input_dev*,int const) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct input_dev *VAR_2, struct mousedev *VAR_3,
    unsigned int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8;

 switch (VAR_4) {

 case 129:
  VAR_6 = FUNC_2(VAR_2, 129);
  VAR_7 = FUNC_1(VAR_2, 129);

  VAR_8 = VAR_7 - VAR_6;
  if (VAR_8 == 0)
   VAR_8 = VAR_0 ? : 1;

  VAR_5 = FUNC_0(VAR_5, VAR_6, VAR_7);

  VAR_3->packet.x = ((VAR_5 - VAR_6) * VAR_0) / VAR_8;
  VAR_3->packet.abs_event = 1;
  break;

 case 128:
  VAR_6 = FUNC_2(VAR_2, 128);
  VAR_7 = FUNC_1(VAR_2, 128);

  VAR_8 = VAR_7 - VAR_6;
  if (VAR_8 == 0)
   VAR_8 = VAR_1 ? : 1;

  VAR_5 = FUNC_0(VAR_5, VAR_6, VAR_7);

  VAR_3->packet.y = VAR_1 - ((VAR_5 - VAR_6) * VAR_1) / VAR_8;
  VAR_3->packet.abs_event = 1;
  break;
 }
}
