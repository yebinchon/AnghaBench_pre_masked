
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 char** VAR_3 ;
 int FUNC_0 (char*,int,char*,int,char*) ;

__attribute__((used)) static ssize_t FUNC_1(struct device_driver *VAR_4, char *VAR_5)
{
 ssize_t VAR_6 = 0;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  if (VAR_2[VAR_7] == -1)
   continue;
  VAR_6 += FUNC_0(VAR_5 + VAR_6, VAR_0 - VAR_6,
     "PPC440SP(E)-ADMA.%d: %s\n", VAR_7,
     VAR_3[VAR_2[VAR_7]]);
 }
 return VAR_6;
}
