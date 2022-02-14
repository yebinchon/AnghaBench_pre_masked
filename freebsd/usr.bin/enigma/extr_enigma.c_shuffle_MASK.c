
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static void
FUNC_0(char VAR_3[])
{
 int VAR_4, VAR_5, VAR_6, VAR_7;
 unsigned VAR_8;
 static int32_t VAR_9 = 123;

 for(VAR_4=0;VAR_4<VAR_1;VAR_4++) {
  VAR_9 = 5*VAR_9 + VAR_2[VAR_4%13];
  VAR_8 = VAR_9 % 65521;
  VAR_6 = VAR_1-1 - VAR_4;
  VAR_5 = (VAR_8&VAR_0)%(VAR_6+1);
  VAR_7 = VAR_3[VAR_6];
  VAR_3[VAR_6] = VAR_3[VAR_5];
  VAR_3[VAR_5] = VAR_7;
 }
}
