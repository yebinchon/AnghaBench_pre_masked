
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; scalar_t__ len; } ;
typedef enum sideband_type { ____Placeholder_sideband_type } sideband_type ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct strbuf*,char const*,int) ;
 int FUNC_4 (struct strbuf*,char const) ;
 int FUNC_5 (struct strbuf*,char*,char*,char const*,...) ;
 int FUNC_6 (struct strbuf*,char const*) ;
 int FUNC_7 (struct strbuf*) ;
 int FUNC_8 (struct strbuf*) ;
 int FUNC_9 (char const*) ;
 char* FUNC_10 (char const*,char*) ;
 int FUNC_11 (int,char*,scalar_t__) ;

int FUNC_12(const char *VAR_7, char *VAR_8, int VAR_9,
    int VAR_10,
    struct strbuf *VAR_11,
    enum sideband_type *VAR_12)
{
 static const char *VAR_13;
 const char *VAR_14, *VAR_15;
 int VAR_16;

 if (!VAR_13) {
  if (FUNC_2(2) && !FUNC_1())
   VAR_13 = VAR_0;
  else
   VAR_13 = VAR_2;
 }

 if (VAR_9 == 0) {
  *VAR_12 = VAR_3;
  goto cleanup;
 }
 if (VAR_9 < 1) {
  FUNC_5(VAR_11,
       "%s%s: protocol error: no band designator",
       VAR_11->len ? "\n" : "", VAR_7);
  *VAR_12 = VAR_5;
  goto cleanup;
 }
 VAR_16 = VAR_8[0] & 0xff;
 VAR_8[VAR_9] = '\0';
 VAR_9--;
 switch (VAR_16) {
 case 3:
  if (VAR_10)
   FUNC_0("remote error: %s", VAR_8 + 1);
  FUNC_5(VAR_11, "%s%s", VAR_11->len ? "\n" : "",
       VAR_1);
  FUNC_3(VAR_11, VAR_8 + 1, VAR_9);

  *VAR_12 = VAR_6;
  break;
 case 2:
  VAR_14 = VAR_8 + 1;
  while ((VAR_15 = FUNC_10(VAR_14, "\n\r"))) {
   int VAR_17 = VAR_15 - VAR_14;

   if (!VAR_11->len)
    FUNC_6(VAR_11, VAR_1);
   if (VAR_17 > 0) {
    FUNC_3(VAR_11, VAR_14, VAR_17);
    FUNC_6(VAR_11, VAR_13);
   }

   FUNC_4(VAR_11, *VAR_15);
   FUNC_11(2, VAR_11->buf, VAR_11->len);
   FUNC_8(VAR_11);

   VAR_14 = VAR_15 + 1;
  }

  if (*VAR_14) {
   FUNC_6(VAR_11, VAR_11->len ?
        "" : VAR_1);
   FUNC_3(VAR_11, VAR_14, FUNC_9(VAR_14));
  }
  return 0;
 case 1:
  *VAR_12 = VAR_4;
  break;
 default:
  FUNC_5(VAR_11, "%s%s: protocol error: bad band #%d",
       VAR_11->len ? "\n" : "", VAR_7, VAR_16);
  *VAR_12 = VAR_5;
  break;
 }

cleanup:
 if (VAR_10 && *VAR_12 == VAR_5)
  FUNC_0("%s", VAR_11->buf);
 if (VAR_11->len) {
  FUNC_4(VAR_11, '\n');
  FUNC_11(2, VAR_11->buf, VAR_11->len);
 }
 FUNC_7(VAR_11);
 return 1;
}
