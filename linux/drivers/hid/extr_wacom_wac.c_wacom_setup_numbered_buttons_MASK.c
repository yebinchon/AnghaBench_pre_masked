
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int keybit; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct input_dev *VAR_0,
    int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  int VAR_3 = FUNC_1(VAR_2);

  if (VAR_3)
   FUNC_0(VAR_3, VAR_0->keybit);
 }
}
