
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rewrite {int instead_of_nr; TYPE_1__* instead_of; int instead_of_alloc; } ;
struct TYPE_2__ {char const* s; int len; } ;


 int FUNC_0 (TYPE_1__*,int,int ) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static void FUNC_2(struct rewrite *VAR_0, const char *VAR_1)
{
 FUNC_0(VAR_0->instead_of, VAR_0->instead_of_nr + 1, VAR_0->instead_of_alloc);
 VAR_0->instead_of[VAR_0->instead_of_nr].s = VAR_1;
 VAR_0->instead_of[VAR_0->instead_of_nr].len = FUNC_1(VAR_1);
 VAR_0->instead_of_nr++;
}
