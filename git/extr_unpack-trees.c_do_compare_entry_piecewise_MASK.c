
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct traverse_info {char* name; size_t namelen; unsigned int mode; int pathlen; struct traverse_info* prev; } ;
struct cache_entry {char* name; } ;


 int VAR_0 ;
 int FUNC_0 (struct cache_entry const*) ;
 int FUNC_1 (char const*,int,int ,char const*,size_t,unsigned int) ;

__attribute__((used)) static int FUNC_2(const struct cache_entry *VAR_1,
          const struct traverse_info *VAR_2,
          const char *VAR_3, size_t VAR_4,
          unsigned VAR_5)
{
 int VAR_6, VAR_7;
 const char *VAR_8;

 if (VAR_2->prev) {
  int VAR_9 = FUNC_2(VAR_1, VAR_2->prev,
           VAR_2->name, VAR_2->namelen,
           VAR_2->mode);
  if (VAR_9)
   return VAR_9;
 }
 VAR_6 = VAR_2->pathlen;
 VAR_7 = FUNC_0(VAR_1);


 if (VAR_7 < VAR_6)
  return -1;

 VAR_7 -= VAR_6;
 VAR_8 = VAR_1->name + VAR_6;

 return FUNC_1(VAR_8, VAR_7, VAR_0, VAR_3, VAR_4, VAR_5);
}
