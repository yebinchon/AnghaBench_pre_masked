
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct secpolicyindex {int dummy; } ;
struct spdcache_entry {struct secpolicy* sp; struct secpolicyindex spidx; } ;
struct secpolicy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct secpolicy*) ;
 struct spdcache_entry* FUNC_1 (int,int ,int) ;

struct spdcache_entry *
FUNC_2(const struct secpolicyindex *VAR_3, struct secpolicy *VAR_4)
{
 struct spdcache_entry *VAR_5;

 VAR_5 = FUNC_1(sizeof(struct spdcache_entry),
      VAR_0, VAR_1|VAR_2);
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 if (VAR_4 != ((void*)0))
  FUNC_0(VAR_4);

 VAR_5->spidx = *VAR_3;
 VAR_5->sp = VAR_4;

 return (VAR_5);
}
