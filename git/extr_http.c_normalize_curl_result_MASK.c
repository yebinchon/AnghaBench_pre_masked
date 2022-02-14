
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,size_t,char*,long) ;

void FUNC_1(CURLcode *VAR_2, long VAR_3,
      char *VAR_4, size_t VAR_5)
{
 if (*VAR_2 == VAR_1 && VAR_3 >= 300) {
  *VAR_2 = VAR_0;






  FUNC_0(VAR_4, VAR_5,
     "The requested URL returned error: %ld",
     VAR_3);
 }
}
