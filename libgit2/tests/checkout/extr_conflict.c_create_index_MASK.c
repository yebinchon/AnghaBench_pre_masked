
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct checkout_index_entry {int stage; int path; int oid_str; int mode; } ;
struct TYPE_5__ {int path; int id; int mode; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (TYPE_1__*,int,int) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int ) ;

__attribute__((used)) static void FUNC_11(struct checkout_index_entry *VAR_3, size_t VAR_4)
{
 git_buf VAR_5 = VAR_0;
 size_t VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  FUNC_4(&VAR_5, VAR_1, VAR_3[VAR_6].path);

  if (VAR_3[VAR_6].stage == 3 && (VAR_6 == 0 || FUNC_10(VAR_3[VAR_6-1].path, VAR_3[VAR_6].path) != 0 || VAR_3[VAR_6-1].stage != 2))
   FUNC_9(FUNC_2(&VAR_5));

  FUNC_1(FUNC_6(VAR_2, VAR_3[VAR_6].path));
 }

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  git_index_entry VAR_7;

  FUNC_8(&VAR_7, 0x0, sizeof(git_index_entry));

  VAR_7.mode = VAR_3[VAR_6].mode;
  FUNC_0(&VAR_7, VAR_3[VAR_6].stage);
  FUNC_7(&VAR_7.id, VAR_3[VAR_6].oid_str);
  VAR_7.path = VAR_3[VAR_6].path;

  FUNC_1(FUNC_5(VAR_2, &VAR_7));
 }

 FUNC_3(&VAR_5);
}
