
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef enum pl330_cond { ____Placeholder_pl330_cond } pl330_cond ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline u32 FUNC_1(unsigned VAR_4, u8 VAR_5[], enum pl330_cond VAR_6)
{
 if (VAR_4)
  return VAR_3;

 VAR_5[0] = VAR_1;

 if (VAR_6 == VAR_2)
  VAR_5[0] |= (0 << 1) | (1 << 0);
 else if (VAR_6 == VAR_0)
  VAR_5[0] |= (1 << 1) | (1 << 0);

 FUNC_0(VAR_3, "\tDMAST%c\n",
  VAR_6 == VAR_2 ? 'S' : (VAR_6 == VAR_0 ? 'B' : 'A'));

 return VAR_3;
}
