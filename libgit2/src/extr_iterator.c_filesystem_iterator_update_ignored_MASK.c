
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_dir_flag ;
struct TYPE_7__ {int is_ignored; } ;
typedef TYPE_1__ filesystem_iterator_frame ;
struct TYPE_9__ {int path; } ;
struct TYPE_8__ {int current_is_ignored; TYPE_6__ entry; int ignores; } ;
typedef TYPE_2__ filesystem_iterator ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,int *,int ,int ) ;

__attribute__((used)) static void FUNC_4(filesystem_iterator *VAR_1)
{
 filesystem_iterator_frame *VAR_2;
 git_dir_flag VAR_3 = FUNC_0(&VAR_1->entry);

 if (FUNC_3(&VAR_1->current_is_ignored,
   &VAR_1->ignores, VAR_1->entry.path, VAR_3) < 0) {
  FUNC_2();
  VAR_1->current_is_ignored = VAR_0;
 }


 if (VAR_1->current_is_ignored <= VAR_0) {
  VAR_2 = FUNC_1(VAR_1);
  VAR_1->current_is_ignored = VAR_2->is_ignored;
 }
}
