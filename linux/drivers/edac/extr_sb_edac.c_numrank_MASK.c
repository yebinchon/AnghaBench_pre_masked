
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum type { ____Placeholder_type } type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,int,unsigned int,int ) ;

__attribute__((used)) static inline int FUNC_2(enum type VAR_4, u32 VAR_5)
{
 int VAR_6 = (1 << FUNC_0(VAR_5));
 int VAR_7 = 4;

 if (VAR_4 == VAR_2 || VAR_4 == VAR_0 || VAR_4 == VAR_3)
  VAR_7 = 8;

 if (VAR_6 > VAR_7) {
  FUNC_1(0, "Invalid number of ranks: %d (max = %i) raw value = %x (%04x)\n",
    VAR_6, VAR_7, (unsigned int)FUNC_0(VAR_5), VAR_5);
  return -VAR_1;
 }

 return VAR_6;
}
