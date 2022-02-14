
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int objects; } ;
typedef TYPE_2__ git_repository ;
struct TYPE_5__ {TYPE_2__* owner; } ;
struct TYPE_7__ {int own_cache; TYPE_1__ rc; } ;
typedef TYPE_3__ git_odb ;
typedef int git_cache ;



__attribute__((used)) static git_cache *FUNC_0(git_odb *VAR_0)
{
 if (VAR_0->rc.owner != ((void*)0)) {
  git_repository *VAR_1 = VAR_0->rc.owner;
  return &VAR_1->objects;
 }

 return &VAR_0->own_cache;
}
