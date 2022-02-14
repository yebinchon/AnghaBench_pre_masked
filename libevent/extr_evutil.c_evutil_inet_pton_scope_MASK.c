
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char const*,void*) ;
 int FUNC_1 (char*) ;
 unsigned int FUNC_2 (char*) ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (char const*,char) ;
 unsigned int FUNC_5 (char*,char**,int) ;

int
FUNC_6(int VAR_1, const char *VAR_2, void *VAR_3, unsigned *VAR_4)
{
 int VAR_5;
 unsigned VAR_6;
 char *VAR_7, *VAR_8, *VAR_9;

 *VAR_4 = 0;


 if (VAR_1 != VAR_0)
  return FUNC_0(VAR_1, VAR_2, VAR_3);

 VAR_8 = FUNC_4(VAR_2, '%');


 if (VAR_8 == ((void*)0))
  return FUNC_0(VAR_1, VAR_2, VAR_3);

 VAR_6 = FUNC_2(VAR_8 + 1);
 if (VAR_6 == 0) {

  VAR_6 = FUNC_5(VAR_8 + 1, &VAR_7, 10);
  if (VAR_7[0] != '\0')
   return 0;
 }
 *VAR_4 = VAR_6;
 VAR_9 = FUNC_3(VAR_2);
 VAR_8 = FUNC_4(VAR_9, '%');
 *VAR_8 = '\0';
 VAR_5 = FUNC_0(VAR_1, VAR_9, VAR_3);
 FUNC_1(VAR_9);
 return VAR_5;
}
