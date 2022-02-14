
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dev; } ;
struct dc_pad {int mdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dc_pad* FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct input_dev *VAR_2)
{
 struct dc_pad *VAR_3 = FUNC_0(&VAR_2->dev);

 FUNC_1(VAR_3->mdev, VAR_1, 0,
  VAR_0);
}
