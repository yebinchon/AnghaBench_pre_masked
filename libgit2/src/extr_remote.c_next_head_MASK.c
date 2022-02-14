
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {size_t length; } ;
typedef TYPE_1__ const git_vector ;
struct TYPE_9__ {int name; } ;
typedef TYPE_2__ git_remote_head ;
struct TYPE_10__ {TYPE_1__ const passive_refspecs; TYPE_1__ const active_refspecs; } ;
typedef TYPE_3__ git_remote ;
typedef int git_refspec ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 void* FUNC_2 (TYPE_1__ const*,size_t) ;

__attribute__((used)) static int FUNC_3(const git_remote *VAR_1, git_vector *VAR_2,
       git_refspec **VAR_3, git_remote_head **VAR_4,
       size_t *VAR_5, size_t *VAR_6, size_t *VAR_7)
{
 const git_vector *VAR_8, *VAR_9;
 git_remote_head *VAR_10;
 git_refspec *VAR_11, *VAR_12;
 size_t VAR_13, VAR_14, VAR_15;

 VAR_8 = &VAR_1->active_refspecs;
 VAR_9 = &VAR_1->passive_refspecs;

 VAR_13 = *VAR_5;
 VAR_14 = *VAR_6;
 VAR_15 = *VAR_7;

 for (; VAR_13 < VAR_2->length; VAR_13++) {
  VAR_10 = FUNC_2(VAR_2, VAR_13);

  if (!FUNC_0(VAR_10->name))
   continue;

  for (; VAR_14 < VAR_8->length; VAR_14++) {
   VAR_11 = FUNC_2(VAR_8, VAR_14);

   if (!FUNC_1(VAR_11, VAR_10->name))
    continue;

   for (; VAR_15 < VAR_9->length; VAR_15++) {
    VAR_12 = FUNC_2(VAR_9, VAR_15);

    if (!FUNC_1(VAR_12, VAR_10->name))
        continue;

    *VAR_3 = VAR_12;
    *VAR_4 = VAR_10;
    *VAR_5 = VAR_13;
    *VAR_6 = VAR_14;
    *VAR_7 = VAR_15 + 1;
    return 0;

   }
   VAR_15 = 0;
  }
  VAR_14 = 0;
 }

 return VAR_0;
}
