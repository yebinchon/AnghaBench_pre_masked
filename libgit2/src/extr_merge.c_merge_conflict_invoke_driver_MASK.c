
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int git_oid ;
typedef int git_odb ;
struct TYPE_18__ {int repo; } ;
typedef TYPE_1__ git_merge_driver_source ;
struct TYPE_19__ {int (* apply ) (TYPE_2__*,char const**,void**,TYPE_5__*,char const*,TYPE_1__*) ;} ;
typedef TYPE_2__ git_merge_driver ;
struct TYPE_20__ {int pool; } ;
typedef TYPE_3__ git_merge_diff_list ;
struct TYPE_21__ {struct TYPE_21__* path; void* file_size; void* mode; int id; } ;
typedef TYPE_4__ git_index_entry ;
struct TYPE_22__ {scalar_t__ size; int ptr; } ;
typedef TYPE_5__ git_buf ;


 TYPE_5__ VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ,scalar_t__,int ) ;
 int FUNC_4 (int *,int *) ;
 TYPE_4__* FUNC_5 (int *,int) ;
 TYPE_4__* FUNC_6 (int *,char const*) ;
 int FUNC_7 (int **,int ) ;
 int FUNC_8 (TYPE_2__*,char const**,void**,TYPE_5__*,char const*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(
 git_index_entry **VAR_2,
 const char *VAR_3,
 git_merge_driver *VAR_4,
 git_merge_diff_list *VAR_5,
 git_merge_driver_source *VAR_6)
{
 git_index_entry *VAR_7;
 git_buf VAR_8 = VAR_0;
 const char *VAR_9;
 uint32_t VAR_10;
 git_odb *VAR_11 = ((void*)0);
 git_oid VAR_12;
 int VAR_13;

 *VAR_2 = ((void*)0);

 if ((VAR_13 = VAR_4->apply(VAR_4, &VAR_9, &VAR_10, &VAR_8, VAR_3, VAR_6)) < 0 ||
  (VAR_13 = FUNC_7(&VAR_11, VAR_6->repo)) < 0 ||
  (VAR_13 = FUNC_3(&VAR_12, VAR_11, VAR_8.ptr, VAR_8.size, VAR_1)) < 0)
  goto done;

 VAR_7 = FUNC_5(&VAR_5->pool, sizeof(git_index_entry));
 FUNC_0(VAR_7);

 FUNC_4(&VAR_7->id, &VAR_12);
 VAR_7->mode = VAR_10;
 VAR_7->file_size = (uint32_t)VAR_8.size;

 VAR_7->path = FUNC_6(&VAR_5->pool, VAR_9);
 FUNC_0(VAR_7->path);

 *VAR_2 = VAR_7;

done:
 FUNC_1(&VAR_8);
 FUNC_2(VAR_11);

 return VAR_13;
}
