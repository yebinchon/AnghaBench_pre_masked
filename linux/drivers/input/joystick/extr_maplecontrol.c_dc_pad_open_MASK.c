
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dev; } ;
struct dc_pad {int mdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dc_pad* FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct input_dev *VAR_3)
{
 struct dc_pad *VAR_4 = FUNC_0(&VAR_3->dev);

 FUNC_1(VAR_4->mdev, VAR_2, VAR_0/20,
  VAR_1);

 return 0;
}
