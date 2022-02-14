
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (unsigned long,char const*,unsigned long) ;
 unsigned long VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int,char const*,unsigned long) ;

__attribute__((used)) static void FUNC_3(const void *VAR_3, unsigned long VAR_4)
{
 const char *VAR_5 = VAR_3;

 if (VAR_2) {
  unsigned long VAR_6 = VAR_0 - VAR_2;
  if (VAR_4 < VAR_6)
   VAR_6 = VAR_4;
  FUNC_0(VAR_1 + VAR_2, VAR_5, VAR_6);
  VAR_4 -= VAR_6;
  VAR_2 += VAR_6;
  VAR_5 += VAR_6;
  FUNC_1();
 }
 while (VAR_4 >= VAR_0) {
  FUNC_2(1, VAR_5, VAR_0);
  VAR_4 -= VAR_0;
  VAR_5 += VAR_0;
 }
 if (VAR_4) {
  FUNC_0(VAR_1 + VAR_2, VAR_5, VAR_4);
  VAR_2 += VAR_4;
 }
}
