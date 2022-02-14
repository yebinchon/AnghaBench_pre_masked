
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct locomokbd {scalar_t__ base; } ;
struct input_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct locomokbd* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct input_dev *VAR_1)
{
 struct locomokbd *VAR_2 = FUNC_0(VAR_1);
 u16 VAR_3;

 VAR_3 = FUNC_1(VAR_2->base + VAR_0) & ~0x0010;
 FUNC_2(VAR_3, VAR_2->base + VAR_0);
}
