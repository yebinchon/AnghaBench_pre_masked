
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsc200x {int pen_down; int dev; int idev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct tsc200x *VAR_4,
         int VAR_5, int VAR_6, int VAR_7)
{
 if (VAR_7) {
  FUNC_1(VAR_4->idev, VAR_1, VAR_5);
  FUNC_1(VAR_4->idev, VAR_2, VAR_6);
  FUNC_1(VAR_4->idev, VAR_0, VAR_7);
  if (!VAR_4->pen_down) {
   FUNC_2(VAR_4->idev, VAR_3, !!VAR_7);
   VAR_4->pen_down = 1;
  }
 } else {
  FUNC_1(VAR_4->idev, VAR_0, 0);
  if (VAR_4->pen_down) {
   FUNC_2(VAR_4->idev, VAR_3, 0);
   VAR_4->pen_down = 0;
  }
 }
 FUNC_3(VAR_4->idev);
 FUNC_0(VAR_4->dev, "point(%4d,%4d), pressure (%4d)\n", VAR_5, VAR_6,
  VAR_7);
}
