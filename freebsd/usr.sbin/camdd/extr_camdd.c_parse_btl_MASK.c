
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int camdd_argmask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int *,int ) ;

__attribute__((used)) static int
FUNC_3(char *VAR_3, int *VAR_4, int *VAR_5, int *VAR_6, camdd_argmask *VAR_7)
{
 char *VAR_8;
 int VAR_9 = 0;

 while (FUNC_0(*VAR_3) && (*VAR_3 != '\0'))
  VAR_3++;

 VAR_8 = (char *)FUNC_1(VAR_3, ":");
 if ((VAR_8 != ((void*)0)) && (*VAR_8 != '\0')) {
  *VAR_4 = FUNC_2(VAR_8, ((void*)0), 0);
  *VAR_7 |= VAR_0;
  VAR_9++;
  VAR_8 = (char *)FUNC_1(((void*)0), ":");
  if ((VAR_8 != ((void*)0)) && (*VAR_8 != '\0')) {
   *VAR_5 = FUNC_2(VAR_8, ((void*)0), 0);
   *VAR_7 |= VAR_2;
   VAR_9++;
   VAR_8 = (char *)FUNC_1(((void*)0), ":");
   if ((VAR_8 != ((void*)0)) && (*VAR_8 != '\0')) {
    *VAR_6 = FUNC_2(VAR_8, ((void*)0), 0);
    *VAR_7 |= VAR_1;
    VAR_9++;
   }
  }
 }

 return VAR_9;
}
