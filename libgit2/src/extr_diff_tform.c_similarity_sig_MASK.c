
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int ptr; } ;
struct TYPE_11__ {scalar_t__ src; size_t idx; int blob; TYPE_4__* file; int repo; int * odb_obj; TYPE_9__ data; } ;
typedef TYPE_2__ similarity_info ;
typedef int git_object ;
struct TYPE_12__ {TYPE_1__* metric; } ;
typedef TYPE_3__ git_diff_find_options ;
struct TYPE_13__ {scalar_t__ size; int id; int path; } ;
typedef TYPE_4__ git_diff_file ;
struct TYPE_10__ {int (* file_signature ) (void**,TYPE_4__*,int ,int ) ;int (* buffer_signature ) (void**,TYPE_4__*,int ,size_t,int ) ;int payload; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_9__*,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int **,int ,int *,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (void**,TYPE_4__*,int ,int ) ;
 int FUNC_10 (void**,TYPE_4__*,int ,size_t,int ) ;

__attribute__((used)) static int FUNC_11(
 similarity_info *VAR_2,
 const git_diff_find_options *VAR_3,
 void **VAR_4)
{
 int VAR_5 = 0;
 git_diff_file *VAR_6 = VAR_2->file;

 if (VAR_2->src == VAR_0) {
  if ((VAR_5 = FUNC_4(
   &VAR_2->data, FUNC_8(VAR_2->repo), VAR_6->path)) < 0)
   return VAR_5;


  if (!FUNC_7(VAR_2->data.ptr))
   return 0;



  VAR_5 = VAR_3->metric->file_signature(
   &VAR_4[VAR_2->idx], VAR_2->file,
   VAR_2->data.ptr, VAR_3->metric->payload);
 } else {



  if (VAR_2->odb_obj != ((void*)0))
   VAR_5 = FUNC_6(
    (git_object **)&VAR_2->blob, VAR_2->repo,
    VAR_2->odb_obj, VAR_1);
  else
   VAR_5 = FUNC_1(&VAR_2->blob, VAR_2->repo, &VAR_6->id);

  if (VAR_5 < 0) {

   FUNC_5();
  } else {
   size_t VAR_7;


   if (VAR_6->size != FUNC_3(VAR_2->blob))
    VAR_6->size = FUNC_3(VAR_2->blob);

   VAR_7 = (size_t)(FUNC_0(VAR_6->size) ? VAR_6->size : -1);

   VAR_5 = VAR_3->metric->buffer_signature(
    &VAR_4[VAR_2->idx], VAR_2->file,
    FUNC_2(VAR_2->blob), VAR_7, VAR_3->metric->payload);
  }
 }

 return VAR_5;
}
