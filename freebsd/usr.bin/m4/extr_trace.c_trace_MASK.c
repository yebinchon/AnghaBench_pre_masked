
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_file {int dummy; } ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t FUNC_0 () ;
 int FUNC_1 (scalar_t__,char*,...) ;
 char* VAR_9 ;
 int FUNC_2 (struct input_file*) ;
 char* VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;

size_t
FUNC_3(const char *VAR_14[], int VAR_15, struct input_file *VAR_16)
{
 if (!VAR_13)
  VAR_13 = VAR_11;
 FUNC_2(VAR_16);
 if (VAR_12 & VAR_6) {
  FUNC_1(VAR_13, "%s ...\n", VAR_14[1]);
  FUNC_2(VAR_16);
 }
 FUNC_1(VAR_13, "%s", VAR_14[1]);
 if ((VAR_12 & VAR_5) && VAR_15 > 2) {
  char VAR_17[3];
  int VAR_18;

  VAR_17[0] = VAR_2;
  VAR_17[1] = VAR_1;
  for (VAR_18 = 2; VAR_18 < VAR_15; VAR_18++) {
   FUNC_1(VAR_13, "%s%s%s%s", VAR_17,
       (VAR_12 & VAR_8) ? VAR_9 : "",
       VAR_14[VAR_18],
       (VAR_12 & VAR_8) ? VAR_10 : "");
   VAR_17[0] = VAR_0;
   VAR_17[1] = ' ';
   VAR_17[2] = VAR_1;
  }
  FUNC_1(VAR_13, "%c", VAR_3);
 }
 if (VAR_12 & VAR_6) {
  FUNC_1(VAR_13, " -> ???\n");
  FUNC_2(VAR_16);
  FUNC_1(VAR_13, VAR_15 > 2 ? "%s(...)" : "%s", VAR_14[1]);
 }
 if (VAR_12 & VAR_7)
  return FUNC_0();
 else {
  FUNC_1(VAR_13, "\n");
  return VAR_4;
 }
}
