
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct reset_controller_dev {int dummy; } ;


 unsigned long FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 () ;
 unsigned long VAR_4 ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ VAR_6 ;
 int* VAR_7 ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct reset_controller_dev *VAR_8,
  unsigned long VAR_9)
{
 unsigned long VAR_10;
 unsigned long VAR_11;
 int VAR_12;
 u32 VAR_13;

 if (!VAR_6)
  return -VAR_1;

 if (VAR_9 >= FUNC_0(VAR_7))
  return -VAR_0;

 VAR_12 = 1 << VAR_7[VAR_9];

 FUNC_5(&VAR_5, VAR_11);
 VAR_13 = FUNC_4(VAR_6 + VAR_3);
 VAR_13 |= VAR_12;
 FUNC_8(VAR_13, VAR_6 + VAR_3);
 FUNC_6(&VAR_5, VAR_11);

 VAR_10 = VAR_4 + FUNC_2(1000);
 while (FUNC_3(VAR_6 + VAR_3) & VAR_12) {
  if (FUNC_7(VAR_4, VAR_10))
   return -VAR_2;
  FUNC_1();
 }

 return 0;
}
