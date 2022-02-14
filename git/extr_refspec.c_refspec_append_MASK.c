
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct refspec_item {int dummy; } ;
struct refspec {scalar_t__ raw_nr; struct refspec_item* raw; int raw_alloc; scalar_t__ nr; struct refspec_item* items; int alloc; int fetch; } ;


 int FUNC_0 (struct refspec_item*,scalar_t__,int ) ;
 int FUNC_1 (struct refspec_item*,char const*,int ) ;
 struct refspec_item FUNC_2 (char const*) ;

void FUNC_3(struct refspec *VAR_0, const char *VAR_1)
{
 struct refspec_item VAR_2;

 FUNC_1(&VAR_2, VAR_1, VAR_0->fetch);

 FUNC_0(VAR_0->items, VAR_0->nr + 1, VAR_0->alloc);
 VAR_0->items[VAR_0->nr++] = VAR_2;

 FUNC_0(VAR_0->raw, VAR_0->raw_nr + 1, VAR_0->raw_alloc);
 VAR_0->raw[VAR_0->raw_nr++] = FUNC_2(VAR_1);
}
