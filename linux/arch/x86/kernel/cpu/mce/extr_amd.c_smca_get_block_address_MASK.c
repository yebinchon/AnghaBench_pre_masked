
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (int ,unsigned int) ;
 int VAR_0 ;

__attribute__((used)) static u32 FUNC_4(unsigned int VAR_1, unsigned int VAR_2,
      unsigned int VAR_3)
{
 if (!VAR_2)
  return FUNC_1(VAR_1);

 if (!(FUNC_3(VAR_0, VAR_3) & FUNC_0(VAR_1)))
  return 0;

 return FUNC_2(VAR_1, VAR_2 - 1);
}
