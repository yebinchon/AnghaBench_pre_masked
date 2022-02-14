
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_definition {int type; int defn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct macro_definition* FUNC_0 (char const*) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_2(const char *VAR_5)
{
 struct macro_definition *VAR_6;

 if ((VAR_6 = FUNC_0(VAR_5)) != ((void*)0)) {
  if ((VAR_6->type & VAR_2) == VAR_1) {
   FUNC_1(VAR_4);
   FUNC_1(VAR_6->defn);
   FUNC_1(VAR_3);
  } else {
   FUNC_1(VAR_6->defn);
   FUNC_1(VAR_0);
  }
 }
}
