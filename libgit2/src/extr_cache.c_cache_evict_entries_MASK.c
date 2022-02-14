
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ssize_t ;
typedef int git_oid ;
struct TYPE_7__ {scalar_t__ size; } ;
typedef TYPE_1__ git_cached_obj ;
struct TYPE_8__ {int used_memory; int map; } ;
typedef TYPE_2__ git_cache ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 size_t FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int const*) ;
 scalar_t__ FUNC_5 (void**,int ,size_t*,int const**) ;

__attribute__((used)) static void FUNC_6(git_cache *VAR_2)
{
 size_t VAR_3 = FUNC_2(VAR_2) / 2048, VAR_4;
 ssize_t VAR_5 = 0;

 if (VAR_3 < 8)
  VAR_3 = 8;


 if (VAR_3 > FUNC_2(VAR_2)) {
  FUNC_0(VAR_2);
  return;
 }

 VAR_4 = 0;
 while (VAR_3 > 0) {
  git_cached_obj *VAR_6;
  const git_oid *VAR_7;

  if (FUNC_5((void **) &VAR_6, VAR_2->map, &VAR_4, &VAR_7) == VAR_0)
   break;

  VAR_3--;
  VAR_5 += VAR_6->size;
  FUNC_4(VAR_2->map, VAR_7);
  FUNC_3(VAR_6);
 }

 VAR_2->used_memory -= VAR_5;
 FUNC_1(&VAR_1, -VAR_5);
}
