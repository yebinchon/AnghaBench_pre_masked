
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int len; int ptr; int mode; int path; int automergeable; int member_0; } ;
typedef TYPE_1__ git_merge_file_result ;
struct TYPE_9__ {char* path; int mode; int id; } ;
typedef TYPE_2__ git_index_entry ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ,TYPE_2__*,TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,char*) ;
 int VAR_1 ;
 int FUNC_7 (int ) ;

void FUNC_8(void)
{
 git_merge_file_result VAR_2 = {0};
 git_index_entry VAR_3, VAR_4, VAR_5;

 FUNC_6(&VAR_3.id, "6212c31dab5e482247d7977e4f0dd3601decf13b");
 VAR_3.path = "automergeable.txt";
 VAR_3.mode = 0100644;

 FUNC_6(&VAR_4.id, "ee3fa1b8c00aff7fe02065fdb50864bb0d932ccf");
 VAR_4.path = "automergeable.txt";
 VAR_4.mode = 0100755;

 FUNC_6(&VAR_5.id, "058541fc37114bfc1dddf6bd6bffc7fae5c2e6fe");
 VAR_5.path = "newname.txt";
 VAR_5.mode = 0100644;

 FUNC_3(FUNC_4(&VAR_2, VAR_1,
  &VAR_3, &VAR_4, &VAR_5, 0));

 FUNC_0(1, VAR_2.automergeable);

 FUNC_1("newname.txt", VAR_2.path);
 FUNC_0(0100755, VAR_2.mode);

 FUNC_0(FUNC_7(VAR_0), VAR_2.len);
 FUNC_2(VAR_0, VAR_2.ptr, VAR_2.len);

 FUNC_5(&VAR_2);
}
