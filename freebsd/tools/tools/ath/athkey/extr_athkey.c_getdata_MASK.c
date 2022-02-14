
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,...) ;
 int FUNC_2 (char const) ;
 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char const) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_2, u_int8_t *VAR_3, size_t VAR_4)
{
 const char *VAR_5 = VAR_2;
 int VAR_6;

 if (VAR_5[0] == '0' && (VAR_5[1] == 'x' || VAR_5[1] == 'X'))
  VAR_5 += 2;
 VAR_6 = 0;
 while (*VAR_5) {
  int VAR_7, VAR_8;
  if (VAR_5[0] == ':' || VAR_5[0] == '-' || VAR_5[0] == '.') {
   VAR_5++;
   continue;
  }
  if (!FUNC_2(VAR_5[0])) {
   FUNC_1(VAR_1, "%s: invalid data value %c (not hex)\n",
    VAR_0, VAR_5[0]);
   FUNC_0(-1);
  }
  VAR_7 = FUNC_3(VAR_5[0]);
  if (VAR_5[1] != '\0') {
   if (!FUNC_2(VAR_5[1])) {
    FUNC_1(VAR_1, "%s: invalid data value %c "
     "(not hex)\n", VAR_0, VAR_5[1]);
    FUNC_0(-1);
   }
   VAR_8 = FUNC_3(VAR_5[1]);
   VAR_5 += 2;
  } else {
   VAR_8 = VAR_7, VAR_7 = 0;
   VAR_5 += 1;
  }
  if (VAR_6 > VAR_4) {
   FUNC_1(VAR_1,
    "%s: too much data in %s, max %llu bytes\n",
    VAR_0, VAR_2, (unsigned long long) VAR_4);
  }
  VAR_3[VAR_6++] = (VAR_7<<4) | VAR_8;
 }
 return VAR_6;
}
