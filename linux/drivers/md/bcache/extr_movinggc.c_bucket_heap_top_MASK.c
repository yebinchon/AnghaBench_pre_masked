
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache {int heap; } ;
struct bucket {int dummy; } ;


 unsigned int FUNC_0 (struct bucket*) ;
 struct bucket* FUNC_1 (int *) ;

__attribute__((used)) static unsigned int FUNC_2(struct cache *VAR_0)
{
 struct bucket *VAR_1;

 return (VAR_1 = FUNC_1(&VAR_0->heap)) ? FUNC_0(VAR_1) : 0;
}
