
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int path; } ;
typedef TYPE_1__ git_index_entry ;
struct TYPE_14__ {int entries; } ;
typedef TYPE_2__ git_index ;
struct TYPE_15__ {int ptr; int size; } ;
typedef TYPE_3__ git_buf ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,char const*) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_1__* FUNC_5 (int *,size_t) ;
 int FUNC_6 (size_t*,TYPE_2__*,int ,int ,int ) ;
 int FUNC_7 (TYPE_2__*,size_t) ;

int FUNC_8(git_index *VAR_2, const char *VAR_3, int VAR_4)
{
 git_buf VAR_5 = VAR_0;
 int VAR_6 = 0;
 size_t VAR_7;
 git_index_entry *VAR_8;

 if (!(VAR_6 = FUNC_3(&VAR_5, VAR_3)) &&
  !(VAR_6 = FUNC_4(&VAR_5)))
  FUNC_6(&VAR_7, VAR_2, VAR_5.ptr, VAR_5.size, VAR_1);

 while (!VAR_6) {
  VAR_8 = FUNC_5(&VAR_2->entries, VAR_7);
  if (!VAR_8 || FUNC_1(VAR_8->path, VAR_5.ptr) != 0)
   break;

  if (FUNC_0(VAR_8) != VAR_4) {
   ++VAR_7;
   continue;
  }

  VAR_6 = FUNC_7(VAR_2, VAR_7);


 }

 FUNC_2(&VAR_5);

 return VAR_6;
}
