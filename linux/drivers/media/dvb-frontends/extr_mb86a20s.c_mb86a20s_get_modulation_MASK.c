
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
 int FUNC_1 (struct mb86a20s_state*,int) ;
 int FUNC_2 (struct mb86a20s_state*,int,unsigned char) ;

__attribute__((used)) static int FUNC_3(struct mb86a20s_state *VAR_6,
       unsigned VAR_7)
{
 int VAR_8;
 static unsigned char VAR_9[] = {
  [0] = 0x86,
  [1] = 0x8a,
  [2] = 0x8e,
 };

 if (VAR_7 >= FUNC_0(VAR_9))
  return -VAR_1;
 VAR_8 = FUNC_2(VAR_6, 0x6d, VAR_9[VAR_7]);
 if (VAR_8 < 0)
  return VAR_8;
 VAR_8 = FUNC_1(VAR_6, 0x6e);
 if (VAR_8 < 0)
  return VAR_8;
 switch ((VAR_8 >> 4) & 0x07) {
 case 0:
  return VAR_0;
 case 1:
  return VAR_5;
 case 2:
  return VAR_2;
 case 3:
  return VAR_3;
 default:
  return VAR_4;
 }
}
