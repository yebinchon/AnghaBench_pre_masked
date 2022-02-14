
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct input_dev {int dummy; } ;
struct ili210x {int max_touches; scalar_t__ model; int prop; struct input_dev* input; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ili210x*,int*,int,unsigned int*,unsigned int*) ;
 int FUNC_1 (struct ili210x*,int*,int,unsigned int*,unsigned int*) ;
 int FUNC_2 (struct input_dev*,int) ;
 int FUNC_3 (struct input_dev*,int ,int) ;
 int FUNC_4 (struct input_dev*,int) ;
 int FUNC_5 (struct input_dev*) ;
 int FUNC_6 (struct input_dev*,int *,unsigned int,unsigned int,int) ;

__attribute__((used)) static bool FUNC_7(struct ili210x *VAR_3, u8 *VAR_4)
{
 struct input_dev *VAR_5 = VAR_3->input;
 int VAR_6;
 bool VAR_7 = 0, VAR_8 = 0;
 unsigned int VAR_9 = 0, VAR_10 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_3->max_touches; VAR_6++) {
  if (VAR_3->model == VAR_0) {
   VAR_8 = FUNC_0(VAR_3, VAR_4,
           VAR_6, &VAR_9, &VAR_10);
  } else if (VAR_3->model == VAR_1) {
   VAR_8 = FUNC_1(VAR_3, VAR_4,
           VAR_6, &VAR_9, &VAR_10);
   if (VAR_8)
    VAR_7 = 1;
  }

  FUNC_4(VAR_5, VAR_6);
  FUNC_3(VAR_5, VAR_2, VAR_8);
  if (!VAR_8)
   continue;
  FUNC_6(VAR_5, &VAR_3->prop, VAR_9, VAR_10,
           1);
 }

 FUNC_2(VAR_5, 0);
 FUNC_5(VAR_5);

 if (VAR_3->model == VAR_0)
  VAR_7 = VAR_4[0] & 0xf3;

 return VAR_7;
}
