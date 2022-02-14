
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_set {int gc_thread; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct cache_set*,char*) ;

int FUNC_2(struct cache_set *VAR_1)
{
 VAR_1->gc_thread = FUNC_1(VAR_0, VAR_1, "bcache_gc");
 return FUNC_0(VAR_1->gc_thread);
}
