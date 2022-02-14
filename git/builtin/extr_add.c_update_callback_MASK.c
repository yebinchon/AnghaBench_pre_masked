
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct update_callback_data {int flags; int add_errors; } ;
struct diff_queue_struct {int nr; struct diff_filepair** queue; } ;
struct diff_options {int dummy; } ;
struct diff_filepair {int status; TYPE_1__* one; } ;
struct TYPE_2__ {char* path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 char* FUNC_0 (char*) ;
 int FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct diff_filepair*,struct update_callback_data*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (int *,char const*) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_6(struct diff_queue_struct *VAR_5,
       struct diff_options *VAR_6, void *VAR_7)
{
 int VAR_8;
 struct update_callback_data *VAR_9 = VAR_7;

 for (VAR_8 = 0; VAR_8 < VAR_5->nr; VAR_8++) {
  struct diff_filepair *VAR_10 = VAR_5->queue[VAR_8];
  const char *VAR_11 = VAR_10->one->path;
  switch (FUNC_3(VAR_10, VAR_9)) {
  default:
   FUNC_2(FUNC_0("unexpected diff status %c"), VAR_10->status);
  case 129:
  case 128:
   if (FUNC_1(&VAR_4, VAR_11, VAR_9->flags)) {
    if (!(VAR_9->flags & VAR_0))
     FUNC_2(FUNC_0("updating files failed"));
    VAR_9->add_errors++;
   }
   break;
  case 130:
   if (VAR_9->flags & VAR_1)
    break;
   if (!(VAR_9->flags & VAR_2))
    FUNC_5(&VAR_4, VAR_11);
   if (VAR_9->flags & (VAR_2|VAR_3))
    FUNC_4(FUNC_0("remove '%s'\n"), VAR_11);
   break;
  }
 }
}
