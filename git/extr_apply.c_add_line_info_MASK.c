
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct image {int nr; TYPE_1__* line_allocated; int alloc; } ;
struct TYPE_2__ {size_t len; unsigned int flag; int hash; } ;


 int FUNC_0 (TYPE_1__*,int,int ) ;
 int FUNC_1 (char const*,size_t) ;

__attribute__((used)) static void FUNC_2(struct image *VAR_0, const char *VAR_1, size_t VAR_2, unsigned VAR_3)
{
 FUNC_0(VAR_0->line_allocated, VAR_0->nr + 1, VAR_0->alloc);
 VAR_0->line_allocated[VAR_0->nr].len = VAR_2;
 VAR_0->line_allocated[VAR_0->nr].hash = FUNC_1(VAR_1, VAR_2);
 VAR_0->line_allocated[VAR_0->nr].flag = VAR_3;
 VAR_0->nr++;
}
