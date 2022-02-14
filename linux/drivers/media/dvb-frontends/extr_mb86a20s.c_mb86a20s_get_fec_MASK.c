
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mb86a20s_state {int dummy; } ;


 unsigned int FUNC_0 (unsigned char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct mb86a20s_state*,int) ;
 int FUNC_2 (struct mb86a20s_state*,int,unsigned char) ;

__attribute__((used)) static int FUNC_3(struct mb86a20s_state *VAR_7,
       unsigned VAR_8)
{
 int VAR_9;

 static unsigned char VAR_10[] = {
  [0] = 0x87,
  [1] = 0x8b,
  [2] = 0x8f,
 };

 if (VAR_8 >= FUNC_0(VAR_10))
  return -VAR_0;
 VAR_9 = FUNC_2(VAR_7, 0x6d, VAR_10[VAR_8]);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_9 = FUNC_1(VAR_7, 0x6e);
 if (VAR_9 < 0)
  return VAR_9;
 switch ((VAR_9 >> 4) & 0x07) {
 case 0:
  return VAR_1;
 case 1:
  return VAR_2;
 case 2:
  return VAR_3;
 case 3:
  return VAR_4;
 case 4:
  return VAR_5;
 default:
  return VAR_6;
 }
}
