
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__*,char*,int,char const**,int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char) ;
 int FUNC_3 (char) ;
 int FUNC_4 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_5(size_t *VAR_3, const char *VAR_4, size_t VAR_5)
{
 char VAR_6[VAR_2 + 1];
 int VAR_7, VAR_8, VAR_9;
 int32_t VAR_10;
 const char *VAR_11;


 if (VAR_5 < VAR_2)
  return VAR_0;

 FUNC_4(VAR_6, VAR_4, VAR_2);
 VAR_6[VAR_2] = '\0';

 for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7) {
  if (!FUNC_3(VAR_6[VAR_7])) {

   for (VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8) {
    if(!FUNC_2(VAR_6[VAR_8])) {
     VAR_6[VAR_8] = '.';
    }
   }

   FUNC_1(VAR_1, "invalid hex digit in length: '%s'", VAR_6);
   return -1;
  }
 }

 if ((VAR_9 = FUNC_0(&VAR_10, VAR_6, VAR_2, &VAR_11, 16)) < 0)
  return VAR_9;

 if (VAR_10 < 0)
  return -1;

 *VAR_3 = (size_t) VAR_10;
 return 0;
}
