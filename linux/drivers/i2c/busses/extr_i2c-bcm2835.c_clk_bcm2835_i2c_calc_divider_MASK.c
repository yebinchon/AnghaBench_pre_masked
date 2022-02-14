
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(unsigned long VAR_3,
    unsigned long VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_4, VAR_3);






 if (VAR_5 & 1)
  VAR_5++;
 if ((VAR_5 < VAR_1) ||
     (VAR_5 > VAR_0))
  return -VAR_2;

 return VAR_5;
}
