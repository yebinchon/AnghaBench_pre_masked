
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int seconds; } ;
struct TYPE_11__ {int file_size; TYPE_1__ mtime; int path; } ;
typedef TYPE_2__ git_index_entry ;
struct TYPE_14__ {scalar_t__ contents; } ;
struct TYPE_12__ {int on_disk; TYPE_5__ entries; } ;
typedef TYPE_3__ git_index ;
struct TYPE_13__ {size_t index; int file_size; int mtime; int path; } ;


 unsigned int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__**,int ) ;
 int FUNC_8 (TYPE_5__*) ;
 scalar_t__ VAR_1 ;
 TYPE_4__* VAR_2 ;

void FUNC_9(void)
{
   git_index *VAR_3;
   unsigned int VAR_4;
   git_index_entry **VAR_5;

   FUNC_4(FUNC_7(&VAR_3, VAR_0));
   FUNC_1(VAR_3->on_disk);

   FUNC_1(FUNC_5(VAR_3) == VAR_1);
   FUNC_1(FUNC_8(&VAR_3->entries));

   VAR_5 = (git_index_entry **)VAR_3->entries.contents;

   for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); ++VAR_4) {
  git_index_entry *VAR_6 = VAR_5[VAR_2[VAR_4].index];

  FUNC_3(VAR_6->path, VAR_2[VAR_4].path);
  FUNC_2(VAR_6->mtime.seconds, VAR_2[VAR_4].mtime);
  FUNC_2(VAR_6->file_size, VAR_2[VAR_4].file_size);
   }

   FUNC_6(VAR_3);
}
