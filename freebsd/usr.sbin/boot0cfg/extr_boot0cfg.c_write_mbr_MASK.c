
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct gctl_req {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (int,char*,char const*,...) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (struct gctl_req*) ;
 struct gctl_req* FUNC_6 () ;
 char* FUNC_7 (struct gctl_req*) ;
 int FUNC_8 (struct gctl_req*,char*,int,...) ;
 scalar_t__ FUNC_9 (char*) ;
 int FUNC_10 (char const*,int,...) ;
 int FUNC_11 (char*,char const*) ;
 int FUNC_12 (int,int*,int) ;

__attribute__((used)) static void
FUNC_13(const char *VAR_2, int VAR_3, u_int8_t *VAR_4, int VAR_5,
    int VAR_6)
{
 struct gctl_req *VAR_7;
 const char *VAR_8;
 char *VAR_9;
 ssize_t VAR_10;
 int VAR_11;

 VAR_11 = FUNC_10(VAR_2, VAR_1 | VAR_3, 0666);
 if (VAR_11 != -1) {
  VAR_10 = FUNC_12(VAR_11, VAR_4, VAR_5);
  FUNC_0(VAR_11);
  if (VAR_10 != VAR_5)
   FUNC_2(1, "%s: short write", VAR_2);
  return;
 }





 if (VAR_3 != 0)
  FUNC_1(1, "can't open file %s to write backup", VAR_2);


 VAR_11 = FUNC_10(VAR_2, VAR_0);
 if (VAR_11 == -1) {
  FUNC_11("error opening %s", VAR_2);
  return;
 }

 VAR_9 = FUNC_4(VAR_11);
 if (VAR_9 == ((void*)0)) {
  FUNC_11("error getting providername for %s", VAR_2);
  return;
 }


 if (FUNC_9("PART") != 0) {
  VAR_7 = FUNC_6();
  FUNC_8(VAR_7, "class", -1, "PART");
  FUNC_8(VAR_7, "arg0", -1, VAR_9);
  FUNC_8(VAR_7, "verb", -1, "bootcode");
  FUNC_8(VAR_7, "bootcode", VAR_5, VAR_4);
  FUNC_8(VAR_7, "flags", -1, "C");
  if (VAR_6)
   FUNC_8(VAR_7, "skip_dsn", sizeof(int),
       &VAR_6);
  VAR_8 = FUNC_7(VAR_7);
  if (VAR_8 != ((void*)0) && VAR_8[0] != '\0')
   FUNC_2(1, "GEOM_PART: write bootcode to %s failed: %s",
       VAR_2, VAR_8);
  FUNC_5(VAR_7);
 } else
  FUNC_2(1, "can't write MBR to %s", VAR_2);
 FUNC_3(VAR_9);
}
