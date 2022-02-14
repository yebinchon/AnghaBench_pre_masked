
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int,char*,int) ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*,char*,...) ;
 char* FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;
 int FUNC_9 (char*,char const*,int) ;
 char* FUNC_10 (char const*,char*) ;
 int FUNC_11 (char*,char**,int ) ;
 int FUNC_12 (int,char*,int) ;

__attribute__((used)) static int FUNC_13(const char *VAR_0)
{
 char *VAR_1, *VAR_2, *VAR_3, *VAR_4, *VAR_5, *VAR_6, *VAR_7, *VAR_8;
 int VAR_9, VAR_10, VAR_11;


 if (FUNC_10(VAR_0, "http://") != VAR_0) return 0;

 for (VAR_1 = (char*)VAR_0 + 7; *VAR_1 && *VAR_1 != '/'; ++VAR_1);
 VAR_11 = VAR_1 - VAR_0 - 7;
 VAR_4 = FUNC_0(VAR_11 + 1, 1);
 FUNC_9(VAR_4, VAR_0 + 7, VAR_11);
 VAR_4[VAR_11] = 0;
 for (VAR_3 = VAR_4; *VAR_3 && *VAR_3 != ':'; ++VAR_3);
 if (*VAR_3 == ':') *VAR_3++ = 0;

 VAR_2 = FUNC_3("http_proxy");

 if (VAR_2 == 0) {
  VAR_5 = FUNC_7(VAR_4);
  VAR_6 = FUNC_7(*VAR_3? VAR_3 : "80");
  VAR_7 = FUNC_7(*VAR_1? VAR_1 : "/");
 } else {
  VAR_5 = (FUNC_10(VAR_2, "http://") == VAR_2)? FUNC_7(VAR_2 + 7) : FUNC_7(VAR_2);
  for (VAR_3 = VAR_5; *VAR_3 && *VAR_3 != ':'; ++VAR_3);
  if (*VAR_3 == ':') *VAR_3++ = 0;
  VAR_6 = FUNC_7(*VAR_3? VAR_3 : "80");
  VAR_7 = FUNC_7(VAR_0);
 }


 VAR_11 = 0;
 VAR_9 = FUNC_5(VAR_5, VAR_6);
 VAR_8 = FUNC_0(0x10000, 1);
 VAR_11 += FUNC_6(VAR_8 + VAR_11, "GET %s HTTP/1.0\r\nHost: %s\r\n", VAR_7, VAR_4);
 VAR_11 += FUNC_6(VAR_8 + VAR_11, "\r\n");
 FUNC_12(VAR_9, VAR_8, VAR_11);
 VAR_11 = 0;
 while (FUNC_4(VAR_9, VAR_8 + VAR_11, 1)) {
  if (VAR_8[VAR_11] == '\n' && VAR_11 >= 3)
   if (FUNC_8(VAR_8 + VAR_11 - 3, "\r\n\r\n", 4) == 0) break;
  ++VAR_11;
 }
 VAR_8[VAR_11] = 0;
 if (VAR_11 < 14) {
  FUNC_1(VAR_9);
  VAR_9 = -1;
 }
 VAR_10 = FUNC_11(VAR_8 + 8, &VAR_1, 0);
 if (VAR_10 != 200) {
  FUNC_1(VAR_9);
  VAR_9 = -1;
 }
 FUNC_2(VAR_8); FUNC_2(VAR_4); FUNC_2(VAR_5); FUNC_2(VAR_6); FUNC_2(VAR_7);
 return VAR_9;
}
