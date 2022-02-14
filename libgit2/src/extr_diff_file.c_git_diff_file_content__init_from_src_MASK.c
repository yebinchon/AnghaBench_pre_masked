
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_diff_options ;
struct TYPE_11__ {size_t buflen; scalar_t__ buf; scalar_t__ blob; } ;
typedef TYPE_2__ git_diff_file_content_src ;
struct TYPE_10__ {size_t len; char* data; } ;
struct TYPE_12__ {TYPE_1__ map; TYPE_4__* file; int flags; int blob; int * repo; } ;
typedef TYPE_3__ git_diff_file_content ;
struct TYPE_13__ {size_t size; void* id_abbrev; int id; int mode; int flags; } ;
typedef TYPE_4__ git_diff_file ;
typedef int git_blob ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (TYPE_3__*,int const*) ;
 int FUNC_1 (int **,int *) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 size_t FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,scalar_t__,size_t,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (TYPE_3__*,int ,int) ;

int FUNC_8(
 git_diff_file_content *VAR_7,
 git_repository *VAR_8,
 const git_diff_options *VAR_9,
 const git_diff_file_content_src *VAR_10,
 git_diff_file *VAR_11)
{
 FUNC_7(VAR_7, 0, sizeof(*VAR_7));
 VAR_7->repo = VAR_8;
 VAR_7->file = VAR_11;

 if (!VAR_10->blob && !VAR_10->buf) {
  VAR_7->flags |= VAR_3;
 } else {
  VAR_7->flags |= VAR_2;
  VAR_7->file->flags |= VAR_0;
  VAR_7->file->mode = VAR_4;

  if (VAR_10->blob) {
   FUNC_1((git_blob **)&VAR_7->blob, (git_blob *) VAR_10->blob);
   VAR_7->file->size = FUNC_4(VAR_10->blob);
   FUNC_6(&VAR_7->file->id, FUNC_2(VAR_10->blob));
   VAR_7->file->id_abbrev = VAR_6;

   VAR_7->map.len = (size_t)VAR_7->file->size;
   VAR_7->map.data = (char *)FUNC_3(VAR_10->blob);

   VAR_7->flags |= VAR_1;
  } else {
   VAR_7->file->size = VAR_10->buflen;
   FUNC_5(&VAR_7->file->id, VAR_10->buf, VAR_10->buflen, VAR_5);
   VAR_7->file->id_abbrev = VAR_6;

   VAR_7->map.len = VAR_10->buflen;
   VAR_7->map.data = (char *)VAR_10->buf;
  }
 }

 return FUNC_0(VAR_7, VAR_9);
}
