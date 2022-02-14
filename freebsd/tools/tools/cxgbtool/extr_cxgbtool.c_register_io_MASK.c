
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (char*,char**,int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char const*,int,int) ;

__attribute__((used)) static int
FUNC_5(int VAR_0, char *VAR_1[], int VAR_2,
         const char *VAR_3)
{
 char *VAR_4;
 uint32_t VAR_5, VAR_6 = 0, VAR_7 = 0;

 if (VAR_0 != VAR_2 + 1) return -1;

 VAR_5 = FUNC_2(VAR_1[VAR_2], &VAR_4, 0);
 if (VAR_4 == VAR_1[VAR_2]) return -1;
 if (*VAR_4 == '=' && VAR_4[1]) {
  VAR_6 = FUNC_2(VAR_4 + 1, &VAR_4, 0);
  VAR_7 = 1;
 }
 if (*VAR_4) {
  FUNC_3("bad parameter \"%s\"", VAR_1[VAR_2]);
  return -1;
 }

 if (VAR_7)
  FUNC_4(VAR_3, VAR_5, VAR_6);
 else {
  VAR_6 = FUNC_1(VAR_3, VAR_5);
  FUNC_0("%#x [%u]\n", VAR_6, VAR_6);
 }
 return 0;
}
