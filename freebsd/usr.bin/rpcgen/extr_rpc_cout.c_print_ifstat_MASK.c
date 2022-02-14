
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int relation ;






 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,char const*) ;
 int FUNC_4 (int,char const*,char const*) ;
 int FUNC_5 (char const*,char*) ;

__attribute__((used)) static void
FUNC_6(int VAR_1, const char *VAR_2, const char *VAR_3, relation VAR_4,
    const char *VAR_5, const char *VAR_6, const char *VAR_7)
{
 const char *VAR_8 = ((void*)0);
 int VAR_9 = 0;

 switch (VAR_4) {
 case 129:
  VAR_9 = 1;
  FUNC_0(VAR_0, "\t{\n");
  FUNC_0(VAR_0, "\t%s **pp = %s;\n", VAR_3, VAR_6);
  FUNC_3(VAR_1, "pointer");
  FUNC_1("(char **)");
  FUNC_0(VAR_0, "pp");
  FUNC_4(0, VAR_2, VAR_3);
  break;
 case 128:
  if (FUNC_5(VAR_3, "string")) {
   VAR_8 = "string";
  } else if (FUNC_5(VAR_3, "opaque")) {
   VAR_8 = "opaque";
  }
  if (VAR_8) {
   FUNC_3(VAR_1, VAR_8);
   FUNC_1(VAR_6);
  } else {
   FUNC_3(VAR_1, "vector");
   FUNC_1("(char *)");
   FUNC_0(VAR_0, "%s", VAR_6);
  }
  FUNC_1(VAR_5);
  if (!VAR_8) {
   FUNC_4(VAR_1 + 1, VAR_2, VAR_3);
  }
  break;
 case 130:
  if (FUNC_5(VAR_3, "string")) {
   VAR_8 = "string";
  } else if (FUNC_5(VAR_3, "opaque")) {
   VAR_8 = "bytes";
  }
  if (FUNC_5(VAR_3, "string")) {
   FUNC_3(VAR_1, VAR_8);
   FUNC_1(VAR_6);
  } else {
   if (VAR_8) {
    FUNC_3(VAR_1, VAR_8);
   } else {
    FUNC_3(VAR_1, "array");
   }
   FUNC_1("(char **)");
   if (*VAR_6 == '&') {
    FUNC_0(VAR_0, "%s.%s_val, (u_int *) %s.%s_len",
     VAR_6, VAR_7, VAR_6, VAR_7);
   } else {
    FUNC_0(VAR_0,
     "&%s->%s_val, (u_int *) &%s->%s_len",
     VAR_6, VAR_7, VAR_6, VAR_7);
   }
  }
  FUNC_1(VAR_5);
  if (!VAR_8) {
   FUNC_4(VAR_1 + 1, VAR_2, VAR_3);
  }
  break;
 case 131:
  FUNC_3(VAR_1, VAR_3);
  FUNC_1(VAR_6);
  break;
 }
 FUNC_2(VAR_1, VAR_9);
}
