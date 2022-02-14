
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int git_repository ;
typedef scalar_t__ git_off_t ;
struct TYPE_13__ {TYPE_3__* metric; } ;
typedef TYPE_4__ git_merge_options ;
struct TYPE_14__ {int mode; int file_size; int path; int id; } ;
typedef TYPE_5__ git_index_entry ;
struct TYPE_11__ {int member_0; } ;
struct TYPE_10__ {TYPE_2__ member_0; } ;
struct TYPE_15__ {scalar_t__ flags; int mode; int size; int path; int id; TYPE_1__ member_0; } ;
typedef TYPE_6__ git_diff_file ;
typedef int git_blob ;
struct TYPE_12__ {int (* buffer_signature ) (void**,TYPE_6__*,int ,size_t,int ) ;int payload; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (void**,TYPE_6__*,int ,size_t,int ) ;

__attribute__((used)) static int FUNC_7(
 void **VAR_0,
 git_repository *VAR_1,
 git_index_entry *VAR_2,
 const git_merge_options *VAR_3)
{
 git_blob *VAR_4;
 git_diff_file VAR_5 = {{{0}}};
 git_off_t VAR_6;
 int VAR_7;

 *VAR_0 = ((void*)0);

 if ((VAR_7 = FUNC_2(&VAR_4, VAR_1, &VAR_2->id)) < 0)
  return VAR_7;

 FUNC_5(&VAR_5.id, &VAR_2->id);
 VAR_5.path = VAR_2->path;
 VAR_5.size = VAR_2->file_size;
 VAR_5.mode = VAR_2->mode;
 VAR_5.flags = 0;

 VAR_6 = FUNC_4(VAR_4);


 if (!FUNC_0(VAR_6))
  return 0;

 VAR_7 = VAR_3->metric->buffer_signature(VAR_0, &VAR_5,
  FUNC_3(VAR_4), (size_t)VAR_6,
  VAR_3->metric->payload);

 FUNC_1(VAR_4);

 return VAR_7;
}
