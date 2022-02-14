
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct keylist {int dummy; } ;
struct jset {int dummy; } ;
struct cache_set {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct keylist*,unsigned int) ;
 size_t FUNC_1 (struct keylist*) ;
 int FUNC_2 (struct cache_set*) ;

__attribute__((used)) static int FUNC_3(struct keylist *VAR_1, unsigned int VAR_2,
          struct cache_set *VAR_3)
{
 size_t VAR_4 = FUNC_1(VAR_1);
 size_t VAR_5 = VAR_4 + VAR_2;







 if (VAR_5 * sizeof(uint64_t) > FUNC_2(VAR_3) - sizeof(struct jset))
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_2);
}
