
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char const* path; int mode; int id; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_5(git_index *VAR_6, const char *VAR_7)
{
 git_index_entry VAR_8, VAR_9, VAR_10;
 static int VAR_11 = 0;
 char *VAR_12[] =
  { VAR_0, VAR_3 };
 char *VAR_13[] =
  { VAR_1, VAR_4 };
 char *VAR_14[] =
  { VAR_2, VAR_5 };

 VAR_11 = (VAR_11 + 1) % 2;

 FUNC_4(&VAR_8, 0x0, sizeof(git_index_entry));
 FUNC_4(&VAR_9, 0x0, sizeof(git_index_entry));
 FUNC_4(&VAR_10, 0x0, sizeof(git_index_entry));

 VAR_8.path = VAR_7;
 VAR_8.mode = 0100644;
 FUNC_0(&VAR_8, 1);
 FUNC_3(&VAR_8.id, VAR_12[VAR_11]);

 VAR_9.path = VAR_7;
 VAR_9.mode = 0100644;
 FUNC_0(&VAR_9, 2);
 FUNC_3(&VAR_9.id, VAR_13[VAR_11]);

 VAR_10.path = VAR_7;
 VAR_10.mode = 0100644;
 FUNC_0(&VAR_8, 2);
 FUNC_3(&VAR_10.id, VAR_14[VAR_11]);

 FUNC_1(FUNC_2(VAR_6, &VAR_8,
  &VAR_9, &VAR_10));
}
