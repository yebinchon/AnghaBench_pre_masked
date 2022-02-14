
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct touchscreen_properties {int dummy; } ;
struct input_dev {int dummy; } ;


 int const FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*,int const) ;
 int FUNC_4 (struct input_dev*,struct touchscreen_properties*,int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct input_dev *VAR_2,
     struct touchscreen_properties *VAR_3,
     const u8 *VAR_4, int VAR_5)
{
 for (; VAR_5--; VAR_4 += VAR_0) {
  if (VAR_4[0] & FUNC_0(0)) {
   FUNC_3(VAR_2, VAR_4[1]);
   FUNC_2(VAR_2, VAR_1, 1);
   FUNC_4(VAR_2, VAR_3,
            FUNC_1(VAR_4 + 2),
            FUNC_1(VAR_4 + 4),
            1);
  }
 }
}
