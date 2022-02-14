
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct ad7879 {struct input_dev* input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct input_dev*,int ,int ) ;
 int FUNC_1 (struct input_dev*,int ,int ) ;
 int FUNC_2 (struct input_dev*) ;

__attribute__((used)) static void FUNC_3(struct ad7879 *VAR_2)
{
 struct input_dev *VAR_3 = VAR_2->input;

 FUNC_0(VAR_3, VAR_0, 0);
 FUNC_1(VAR_3, VAR_1, 0);
 FUNC_2(VAR_3);
}
