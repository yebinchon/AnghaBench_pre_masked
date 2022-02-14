
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum protocol { ____Placeholder_protocol } protocol ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*) ;
 char* FUNC_5 (char**,int ) ;
 scalar_t__ FUNC_6 (char const*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*,int) ;
 char* FUNC_9 (char*,char*) ;
 char* FUNC_10 (char const*) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (char const*) ;

__attribute__((used)) static enum protocol FUNC_13(const char *VAR_4, char **VAR_5,
           char **VAR_6)
{
 char *VAR_7;
 char *VAR_8, *VAR_9;
 char *VAR_10;
 int VAR_11 = '/';
 enum protocol VAR_12 = VAR_2;

 if (FUNC_6(VAR_4))
  VAR_7 = FUNC_10(VAR_4);
 else
  VAR_7 = FUNC_12(VAR_4);

 VAR_8 = FUNC_9(VAR_7, "://");
 if (VAR_8) {
  *VAR_8 = '\0';
  VAR_12 = FUNC_3(VAR_7);
  VAR_8 += 3;
 } else {
  VAR_8 = VAR_7;
  if (!FUNC_11(VAR_7)) {
   VAR_12 = VAR_3;
   VAR_11 = ':';
  }
 }





 VAR_10 = FUNC_5(&VAR_8, 0);

 if (VAR_12 == VAR_2)
  VAR_9 = VAR_10;
 else if (VAR_12 == VAR_0 && *VAR_8 != '/' &&
   !FUNC_4(VAR_8) &&
   FUNC_7(VAR_8 - 2) > 1)
  VAR_9 = VAR_8 - 2;
 else if (VAR_12 == VAR_0 && FUNC_4(VAR_10))
  VAR_9 = VAR_10;
 else
  VAR_9 = FUNC_8(VAR_10, VAR_11);

 if (!VAR_9 || !*VAR_9)
  FUNC_1(FUNC_0("no path specified; see 'git help pull' for valid url syntax"));






 VAR_10 = VAR_9;
 if (VAR_11 == ':')
  VAR_9++;
 if (VAR_12 == VAR_1 || VAR_12 == VAR_3) {
  if (VAR_9[1] == '~')
   VAR_9++;
 }

 VAR_9 = FUNC_12(VAR_9);
 *VAR_10 = '\0';

 *VAR_5 = FUNC_12(VAR_8);
 *VAR_6 = VAR_9;
 FUNC_2(VAR_7);
 return VAR_12;
}
