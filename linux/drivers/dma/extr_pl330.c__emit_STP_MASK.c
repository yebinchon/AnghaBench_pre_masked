
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef enum pl330_cond { ____Placeholder_pl330_cond } pl330_cond ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline u32 FUNC_1(unsigned VAR_4, u8 VAR_5[],
  enum pl330_cond VAR_6, u8 VAR_7)
{
 if (VAR_4)
  return VAR_3;

 VAR_5[0] = VAR_1;

 if (VAR_6 == VAR_0)
  VAR_5[0] |= (1 << 1);

 VAR_7 &= 0x1f;
 VAR_7 <<= 3;
 VAR_5[1] = VAR_7;

 FUNC_0(VAR_3, "\tDMASTP%c %u\n",
  VAR_6 == VAR_2 ? 'S' : 'B', VAR_7 >> 3);

 return VAR_3;
}
