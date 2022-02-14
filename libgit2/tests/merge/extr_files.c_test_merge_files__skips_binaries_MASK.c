
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int automergeable; int member_0; } ;
typedef TYPE_1__ git_merge_file_result ;
struct TYPE_10__ {char* ptr; int size; char* path; int mode; } ;
typedef TYPE_2__ git_merge_file_input ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,TYPE_2__*,TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(void)
{
 git_merge_file_input VAR_1 = VAR_0,
  VAR_2 = VAR_0,
  VAR_3 = VAR_0;
 git_merge_file_result VAR_4 = {0};

 VAR_1.ptr = "ance\0stor\0";
 VAR_1.size = 10;
 VAR_1.path = "ancestor.txt";
 VAR_1.mode = 0100755;

 VAR_2.ptr = "foo\0bar\0";
 VAR_2.size = 8;
 VAR_2.path = "ours.txt";
 VAR_2.mode = 0100755;

 VAR_3.ptr = "bar\0foo\0";
 VAR_3.size = 8;
 VAR_3.path = "theirs.txt";
 VAR_3.mode = 0100644;

 FUNC_1(FUNC_2(&VAR_4, &VAR_1, &VAR_2, &VAR_3, ((void*)0)));

 FUNC_0(0, VAR_4.automergeable);

 FUNC_3(&VAR_4);
}
