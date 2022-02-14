
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct name {char* n_name; int n_type; struct name* n_flink; } ;
struct grouphead {int dummy; } ;


 struct grouphead* FUNC_0 (char*) ;
 struct name* FUNC_1 (struct name*,struct grouphead*,int,int ) ;
 struct name* FUNC_2 (struct name*,struct name*) ;
 int * FUNC_3 (char*) ;

struct name *
FUNC_4(struct name *VAR_0)
{
 struct name *VAR_1, *VAR_2, *VAR_3;
 struct grouphead *VAR_4;
 int VAR_5;

 VAR_1 = ((void*)0);
 VAR_2 = VAR_0;
 VAR_5 = (FUNC_3("metoo") != ((void*)0));
 while (VAR_2 != ((void*)0)) {
  if (VAR_2->n_name[0] == '\\') {
   VAR_3 = VAR_2->n_flink;
   VAR_1 = FUNC_2(VAR_1, VAR_2);
   VAR_2 = VAR_3;
   continue;
  }
  VAR_4 = FUNC_0(VAR_2->n_name);
  VAR_3 = VAR_2->n_flink;
  if (VAR_4 != ((void*)0))
   VAR_1 = FUNC_1(VAR_1, VAR_4, VAR_5, VAR_2->n_type);
  else
   VAR_1 = FUNC_2(VAR_1, VAR_2);
  VAR_2 = VAR_3;
 }
 return (VAR_1);
}
