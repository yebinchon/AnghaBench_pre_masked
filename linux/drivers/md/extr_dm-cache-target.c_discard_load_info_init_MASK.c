
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct discard_load_info {scalar_t__ discard_end; scalar_t__ discard_begin; struct cache* cache; } ;
struct cache {int dummy; } ;



__attribute__((used)) static void FUNC_0(struct cache *VAR_0,
       struct discard_load_info *VAR_1)
{
 VAR_1->cache = VAR_0;
 VAR_1->discard_begin = VAR_1->discard_end = 0;
}
