
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int) ;

int FUNC_2(unsigned VAR_2, unsigned VAR_3)
{
 uint32_t VAR_4, VAR_5;

 if (VAR_2 > 7 || VAR_3 > 15)
  return -VAR_0;

 FUNC_0(VAR_1, VAR_4, VAR_5);

 VAR_4 &= ~(0xF << (VAR_2 * 4));
 VAR_4 |= (VAR_3 & 0xF) << (VAR_2 * 4);

 FUNC_1(VAR_1, VAR_4, VAR_5);
 return 0;
}
