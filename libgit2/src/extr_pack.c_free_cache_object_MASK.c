
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* data; } ;
struct TYPE_5__ {scalar_t__ val; } ;
struct TYPE_7__ {TYPE_2__ raw; TYPE_1__ refcount; } ;
typedef TYPE_3__ git_pack_cache_entry ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 git_pack_cache_entry *VAR_1 = (git_pack_cache_entry *)VAR_0;

 if (VAR_1 != ((void*)0)) {
  FUNC_0(VAR_1->refcount.val == 0);
  FUNC_1(VAR_1->raw.data);
  FUNC_1(VAR_1);
 }
}
