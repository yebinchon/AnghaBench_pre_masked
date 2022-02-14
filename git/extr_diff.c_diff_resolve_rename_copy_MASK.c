
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct diff_queue_struct {int nr; struct diff_filepair** queue; } ;
struct diff_filepair {void* status; TYPE_1__* one; TYPE_1__* two; } ;
struct TYPE_2__ {scalar_t__ rename_used; scalar_t__ mode; int path; int oid; scalar_t__ dirty_submodule; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (struct diff_filepair*) ;
 scalar_t__ FUNC_2 (struct diff_filepair*) ;
 scalar_t__ FUNC_3 (struct diff_filepair*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_4 (char*,struct diff_queue_struct*) ;
 struct diff_queue_struct VAR_8 ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static void FUNC_9(void)
{
 int VAR_9;
 struct diff_filepair *VAR_10;
 struct diff_queue_struct *VAR_11 = &VAR_8;

 FUNC_4("resolve-rename-copy", VAR_11);

 for (VAR_9 = 0; VAR_9 < VAR_11->nr; VAR_9++) {
  VAR_10 = VAR_11->queue[VAR_9];
  VAR_10->status = 0;
  if (FUNC_3(VAR_10))
   VAR_10->status = VAR_7;
  else if (!FUNC_0(VAR_10->one))
   VAR_10->status = VAR_0;
  else if (!FUNC_0(VAR_10->two))
   VAR_10->status = VAR_2;
  else if (FUNC_2(VAR_10))
   VAR_10->status = VAR_5;





  else if (FUNC_1(VAR_10)) {
   if (!FUNC_8(VAR_10->one->path, VAR_10->two->path))
    VAR_10->status = VAR_3;
   else if (--VAR_10->one->rename_used > 0)
    VAR_10->status = VAR_1;
   else
    VAR_10->status = VAR_4;
  }
  else if (!FUNC_7(&VAR_10->one->oid, &VAR_10->two->oid) ||
    VAR_10->one->mode != VAR_10->two->mode ||
    VAR_10->one->dirty_submodule ||
    VAR_10->two->dirty_submodule ||
    FUNC_6(&VAR_10->one->oid))
   VAR_10->status = VAR_3;
  else {



   FUNC_5("feeding unmodified %s to diffcore",
         VAR_10->one->path);
   VAR_10->status = VAR_6;
  }
 }
 FUNC_4("resolve-rename-copy done", VAR_11);
}
