
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enum_pairs {struct enum_pairs* enum_str; } ;
struct enum_pair {struct enum_pair* enum_str; } ;


 struct enum_pairs* FUNC_0 (struct enum_pairs*) ;
 int FUNC_1 (struct enum_pairs*,int ) ;
 int FUNC_2 (struct enum_pairs*) ;
 int VAR_0 ;

void
FUNC_3(struct enum_pairs *VAR_1)
{
 struct enum_pair *VAR_2;

 if (VAR_1 == ((void*)0))
  return;

 while ((VAR_2 = FUNC_0(VAR_1)) != ((void*)0)) {
  FUNC_1(VAR_1, VAR_0);

  if (VAR_2->enum_str)
   FUNC_2(VAR_2->enum_str);
  FUNC_2(VAR_2);
 }

 FUNC_2(VAR_1);
}
