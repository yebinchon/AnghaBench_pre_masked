
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct merge_options {TYPE_1__* repo; } ;
struct index_state {int cache_nr; TYPE_2__** cache; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {struct index_state* index; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (struct index_state*,char const*,int ) ;
 int FUNC_3 (char const*,int ) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(struct merge_options *VAR_0, const char *VAR_1)
{
 struct index_state *VAR_2 = VAR_0->repo->index;
 int VAR_3 = FUNC_2(VAR_2, VAR_1, FUNC_4(VAR_1));

 if (VAR_3 < 0)
  VAR_3 = -1 - VAR_3;
 while (VAR_3 < VAR_2->cache_nr &&
        !FUNC_3(VAR_1, VAR_2->cache[VAR_3]->name)) {






  switch (FUNC_0(VAR_2->cache[VAR_3])) {
  case 0:
  case 2:
   return 0;
  }
  VAR_3++;
 }
 return FUNC_1(VAR_1);
}
