
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int len; int ptr; int mode; int path; int automergeable; int member_0; } ;
typedef TYPE_1__ git_merge_file_result ;
struct TYPE_10__ {char* ptr; int size; char* path; int mode; } ;
typedef TYPE_2__ git_merge_file_input ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char const*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char const*) ;

void FUNC_7(void)
{
 git_merge_file_input VAR_1 = VAR_0,
  VAR_2 = VAR_0,
  VAR_3 = VAR_0;
 git_merge_file_result VAR_4 = {0};
 const char *VAR_5 = "Zero\n1\n2\n3\n4\n5\n6\n7\n8\n9\nTen\n";

 VAR_1.ptr = "0\n1\n2\n3\n4\n5\n6\n7\n8\n9\n10\n";
 VAR_1.size = FUNC_6(VAR_1.ptr);
 VAR_1.path = "testfile.txt";
 VAR_1.mode = 0100755;

 VAR_2.ptr = "Zero\n1\n2\n3\n4\n5\n6\n7\n8\n9\n10\n";
 VAR_2.size = FUNC_6(VAR_2.ptr);
 VAR_2.path = "testfile.txt";
 VAR_2.mode = 0100644;

 VAR_3.ptr = "0\n1\n2\n3\n4\n5\n6\n7\n8\n9\nTen\n";
 VAR_3.size = FUNC_6(VAR_3.ptr);
 VAR_3.path = "theirs.txt";
 VAR_3.mode = 0100755;

 FUNC_3(FUNC_4(&VAR_4, &VAR_1, &VAR_2, &VAR_3, 0));

 FUNC_0(1, VAR_4.automergeable);

 FUNC_1("theirs.txt", VAR_4.path);
 FUNC_0(0100644, VAR_4.mode);

 FUNC_0(FUNC_6(VAR_5), VAR_4.len);
 FUNC_2(VAR_5, VAR_4.ptr, VAR_4.len);

 FUNC_5(&VAR_4);
}
