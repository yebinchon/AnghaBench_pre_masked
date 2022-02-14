
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
typedef int off_t ;
typedef int buf2 ;
typedef int buf1 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,char const*,int,int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (char*,long long,char,char) ;
 int FUNC_5 (char const*,char*,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

void
FUNC_6(const char *VAR_6, off_t VAR_7, const char *VAR_8, off_t VAR_9)
{
 char VAR_10[VAR_2], *VAR_11;
 char VAR_12[VAR_2], *VAR_13;
 int VAR_14, VAR_15, VAR_16;
 off_t VAR_17;
 u_char VAR_18;

 if ((VAR_15 = FUNC_5(VAR_6, VAR_10, sizeof(VAR_10) - 1)) < 0) {
  if (!VAR_4)
   FUNC_2(VAR_1, "%s", VAR_6);
  else
   FUNC_3(VAR_1);
 }

 if ((VAR_16 = FUNC_5(VAR_8, VAR_12, sizeof(VAR_12) - 1)) < 0) {
  if (!VAR_4)
   FUNC_2(VAR_1, "%s", VAR_8);
  else
   FUNC_3(VAR_1);
 }

 if (VAR_7 > VAR_15)
  VAR_7 = VAR_15;
 VAR_10[VAR_15] = '\0';

 if (VAR_9 > VAR_16)
  VAR_9 = VAR_16;
 VAR_12[VAR_16] = '\0';

 VAR_14 = 0;
 VAR_17 = 1;
 for (VAR_11 = VAR_10 + VAR_7, VAR_13 = VAR_12 + VAR_9; *VAR_11 && *VAR_13; VAR_11++, VAR_13++) {
  if ((VAR_18 = *VAR_11) != *VAR_13) {
   if (VAR_5) {
    VAR_14 = 1;
    (void)FUNC_4("%08llx %02x %02x\n",
        (long long)VAR_17 - 1, VAR_18, *VAR_13);
   } else if (VAR_3) {
    VAR_14 = 1;
    (void)FUNC_4("%6lld %3o %3o\n",
        (long long)VAR_17, VAR_18, *VAR_13);
   } else
    FUNC_0(VAR_6, VAR_8, VAR_17, 1);

  }
  VAR_17++;
 }

 if (*VAR_11 || *VAR_13)
  FUNC_1 (*VAR_11 ? VAR_8 : VAR_6);
 if (VAR_14)
  FUNC_3(VAR_0);
}
