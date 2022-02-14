
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ allow_textconv; } ;
struct diff_options {int repo; TYPE_1__ flags; } ;
struct TYPE_5__ {unsigned long size; int ptr; } ;
struct blame_origin {TYPE_2__ file; int path; int blob_oid; int mode; } ;
typedef TYPE_2__ mmfile_t ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct blame_origin*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int*,unsigned long*) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int *,int,int *,unsigned long*) ;

__attribute__((used)) static void FUNC_5(struct diff_options *VAR_0,
        struct blame_origin *VAR_1, mmfile_t *VAR_2,
        int *VAR_3, int VAR_4)
{
 if (!VAR_1->file.ptr) {
  enum object_type VAR_5;
  unsigned long VAR_6;

  (*VAR_3)++;
  if (VAR_0->flags.allow_textconv &&
      FUNC_4(VAR_0->repo, VAR_1->path, VAR_1->mode,
        &VAR_1->blob_oid, 1, &VAR_2->ptr, &VAR_6))
   ;
  else
   VAR_2->ptr = FUNC_3(&VAR_1->blob_oid, &VAR_5,
           &VAR_6);
  VAR_2->size = VAR_6;

  if (!VAR_2->ptr)
   FUNC_0("Cannot read blob %s for path %s",
       FUNC_2(&VAR_1->blob_oid),
       VAR_1->path);
  VAR_1->file = *VAR_2;
 }
 else
  *VAR_2 = VAR_1->file;
 if (VAR_4)
  FUNC_1(VAR_1);
}
