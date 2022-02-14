
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int automergeable; int member_0; } ;
typedef TYPE_1__ git_merge_file_result ;
typedef int git_merge_file_options ;
struct TYPE_9__ {char* path; int mode; void* size; } ;
typedef TYPE_2__ git_merge_file_input ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int *,TYPE_2__*,TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(void)
{
 git_merge_file_input VAR_3 = VAR_0,
  VAR_4 = VAR_0;
 git_merge_file_options VAR_5 = VAR_1;
 git_merge_file_result VAR_6 = {0};

 VAR_3.size = VAR_2 + 1;
 VAR_3.path = "testfile.txt";
 VAR_3.mode = 0100755;

 VAR_4.size = VAR_2 + 1;
 VAR_4.path = "testfile.txt";
 VAR_4.mode = 0100755;

 FUNC_1(FUNC_2(&VAR_6, ((void*)0), &VAR_3, &VAR_4, &VAR_5));

 FUNC_0(0, VAR_6.automergeable);

 FUNC_3(&VAR_6);
}
