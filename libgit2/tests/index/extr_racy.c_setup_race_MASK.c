
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct stat {scalar_t__ st_mtime_nsec; scalar_t__ st_mtime; } ;
typedef void* int32_t ;
struct TYPE_8__ {void* nanoseconds; void* seconds; } ;
struct TYPE_9__ {TYPE_1__ mtime; } ;
typedef TYPE_2__ git_index_entry ;
typedef int git_index ;
struct TYPE_10__ {int ptr; } ;
typedef TYPE_3__ git_buf ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ,char*) ;
 int FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,struct stat*) ;

__attribute__((used)) static void FUNC_11(void)
{
 git_buf VAR_2 = VAR_0;
 git_index *VAR_3;
 git_index_entry *VAR_4;
 struct stat VAR_5;


 FUNC_2(FUNC_8(&VAR_3, VAR_1));
 FUNC_2(FUNC_7(VAR_3));

 FUNC_2(FUNC_4(&VAR_2, FUNC_9(VAR_1), "A"));

 FUNC_1(VAR_2.ptr, "A");
 FUNC_2(FUNC_5(VAR_3, "A"));

 FUNC_1(VAR_2.ptr, "B");
 FUNC_2(FUNC_7(VAR_3));

 FUNC_1(VAR_2.ptr, "");

 FUNC_2(FUNC_10(VAR_2.ptr, &VAR_5));
 FUNC_0(VAR_4 = (git_index_entry *)FUNC_6(VAR_3, "A", 0));


 VAR_4->mtime.seconds = (int32_t)VAR_5.st_mtime;
 VAR_4->mtime.nanoseconds = (int32_t)VAR_5.st_mtime_nsec;

 FUNC_3(&VAR_2);
}
