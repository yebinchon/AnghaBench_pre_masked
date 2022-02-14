
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mb86a20s_state {int dummy; } ;


 unsigned int FUNC_0 (unsigned char*) ;
 int VAR_0 ;
 int FUNC_1 (struct mb86a20s_state*,int) ;
 int FUNC_2 (struct mb86a20s_state*,int,unsigned char) ;

__attribute__((used)) static int FUNC_3(struct mb86a20s_state *VAR_1,
         unsigned VAR_2)
{
 int VAR_3;
 int VAR_4[] = {
  0, 1, 2, 4, 8
 };

 static unsigned char VAR_5[] = {
  [0] = 0x88,
  [1] = 0x8c,
  [2] = 0x90,
 };

 if (VAR_2 >= FUNC_0(VAR_5))
  return -VAR_0;
 VAR_3 = FUNC_2(VAR_1, 0x6d, VAR_5[VAR_2]);
 if (VAR_3 < 0)
  return VAR_3;
 VAR_3 = FUNC_1(VAR_1, 0x6e);
 if (VAR_3 < 0)
  return VAR_3;

 return VAR_4[(VAR_3 >> 4) & 0x07];
}
