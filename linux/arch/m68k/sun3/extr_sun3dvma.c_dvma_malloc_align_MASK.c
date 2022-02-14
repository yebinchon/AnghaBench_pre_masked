
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int ,int ) ;
 unsigned long FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long,unsigned long) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (unsigned long,int ) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (char*,unsigned long,...) ;

void *FUNC_8(unsigned long VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5;
 unsigned long VAR_6;
 unsigned long VAR_7;

 if(!VAR_3)
  return ((void*)0);

 FUNC_7("dvma_malloc request %lx bytes\n", VAR_3);
 VAR_3 = ((VAR_3 + (VAR_1-1)) & VAR_0);

        if((VAR_5 = FUNC_0(VAR_2, FUNC_6(VAR_3))) == 0)
  return ((void*)0);

 if((VAR_6 = (unsigned long)FUNC_2(VAR_5, VAR_3, VAR_4)) == 0) {
  FUNC_5(VAR_5, FUNC_6(VAR_3));
  return ((void*)0);
 }

 VAR_7 = FUNC_1(VAR_6);

 if(FUNC_3(VAR_5, VAR_7, VAR_3) < 0) {
  FUNC_4((void *)VAR_6);
  FUNC_5(VAR_5, FUNC_6(VAR_3));
  return ((void*)0);
 }

 FUNC_7("mapped %08lx bytes %08lx kern -> %08lx bus\n", VAR_3, VAR_5,
   VAR_6);

 return (void *)VAR_7;

}
