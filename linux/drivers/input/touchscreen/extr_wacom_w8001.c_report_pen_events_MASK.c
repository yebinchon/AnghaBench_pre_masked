
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w8001_coord {int rdy; int f1; int tsw; int pen_pressure; int y; int x; int f2; } ;
struct w8001 {int type; struct input_dev* pen_dev; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;

 int const VAR_5 ;

 int const VAR_6 ;

 int FUNC_0 (struct input_dev*,int ,int ) ;
 int FUNC_1 (struct input_dev*,int const,int ) ;
 int FUNC_2 (struct input_dev*) ;

__attribute__((used)) static void FUNC_3(struct w8001 *VAR_7, struct w8001_coord *VAR_8)
{
 struct input_dev *VAR_9 = VAR_7->pen_dev;
 switch (VAR_7->type) {
 case 129:
  if (!VAR_8->f2) {
   FUNC_0(VAR_9, VAR_0, 0);
   FUNC_1(VAR_9, VAR_6, 0);
   FUNC_1(VAR_9, VAR_3, 0);
   FUNC_1(VAR_9, VAR_4, 0);
   FUNC_1(VAR_9, 129, 0);
   FUNC_2(VAR_9);
   VAR_7->type = VAR_5;
  }
  break;

 case 130:
 case 128:
  VAR_7->type = VAR_8->f2 ? 129 : VAR_5;
  break;

 default:
  FUNC_1(VAR_9, VAR_4, VAR_8->f2);
  break;
 }

 FUNC_0(VAR_9, VAR_1, VAR_8->x);
 FUNC_0(VAR_9, VAR_2, VAR_8->y);
 FUNC_0(VAR_9, VAR_0, VAR_8->pen_pressure);
 FUNC_1(VAR_9, VAR_6, VAR_8->tsw);
 FUNC_1(VAR_9, VAR_3, VAR_8->f1);
 FUNC_1(VAR_9, VAR_7->type, VAR_8->rdy);
 FUNC_2(VAR_9);

 if (!VAR_8->rdy)
  VAR_7->type = 128;
}
