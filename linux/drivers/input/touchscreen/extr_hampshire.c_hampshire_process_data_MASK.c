
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct hampshire {scalar_t__ idx; int data; struct input_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct input_dev*,int ,int ) ;
 int FUNC_4 (struct input_dev*,int ,int ) ;
 int FUNC_5 (struct input_dev*) ;

__attribute__((used)) static void FUNC_6(struct hampshire *VAR_4)
{
 struct input_dev *VAR_5 = VAR_4->dev;

 if (VAR_3 == ++VAR_4->idx) {
  FUNC_3(VAR_5, VAR_0, FUNC_1(VAR_4->data));
  FUNC_3(VAR_5, VAR_1, FUNC_2(VAR_4->data));
  FUNC_4(VAR_5, VAR_2,
     FUNC_0(VAR_4->data));
  FUNC_5(VAR_5);

  VAR_4->idx = 0;
 }
}
