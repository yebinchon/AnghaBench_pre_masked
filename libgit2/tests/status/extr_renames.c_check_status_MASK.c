
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct status_entry {scalar_t__ newname; scalar_t__ oldname; int status; } ;
typedef int git_status_list ;
struct TYPE_15__ {int status; TYPE_6__* head_to_index; TYPE_4__* index_to_workdir; } ;
typedef TYPE_7__ git_status_entry ;
struct TYPE_13__ {char* path; } ;
struct TYPE_9__ {char* path; } ;
struct TYPE_14__ {TYPE_5__ new_file; TYPE_1__ old_file; } ;
struct TYPE_11__ {char* path; } ;
struct TYPE_10__ {char* path; } ;
struct TYPE_12__ {TYPE_3__ new_file; TYPE_2__ old_file; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (char const*,scalar_t__) ;
 int FUNC_3 (size_t,size_t) ;
 TYPE_7__* FUNC_4 (int *,size_t) ;
 size_t FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(
 git_status_list *VAR_2,
 struct status_entry *VAR_3,
 size_t VAR_4)
{
 const git_status_entry *VAR_5;
 const struct status_entry *VAR_6;
 const char *VAR_7, *VAR_8;
 size_t VAR_9, VAR_10 = FUNC_5(VAR_2);

 FUNC_3(VAR_4, VAR_10);

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  VAR_5 = FUNC_4(VAR_2, VAR_9);
  VAR_6 = &VAR_3[VAR_9];

  VAR_7 = VAR_5->head_to_index ? VAR_5->head_to_index->old_file.path :
   VAR_5->index_to_workdir ? VAR_5->index_to_workdir->old_file.path : ((void*)0);

  VAR_8 = VAR_5->index_to_workdir ? VAR_5->index_to_workdir->new_file.path :
   VAR_5->head_to_index ? VAR_5->head_to_index->new_file.path : ((void*)0);

  FUNC_1(VAR_6->status, VAR_5->status, "%04x");

  if (VAR_6->oldname) {
   FUNC_0(VAR_7 != ((void*)0));
   FUNC_2(VAR_7, VAR_6->oldname);
  } else {
   FUNC_0(VAR_7 == ((void*)0));
  }

  if (VAR_5->status & (VAR_0|VAR_1)) {
   if (VAR_6->newname) {
    FUNC_0(VAR_8 != ((void*)0));
    FUNC_2(VAR_8, VAR_6->newname);
   } else {
    FUNC_0(VAR_8 == ((void*)0));
   }
  }
 }
}
