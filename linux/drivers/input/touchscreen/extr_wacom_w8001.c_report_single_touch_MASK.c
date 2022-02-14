
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w8001_coord {unsigned int x; unsigned int y; scalar_t__ tsw; } ;
struct w8001 {int type; struct input_dev* touch_dev; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct input_dev*,int ,unsigned int) ;
 int FUNC_1 (struct input_dev*,int ,scalar_t__) ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct w8001*,unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_4(struct w8001 *VAR_5, struct w8001_coord *VAR_6)
{
 struct input_dev *VAR_7 = VAR_5->touch_dev;
 unsigned int VAR_8 = VAR_6->x;
 unsigned int VAR_9 = VAR_6->y;


 FUNC_3(VAR_5, &VAR_8, &VAR_9);

 FUNC_0(VAR_7, VAR_0, VAR_8);
 FUNC_0(VAR_7, VAR_1, VAR_9);
 FUNC_1(VAR_7, VAR_3, VAR_6->tsw);

 FUNC_2(VAR_7);

 VAR_5->type = VAR_6->tsw ? VAR_2 : VAR_4;
}
