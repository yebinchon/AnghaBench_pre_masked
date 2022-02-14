
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct input_dev *VAR_3, struct input_dev *VAR_4,
    int VAR_5, int VAR_6, int VAR_7)
{
 struct input_dev *VAR_8;






 VAR_8 = (VAR_4 && FUNC_2(VAR_0, VAR_4->key)) ? VAR_4 : VAR_3;
 FUNC_0(VAR_8, VAR_0, VAR_5);

 VAR_8 = (VAR_4 && FUNC_2(VAR_2, VAR_4->key)) ? VAR_4 : VAR_3;
 FUNC_0(VAR_8, VAR_2, VAR_6);

 VAR_8 = (VAR_4 && FUNC_2(VAR_1, VAR_4->key)) ? VAR_4 : VAR_3;
 FUNC_0(VAR_8, VAR_1, VAR_7);





 if (VAR_4)
  FUNC_1(VAR_4);
}
