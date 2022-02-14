
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (unsigned long,int ) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void *FUNC_3(unsigned long VAR_4)
{
 unsigned long VAR_5, VAR_6 = (unsigned long)VAR_2;

 VAR_5 = VAR_2 - (VAR_1 + VAR_3);

 if (VAR_4 > VAR_5) {
  FUNC_2("Not enough space in SRAM\n");
  return ((void*)0);
 }

 VAR_6 -= VAR_4;
 VAR_6 = FUNC_1(VAR_6, VAR_0);
 VAR_2 = FUNC_0(VAR_6);

 return (void *)VAR_2;
}
