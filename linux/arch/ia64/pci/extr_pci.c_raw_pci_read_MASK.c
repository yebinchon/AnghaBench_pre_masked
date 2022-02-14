
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int,unsigned int,unsigned int,int) ;
 scalar_t__ FUNC_1 (unsigned int,unsigned int,unsigned int,int) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (scalar_t__,int,int,scalar_t__*) ;
 scalar_t__ VAR_1 ;

int FUNC_4(unsigned int VAR_2, unsigned int VAR_3, unsigned int VAR_4,
       int VAR_5, int VAR_6, u32 *VAR_7)
{
 u64 VAR_8, VAR_9 = 0;
 int VAR_10, VAR_11;

 if (!VAR_7 || (VAR_2 > 65535) || (VAR_3 > 255) || (VAR_4 > 255) || (VAR_5 > 4095))
  return -VAR_0;

 if ((VAR_2 | VAR_5) <= 255) {
  VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
  VAR_10 = 0;
 } else if (VAR_1 >= FUNC_2(3,2)) {
  VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
  VAR_10 = 1;
 } else {
  return -VAR_0;
 }

 VAR_11 = FUNC_3(VAR_8, VAR_10, VAR_6, &VAR_9);
 if (VAR_11 != 0)
  return -VAR_0;

 *VAR_7 = (u32) VAR_9;
 return 0;
}
