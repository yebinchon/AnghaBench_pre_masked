
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_int ;
typedef scalar_t__ u_char ;
struct sockaddr_ng {scalar_t__ sg_len; int sg_data; int sg_family; } ;
struct sockaddr {int dummy; } ;
typedef int sagbuf ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (scalar_t__*,int,int,int *) ;
 int FUNC_4 (int ,scalar_t__*,int,int ,struct sockaddr*,scalar_t__) ;
 int FUNC_5 (char*,char*,int*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,char const*,int) ;
 scalar_t__ FUNC_8 (char const*) ;
 int FUNC_9 (char*,char const*) ;
 int FUNC_10 (char*,char*) ;

__attribute__((used)) static int
FUNC_11(int VAR_6, char **VAR_7)
{
 u_int32_t VAR_8[64];
 struct sockaddr_ng *VAR_9 = (struct sockaddr_ng *)VAR_8;
 u_char VAR_10[VAR_1];
 const char *VAR_11;
 FILE *VAR_12;
 u_int VAR_13;
 int VAR_14;
 int VAR_15;


 if (VAR_6 < 3)
  return (VAR_4);
 VAR_11 = VAR_7[1];


 if (FUNC_6(VAR_7[2], "-f") == 0) {
  if (VAR_6 != 4)
   return (VAR_4);
  if ((VAR_12 = FUNC_2(VAR_7[3], "r")) == ((void*)0)) {
   FUNC_9("can't read file \"%s\"", VAR_7[3]);
   return (VAR_2);
  }
  if ((VAR_13 = FUNC_3(VAR_10, 1, sizeof(VAR_10), VAR_12)) == 0) {
   if (FUNC_1(VAR_12))
    FUNC_9("can't read file \"%s\"", VAR_7[3]);
   else
    FUNC_10("file \"%s\" is empty", VAR_7[3]);
   FUNC_0(VAR_12);
   return (VAR_2);
  }
  FUNC_0(VAR_12);
 } else {
  for (VAR_15 = 2, VAR_13 = 0; VAR_15 < VAR_6 && VAR_13 < sizeof(VAR_10); VAR_15++, VAR_13++) {
   if (FUNC_5(VAR_7[VAR_15], "%i", &VAR_14) != 1
       || (VAR_14 < -128 || VAR_14 > 255)) {
    FUNC_10("invalid byte \"%s\"", VAR_7[VAR_15]);
    return (VAR_2);
   }
   VAR_10[VAR_13] = (u_char)VAR_14;
  }
  if (VAR_13 == 0)
   return (VAR_4);
 }


 VAR_9->sg_len = 3 + FUNC_8(VAR_11);
 VAR_9->sg_family = VAR_0;
 FUNC_7(VAR_9->sg_data, VAR_11, sizeof(VAR_8) - 2);
 if (FUNC_4(VAR_5, VAR_10, VAR_13,
     0, (struct sockaddr *)VAR_9, VAR_9->sg_len) == -1) {
  FUNC_9("writing to hook \"%s\"", VAR_11);
  return (VAR_2);
 }


 return (VAR_3);
}
