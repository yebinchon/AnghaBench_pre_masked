
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct diff_queue_struct {int nr; TYPE_1__** queue; } ;
struct diff_options {int dummy; } ;
struct diff_filespec {int path; int oid; scalar_t__ mode; } ;
struct cache_entry {int ce_flags; } ;
struct TYPE_2__ {struct diff_filespec* one; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct cache_entry*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 struct cache_entry* FUNC_4 (int *,scalar_t__,int *,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct cache_entry*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_7(struct diff_queue_struct *VAR_4,
  struct diff_options *VAR_5, void *VAR_6)
{
 int VAR_7;
 int VAR_8 = *(int *)VAR_6;

 for (VAR_7 = 0; VAR_7 < VAR_4->nr; VAR_7++) {
  struct diff_filespec *VAR_9 = VAR_4->queue[VAR_7]->one;
  int VAR_10 = !(VAR_9->mode && !FUNC_3(&VAR_9->oid));
  struct cache_entry *VAR_11;

  if (VAR_10 && !VAR_8) {
   FUNC_5(VAR_9->path);
   continue;
  }

  VAR_11 = FUNC_4(&VAR_3, VAR_9->mode, &VAR_9->oid, VAR_9->path,
          0, 0);
  if (!VAR_11)
   FUNC_2(FUNC_0("make_cache_entry failed for path '%s'"),
       VAR_9->path);
  if (VAR_10) {
   VAR_11->ce_flags |= VAR_2;
   FUNC_6(VAR_11);
  }
  FUNC_1(VAR_11, VAR_0 | VAR_1);
 }
}
