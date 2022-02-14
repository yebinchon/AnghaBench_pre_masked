
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int off_t ;
typedef int LINENUM ;


 int VAR_0 ;
 int VAR_1 ;
 char** VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char*,int) ;
 char** VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int* VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;

char *
FUNC_4(LINENUM VAR_12, int VAR_13)
{
 if (VAR_12 < 1 || VAR_12 > VAR_3) {
  if (VAR_11) {
   FUNC_3("No such line %ld in input file, ignoring\n", VAR_12);
   VAR_11 = 0;
  }
  return ((void*)0);
 }
 if (VAR_10)
  return VAR_2[VAR_12];
 else {
  LINENUM VAR_14 = VAR_12 % VAR_4;
  LINENUM VAR_15 = VAR_12 - VAR_14;

  if (VAR_8[0] == VAR_15)
   VAR_13 = 0;
  else if (VAR_8[1] == VAR_15)
   VAR_13 = 1;
  else {
   VAR_8[VAR_13] = VAR_15;

   if (FUNC_0(VAR_7, (off_t) (VAR_15 / VAR_4 *
       VAR_6), VAR_0) < 0)
    FUNC_1("cannot seek in the temporary input file");

   if (FUNC_2(VAR_7, VAR_5[VAR_13], VAR_6) !=
       (ssize_t) VAR_6)
    FUNC_1("error reading tmp file %s", VAR_1);
  }
  return VAR_5[VAR_13] + (VAR_9 * VAR_14);
 }
}
