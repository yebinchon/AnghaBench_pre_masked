
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cache_entry {int name; } ;
struct TYPE_2__ {int name; } ;


 TYPE_1__** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(const struct cache_entry *VAR_2, int VAR_3)
{
 while (++VAR_3 < VAR_1 &&
        !FUNC_0(VAR_0[VAR_3]->name, VAR_2->name))
  ;
 return VAR_3;
}
