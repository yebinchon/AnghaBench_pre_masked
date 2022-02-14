
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_4 ;
 int FUNC_2 (int,char**,char*) ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int) ;
 int VAR_8 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static void
FUNC_6(int VAR_10, char *VAR_11[])
{
 int VAR_12;

 extern char *VAR_13;
 extern int VAR_14, VAR_15;

 VAR_1 = VAR_4 / VAR_0;
 VAR_7 = FUNC_4(((void*)0));
 while ((VAR_12 = FUNC_2(VAR_10, VAR_11, "b:c:f:o:rs:v")) != -1) {
  switch (VAR_12) {
   case 'b':
    VAR_0 = FUNC_0(VAR_13);
    break;

   case 'c':
    VAR_1 = FUNC_0(VAR_13);
    break;

   case 'f':
    VAR_4 = FUNC_0(VAR_13);
    break;

   case 'o':
    VAR_5 = FUNC_0(VAR_13);
    break;

   case 'r':
    VAR_6++;
    break;

   case 's':
    VAR_7 = FUNC_0(VAR_13);
    break;

   case 'v':
    VAR_9++;
    break;

   case ':':
    (void) FUNC_1(VAR_8,
        "Option -%c requires an operand\n", VAR_15);
    VAR_2++;
    break;

   case '?':
    (void) FUNC_1(VAR_8,
        "Unrecognized option: -%c\n", VAR_15);
    VAR_2++;
    break;
  }

  if (VAR_2) {
   (void) FUNC_5(VAR_11[0]);
  }
 }
 if (VAR_10 <= VAR_14) {
  (void) FUNC_1(VAR_8,
      "No filename specified\n");
  FUNC_5(VAR_11[0]);
 }
 VAR_3 = VAR_11[VAR_14];

 if (VAR_9) {
  (void) FUNC_1(VAR_8, "Seed = %d\n", VAR_7);
 }
 FUNC_3(VAR_7);
}
