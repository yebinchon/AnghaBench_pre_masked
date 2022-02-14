
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 () ;
 int VAR_4 ;
 int FUNC_3 (char*,...) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static bool
FUNC_4(bool VAR_7, bool *VAR_8)
{
 bool VAR_9;

 VAR_9 = 0;
 if (VAR_4 && VAR_7) {





  *VAR_8 = 1;
 } else if (!VAR_4 && VAR_7) {
  if (VAR_2) {
   VAR_5 = 1;
   return (0);
  }
  if (VAR_3) {

   FUNC_3("Ignoring previously applied (or reversed) patch.\n");
   VAR_5 = 1;
   return (0);
  }


  if (!FUNC_2())
   FUNC_1("lost hunk on alloc error!\n");

  VAR_4 = !VAR_4;

  if (VAR_0) {
   if (VAR_6)
    FUNC_3("Patch creates file that already exists, %s %seversed",
        VAR_4 ? "Assuming" : "Ignoring",
        VAR_4 ? "R" : "Unr");
  } else {
   FUNC_0("Patch creates file that already exists!  %s -R? [y] ",
       VAR_4 ? "Assume" : "Ignore");

   if (*VAR_1 == 'n') {
    FUNC_0("Apply anyway? [n]");
    if (*VAR_1 != 'y')

     VAR_5 = 1;
    else

     VAR_9 = 1;
    VAR_4 = !VAR_4;
    if (!FUNC_2())
     FUNC_1("lost hunk on alloc error!\n");
   } else {






    *VAR_8 = 1;
   }
  }
 }







 return (VAR_9);
}
