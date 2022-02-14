
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (char const*,int ,struct object_id*,char**) ;
 int FUNC_1 (char*,char const*) ;
 int VAR_6 ;
 char const* FUNC_2 (struct object_id const*,scalar_t__) ;
 int FUNC_3 (char*) ;
 char const* FUNC_4 (struct object_id const*) ;
 char* FUNC_5 (char*,int ) ;
 int FUNC_6 (int,char const*) ;
 int FUNC_7 (char const*) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void FUNC_8(int VAR_8, const struct object_id *VAR_9, const char *VAR_10)
{
 if (!(VAR_6 & VAR_0))
  return;
 VAR_5 = ((void*)0);

 if ((VAR_7 || VAR_3) && VAR_10) {
  if (VAR_7 == VAR_1 || VAR_3) {
   struct object_id VAR_11;
   char *VAR_12;

   switch (FUNC_0(VAR_10, FUNC_7(VAR_10), &VAR_11, &VAR_12)) {
   case 0:







    break;
   case 1:
    if (VAR_3)
     VAR_12 = FUNC_5(VAR_12,
      VAR_4);
    FUNC_6(VAR_8, VAR_12);
    break;
   default:
    FUNC_1("refname '%s' is ambiguous", VAR_10);
    break;
   }
   FUNC_3(VAR_12);
  } else {
   FUNC_6(VAR_8, VAR_10);
  }
 }
 else if (VAR_2)
  FUNC_6(VAR_8, FUNC_2(VAR_9, VAR_2));
 else
  FUNC_6(VAR_8, FUNC_4(VAR_9));
}
