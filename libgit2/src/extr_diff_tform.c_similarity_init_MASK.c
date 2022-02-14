
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {size_t idx; scalar_t__ src; int repo; int * odb_obj; TYPE_5__* file; int data; int * blob; } ;
typedef TYPE_1__ similarity_info ;
struct TYPE_9__ {scalar_t__ new_src; scalar_t__ old_src; int repo; } ;
typedef TYPE_2__ git_diff ;
struct TYPE_10__ {scalar_t__ size; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_5__*,int **,int ) ;
 TYPE_5__* FUNC_2 (TYPE_2__*,size_t) ;

__attribute__((used)) static int FUNC_3(
 similarity_info *VAR_1, git_diff *VAR_2, size_t VAR_3)
{
 VAR_1->idx = VAR_3;
 VAR_1->src = (VAR_3 & 1) ? VAR_2->new_src : VAR_2->old_src;
 VAR_1->repo = VAR_2->repo;
 VAR_1->file = FUNC_2(VAR_2, VAR_3);
 VAR_1->odb_obj = ((void*)0);
 VAR_1->blob = ((void*)0);
 FUNC_0(&VAR_1->data, 0);

 if (VAR_1->file->size > 0 || VAR_1->src == VAR_0)
  return 0;

 return FUNC_1(
  VAR_1->file, &VAR_1->odb_obj, VAR_1->repo);
}
