
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (char*,char,char*) ;
 int FUNC_1 (int,char*,...) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int *,size_t) ;
 int FUNC_5 (int *,size_t,int *,size_t) ;
 int FUNC_6 (int *,size_t) ;
 int FUNC_7 () ;
 size_t FUNC_8 (char*,int ,int ,char const**) ;
 char* FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(FILE *VAR_7, FILE *VAR_8, FILE *VAR_9)
{
 size_t VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

 char *VAR_15, *VAR_16, *VAR_17;
 const char *VAR_18;
 char VAR_19, VAR_20;


 if (!(VAR_15 = FUNC_9(VAR_7)))
  return (VAR_0);

 VAR_16 = VAR_15;

 while (FUNC_3(*VAR_16))
  ++VAR_16;
 VAR_19 = *VAR_16;
 *VAR_16++ = 0;
 VAR_10 = FUNC_8(VAR_15, 0, VAR_1, &VAR_18);
 if (VAR_18)
  FUNC_1(2, "file1 start is %s: %s", VAR_18, VAR_15);


 if (VAR_19 == ',') {
  VAR_17 = VAR_16;

  while (FUNC_3(*VAR_16))
   ++VAR_16;
  VAR_19 = *VAR_16;
  *VAR_16++ = 0;
  VAR_11 = FUNC_8(VAR_17, 0, VAR_1, &VAR_18);
  if (VAR_18)
   FUNC_1(2, "file1 end is %s: %s", VAR_18, VAR_15);
  if (VAR_10 > VAR_11)
   FUNC_1(2, "invalid line range in file1: %s", VAR_15);
 } else
  VAR_11 = VAR_10;

 VAR_20 = VAR_19;

 if (!(VAR_20 == 'a' || VAR_20 == 'c' || VAR_20 == 'd'))
  FUNC_1(2, "ed command not recognized: %c: %s", VAR_20, VAR_15);

 VAR_17 = VAR_16;

 while (FUNC_3(*VAR_16))
  ++VAR_16;
 VAR_19 = *VAR_16;
 *VAR_16++ = 0;
 VAR_12 = FUNC_8(VAR_17, 0, VAR_1, &VAR_18);
 if (VAR_18)
  FUNC_1(2, "file2 start is %s: %s", VAR_18, VAR_15);





 if (VAR_19 != ',' && VAR_19 != '\0')
  FUNC_1(2, "invalid line range in file2: %c: %s", VAR_19, VAR_15);

 if (VAR_19 == ',') {

  VAR_13 = FUNC_8(VAR_16, 0, VAR_1, &VAR_18);
  if (VAR_18)
   FUNC_1(2, "file2 end is %s: %s", VAR_18, VAR_15);
  if (VAR_12 >= VAR_13)
   FUNC_1(2, "invalid line range in file2: %s", VAR_15);
 } else
  VAR_13 = VAR_12;


 if (VAR_20 == 'a') {
  if (VAR_10 != VAR_11)
   FUNC_1(2, "append cannot have a file1 range: %s",
       VAR_15);
  if (VAR_10 == VAR_3)
   FUNC_1(2, "file1 line range too high: %s", VAR_15);
  VAR_10 = ++VAR_11;
 }




 else if (VAR_20 == 'd') {
  if (VAR_12 != VAR_13)
   FUNC_1(2, "delete cannot have a file2 range: %s",
       VAR_15);
  if (VAR_12 == VAR_3)
   FUNC_1(2, "file2 line range too high: %s", VAR_15);
  VAR_12 = ++VAR_13;
 }





 for (; VAR_4 < VAR_10 && VAR_5 < VAR_12;
     ++VAR_4, ++VAR_5) {
  char *VAR_21, *VAR_22;

  if (!(VAR_21 = FUNC_9(VAR_8)))
   FUNC_1(2, "file1 shorter than expected");
  if (!(VAR_22 = FUNC_9(VAR_9)))
   FUNC_1(2, "file2 shorter than expected");


  if (VAR_6) {
   FUNC_2(VAR_22);







   if (VAR_2)
    FUNC_0(VAR_21, '(', ((void*)0));
   else
    FUNC_0(VAR_21, ' ', ((void*)0));
  } else
   FUNC_0(VAR_21, ' ', VAR_22);
 }

 for (; VAR_4 < VAR_10; ++VAR_4) {
  char *VAR_23;

  if (!(VAR_23 = FUNC_9(VAR_8)))
   FUNC_1(2, "file1 shorter than expected");

  FUNC_0(VAR_23, '(', ((void*)0));
 }

 for (; VAR_5 < VAR_12; ++VAR_5) {
  char *VAR_24;

  if (!(VAR_24 = FUNC_9(VAR_9)))
   FUNC_1(2, "file2 shorter than expected");


  if (VAR_6)
   FUNC_2(VAR_24);
  else
   FUNC_0(((void*)0), ')', VAR_24);
 }


 FUNC_7();

 switch (VAR_20) {
 case 'a':
  FUNC_4(VAR_9, VAR_13);
  VAR_14 = VAR_13 - VAR_12 + 1;
  break;
 case 'c':
  FUNC_5(VAR_8, VAR_11, VAR_9, VAR_13);
  VAR_14 = VAR_11 - VAR_10 + 1 + 1 + VAR_13 - VAR_12 + 1;
  break;
 case 'd':
  FUNC_6(VAR_8, VAR_11);
  VAR_14 = VAR_11 - VAR_10 + 1;
  break;
 default:
  FUNC_1(2, "invalid diff command: %c: %s", VAR_20, VAR_15);
 }
 FUNC_2(VAR_15);


 while (VAR_14--) {
  if (!(VAR_15 = FUNC_9(VAR_7)))
   FUNC_1(2, "diff ended early");
  FUNC_2(VAR_15);
 }

 return (0);
}
