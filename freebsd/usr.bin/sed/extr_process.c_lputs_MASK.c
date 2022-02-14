
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;
struct winsize {int ws_col; } ;
typedef int mbstate_t ;
typedef int mbs ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int,char*,int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,char*,...) ;
 int FUNC_4 (char,scalar_t__) ;
 int FUNC_5 (char*,int,size_t,scalar_t__) ;
 char* FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int ,int ,struct winsize*) ;
 scalar_t__ FUNC_8 (char) ;
 size_t FUNC_9 (char*,char*,size_t,int *) ;
 int FUNC_10 (int *,int ,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 char* FUNC_11 (char const*,int) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (char) ;
 int FUNC_14 (char) ;

__attribute__((used)) static void
FUNC_15(char *VAR_8, size_t VAR_9)
{
 static const char VAR_10[] = "\\\a\b\f\r\t\v";
 int VAR_11, VAR_12, VAR_13;
 const char *VAR_14;
 struct winsize VAR_15;
 static int VAR_16 = -1;
 size_t VAR_17, VAR_18;
 wchar_t VAR_19;
 mbstate_t VAR_20;

 if (VAR_5 != VAR_7)
  VAR_16 = 60;
 if (VAR_16 == -1) {
  if ((VAR_14 = FUNC_6("COLUMNS")) && *VAR_14 != '\0')
   VAR_16 = FUNC_0(VAR_14);
  else if (FUNC_7(VAR_2, VAR_3, &VAR_15) == 0 &&
      VAR_15.ws_col > 0)
   VAR_16 = VAR_15.ws_col;
  else
   VAR_16 = 60;
 }
 if (VAR_16 <= 0)
  VAR_16 = 1;

 FUNC_10(&VAR_20, 0, sizeof(VAR_20));
 VAR_12 = 0;
 while (VAR_9 != 0) {
  VAR_17 = FUNC_9(&VAR_19, VAR_8, VAR_9, &VAR_20);
  if (VAR_17 == 0)
   VAR_17 = 1;
  if (VAR_17 == (size_t)-1 || VAR_17 == (size_t)-2) {
   VAR_19 = (unsigned char)*VAR_8;
   VAR_17 = 1;
   FUNC_10(&VAR_20, 0, sizeof(VAR_20));
  }
  if (VAR_19 == '\n') {
   if (VAR_12 + 1 >= VAR_16)
    FUNC_3(VAR_5, "\\\n");
   FUNC_4('$', VAR_5);
   FUNC_4('\n', VAR_5);
   VAR_12 = 0;
  } else if (FUNC_8(VAR_19)) {
   VAR_13 = FUNC_14(VAR_19);
   if (VAR_12 + VAR_13 >= VAR_16) {
    FUNC_3(VAR_5, "\\\n");
    VAR_12 = 0;
   }
   FUNC_5(VAR_8, 1, VAR_17, VAR_5);
   VAR_12 += VAR_13;
  } else if (VAR_19 != L'\0' && (VAR_11 = FUNC_13(VAR_19)) != VAR_1 &&
      (VAR_14 = FUNC_11(VAR_10, VAR_11)) != ((void*)0)) {
   if (VAR_12 + 2 >= VAR_16) {
    FUNC_3(VAR_5, "\\\n");
    VAR_12 = 0;
   }
   FUNC_3(VAR_5, "\\%c", "\\abfrtv"[VAR_14 - VAR_10]);
   VAR_12 += 2;
  } else {
   if (VAR_12 + 4 * VAR_17 >= (unsigned)VAR_16) {
    FUNC_3(VAR_5, "\\\n");
    VAR_12 = 0;
   }
   for (VAR_18 = 0; VAR_18 < VAR_17; VAR_18++)
    FUNC_3(VAR_5, "\\%03o",
        (int)(unsigned char)VAR_8[VAR_18]);
   VAR_12 += 4 * VAR_17;
  }
  VAR_8 += VAR_17;
  VAR_9 -= VAR_17;
 }
 if (VAR_12 + 1 >= VAR_16)
  FUNC_3(VAR_5, "\\\n");
 (void)FUNC_4('$', VAR_5);
 (void)FUNC_4('\n', VAR_5);
 if (FUNC_2(VAR_5))
  FUNC_1(1, "%s: %s", VAR_6, FUNC_12(VAR_4 ? VAR_4 : VAR_0));
}
