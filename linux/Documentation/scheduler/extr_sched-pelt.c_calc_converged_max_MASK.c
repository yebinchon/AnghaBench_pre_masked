
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,long) ;
 unsigned long VAR_4 ;

void FUNC_1(void)
{
 long VAR_5 = 0, VAR_6 = ((1UL<<32)-1)*VAR_4;

 for (; ; VAR_3++) {
  if (VAR_3 > -1)
   VAR_2 = ((VAR_2*VAR_6)>>VAR_1) + 1024;





  if (VAR_5 == VAR_2)
   break;

  VAR_5 = VAR_2;
 }
 VAR_3--;
 FUNC_0("#define LOAD_AVG_PERIOD %d\n", VAR_0);
 FUNC_0("#define LOAD_AVG_MAX %ld\n", VAR_2);

}
