
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct reset_controller_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct reset_controller_dev *VAR_4,
     unsigned long VAR_5)
{
 u32 VAR_6 = VAR_5;

 if (VAR_6 >= VAR_1)
  return -VAR_0;

 FUNC_1(&VAR_2);
 FUNC_4(FUNC_3(VAR_3 +
   (VAR_6 / 32) * 4) | (1 << VAR_6),
  VAR_3 + (VAR_6 / 32) * 4);
 FUNC_0(20);
 FUNC_4(FUNC_3(VAR_3 +
   (VAR_6 / 32) * 4) & ~(1 << VAR_6),
  VAR_3 + (VAR_6 / 32) * 4);

 FUNC_2(&VAR_2);

 return 0;
}
