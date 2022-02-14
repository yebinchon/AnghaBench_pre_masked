
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int*,unsigned int*,unsigned int) ;

__attribute__((used)) static void FUNC_1(
  unsigned int VAR_0,
  unsigned int VAR_1,
  unsigned int VAR_2,
  bool *VAR_3,
  bool *VAR_4)
{
 unsigned int VAR_5 = 164 * 1024;

 unsigned int VAR_6 = 0;
 unsigned int VAR_7 = 0;
 unsigned int VAR_8, VAR_9;

 FUNC_0(&VAR_7, &VAR_6, VAR_2);

 VAR_8 = VAR_1 * VAR_6 * VAR_2;
 VAR_9 = VAR_0 * VAR_7 * VAR_2;

 *VAR_3 = (2 * VAR_8 <= VAR_5) ?
   0 :
   1;

 *VAR_4 = (2 * VAR_9 <= VAR_5) ?
   0 :
   1;
}
