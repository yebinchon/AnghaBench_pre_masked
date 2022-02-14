
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct refspec_item {char* src; char* dst; scalar_t__ pattern; scalar_t__ exact_sha1; } ;
struct refspec {int nr; scalar_t__ fetch; struct refspec_item* items; } ;
struct argv_array {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct argv_array*,char*,int,char const*) ;
 int FUNC_1 (struct argv_array*,char const*) ;
 char* FUNC_2 (char const*,char) ;

void FUNC_3(const struct refspec *VAR_1,
     struct argv_array *VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_1->nr; VAR_3++) {
  const struct refspec_item *VAR_4 = &VAR_1->items[VAR_3];
  const char *VAR_5 = ((void*)0);

  if (VAR_4->exact_sha1)
   continue;
  if (VAR_1->fetch == VAR_0)
   VAR_5 = VAR_4->src;
  else if (VAR_4->dst)
   VAR_5 = VAR_4->dst;
  else if (VAR_4->src && !VAR_4->exact_sha1)
   VAR_5 = VAR_4->src;

  if (VAR_5) {
   if (VAR_4->pattern) {
    const char *VAR_6 = FUNC_2(VAR_5, '*');
    FUNC_0(VAR_2, "%.*s",
       (int)(VAR_6 - VAR_5),
       VAR_5);
   } else {
    FUNC_1(VAR_2, VAR_5);
   }
  }
 }
}
