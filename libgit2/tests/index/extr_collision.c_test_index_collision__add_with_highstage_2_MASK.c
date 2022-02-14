
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int seconds; } ;
struct TYPE_7__ {int seconds; } ;
struct TYPE_9__ {int mode; char* path; int id; scalar_t__ file_size; TYPE_2__ mtime; TYPE_1__ ctime; } ;
typedef TYPE_3__ git_index_entry ;
typedef int entry ;


 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;

void FUNC_5(void)
{
 git_index_entry VAR_2;

 FUNC_4(&VAR_2, 0, sizeof(VAR_2));
 VAR_2.ctime.seconds = 12346789;
 VAR_2.mtime.seconds = 12346789;
 VAR_2.mode = 0100644;
 VAR_2.file_size = 0;
 FUNC_3(&VAR_2.id, &VAR_0);

 VAR_2.path = "a/b/c";
 FUNC_0(&VAR_2, 1);
 FUNC_1(FUNC_2(VAR_1, &VAR_2));


 VAR_2.path = "a/b/c";
 FUNC_0(&VAR_2, 2);
 FUNC_1(FUNC_2(VAR_1, &VAR_2));


 VAR_2.path = "a/b";
 FUNC_0(&VAR_2, 3);
 FUNC_1(FUNC_2(VAR_1, &VAR_2));
}
