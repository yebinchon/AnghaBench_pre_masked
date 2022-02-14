
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_10__ {TYPE_1__* metric; } ;
typedef TYPE_2__ git_merge_options ;
struct TYPE_11__ {int mode; } ;
typedef TYPE_3__ git_index_entry ;
struct TYPE_9__ {scalar_t__ (* similarity ) (int*,void*,void*,int ) ;int payload; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (void**,int *,TYPE_3__*,TYPE_2__ const*) ;
 scalar_t__ FUNC_2 (int*,void*,void*,int ) ;

__attribute__((used)) static int FUNC_3(
 git_repository *VAR_0,
 git_index_entry *VAR_1,
 size_t VAR_2,
 git_index_entry *VAR_3,
 size_t VAR_4,
 void **VAR_5,
 const git_merge_options *VAR_6)
{
 int VAR_7 = 0;
 int VAR_8 = 0;

 if (!FUNC_0(VAR_1->mode) || !FUNC_0(VAR_3->mode))
  return 0;


 if (!VAR_5[VAR_2] && (VAR_8 = FUNC_1(&VAR_5[VAR_2], VAR_0, VAR_1, VAR_6)) < 0)
  return VAR_8;
 if (!VAR_5[VAR_4] && (VAR_8 = FUNC_1(&VAR_5[VAR_4], VAR_0, VAR_3, VAR_6)) < 0)
  return VAR_8;


 if (!VAR_5[VAR_2] || !VAR_5[VAR_4])
  return 0;


 if (VAR_6->metric->similarity(
  &VAR_7, VAR_5[VAR_2], VAR_5[VAR_4], VAR_6->metric->payload) < 0)
  return -1;


 if (VAR_7 < 0)
  VAR_7 = 0;
 else if (VAR_7 > 100)
  VAR_7 = 100;

 return VAR_7;
}
