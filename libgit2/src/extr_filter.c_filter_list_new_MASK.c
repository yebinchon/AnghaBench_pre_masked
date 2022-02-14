
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int flags; int mode; int repo; int path; } ;
typedef TYPE_2__ git_filter_source ;
struct TYPE_8__ {int flags; int mode; int path; int repo; } ;
struct TYPE_10__ {TYPE_1__ source; int path; } ;
typedef TYPE_3__ git_filter_list ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (size_t*,size_t,int) ;
 TYPE_3__* FUNC_2 (int,size_t) ;
 int FUNC_3 (int ,int ,size_t) ;
 size_t FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(
 git_filter_list **VAR_0, const git_filter_source *VAR_1)
{
 git_filter_list *VAR_2 = ((void*)0);
 size_t VAR_3 = VAR_1->path ? FUNC_4(VAR_1->path) : 0, VAR_4;

 FUNC_1(&VAR_4, sizeof(git_filter_list), VAR_3);
 FUNC_1(&VAR_4, VAR_4, 1);

 VAR_2 = FUNC_2(1, VAR_4);
 FUNC_0(VAR_2);

 if (VAR_1->path)
  FUNC_3(VAR_2->path, VAR_1->path, VAR_3);
 VAR_2->source.repo = VAR_1->repo;
 VAR_2->source.path = VAR_2->path;
 VAR_2->source.mode = VAR_1->mode;
 VAR_2->source.flags = VAR_1->flags;

 *VAR_0 = VAR_2;
 return 0;
}
