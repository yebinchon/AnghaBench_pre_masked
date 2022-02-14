
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cache {TYPE_1__* ti; } ;
typedef enum cache_metadata_mode { ____Placeholder_cache_metadata_mode } cache_metadata_mode ;
struct TYPE_2__ {int table; } ;


 int FUNC_0 (char*,int ,char const*) ;
 int FUNC_1 (struct cache*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct cache *VAR_0, enum cache_metadata_mode VAR_1)
{
 const char *VAR_2[] = {
  "write",
  "read-only",
  "fail"
 };

 FUNC_2(VAR_0->ti->table);
 FUNC_0("%s: switching cache to %s mode",
        FUNC_1(VAR_0), VAR_2[(int)VAR_1]);
}
