
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ len; } ;
typedef TYPE_2__ git_rawobj ;
struct TYPE_13__ {scalar_t__ len; } ;
struct TYPE_15__ {TYPE_1__ raw; } ;
typedef TYPE_3__ git_pack_cache_entry ;
struct TYPE_16__ {scalar_t__ memory_used; scalar_t__ memory_limit; int lock; int entries; } ;
typedef TYPE_4__ git_pack_cache ;
typedef int git_off_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,TYPE_3__*) ;
 TYPE_3__* FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_8(
  git_pack_cache_entry **VAR_2,
  git_pack_cache *VAR_3,
  git_rawobj *VAR_4,
  git_off_t VAR_5)
{
 git_pack_cache_entry *VAR_6;
 int VAR_7;

 if (VAR_4->len > VAR_1)
  return -1;

 VAR_6 = FUNC_7(VAR_4);
 if (VAR_6) {
  if (FUNC_3(&VAR_3->lock) < 0) {
   FUNC_2(VAR_0, "failed to lock cache");
   FUNC_1(VAR_6);
   return -1;
  }

  VAR_7 = FUNC_5(VAR_3->entries, VAR_5);
  if (!VAR_7) {
   while (VAR_3->memory_used + VAR_4->len > VAR_3->memory_limit)
    FUNC_0(VAR_3);

   FUNC_6(VAR_3->entries, VAR_5, VAR_6);
   VAR_3->memory_used += VAR_6->raw.len;

   *VAR_2 = VAR_6;
  }
  FUNC_4(&VAR_3->lock);

  if (VAR_7) {
   FUNC_1(VAR_6);
   return -1;
  }
 }

 return 0;
}
