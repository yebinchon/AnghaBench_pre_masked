
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct traverse_info {char* name; size_t namelen; struct traverse_info* prev; int pathlen; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*,size_t) ;
 size_t FUNC_2 (int ,size_t) ;

char *FUNC_3(char *VAR_0, size_t VAR_1,
    const struct traverse_info *VAR_2,
    const char *VAR_3, size_t VAR_4)
{

 size_t VAR_5 = FUNC_2(VAR_2->pathlen, VAR_4);

 if (VAR_5 >= VAR_1)
  FUNC_0("too small buffer passed to make_traverse_path");

 VAR_0[VAR_5] = 0;
 for (;;) {
  if (VAR_5 < VAR_4)
   FUNC_0("traverse_info pathlen does not match strings");
  VAR_5 -= VAR_4;
  FUNC_1(VAR_0 + VAR_5, VAR_3, VAR_4);

  if (!VAR_5)
   break;
  VAR_0[--VAR_5] = '/';

  if (!VAR_2)
   FUNC_0("traverse_info ran out of list items");
  VAR_3 = VAR_2->name;
  VAR_4 = VAR_2->namelen;
  VAR_2 = VAR_2->prev;
 }
 return VAR_0;
}
