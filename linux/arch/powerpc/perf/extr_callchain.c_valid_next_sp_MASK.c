
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long,int ,int ) ;

__attribute__((used)) static int FUNC_1(unsigned long VAR_4, unsigned long VAR_5)
{
 if (VAR_4 & 0xf)
  return 0;
 if (!FUNC_0(VAR_4, VAR_3, VAR_1))
  return 0;
 if (VAR_4 >= VAR_5 + VAR_0)
  return 1;




 if ((VAR_4 & ~(VAR_2 - 1)) != (VAR_5 & ~(VAR_2 - 1)))
  return 1;
 return 0;
}
