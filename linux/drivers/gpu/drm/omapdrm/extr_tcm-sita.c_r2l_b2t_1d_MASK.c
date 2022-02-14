
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;


 int VAR_0 ;
 int FUNC_0 (unsigned long*,unsigned long,size_t) ;
 unsigned long FUNC_1 (unsigned long*,size_t,unsigned long) ;

__attribute__((used)) static int FUNC_2(u16 VAR_1, unsigned long *VAR_2, unsigned long *VAR_3,
  size_t VAR_4)
{
 unsigned long VAR_5 = 0;
 unsigned long VAR_6;
 bool VAR_7 = 0;

 *VAR_2 = VAR_4 - VAR_1;

 while (VAR_5 < VAR_4) {
  VAR_6 = FUNC_1(VAR_3, VAR_4, *VAR_2);

  if (VAR_6 - *VAR_2 >= VAR_1) {

   FUNC_0(VAR_3, *VAR_2, VAR_1);
   VAR_7 = 1;
   break;
  }

  VAR_5 = VAR_4 - VAR_6 + VAR_1;
  *VAR_2 = VAR_6 - VAR_1;
 }

 return (VAR_7) ? 0 : -VAR_0;
}
