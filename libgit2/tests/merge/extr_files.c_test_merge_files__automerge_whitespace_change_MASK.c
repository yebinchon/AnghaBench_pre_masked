
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int len; int ptr; int mode; int path; int automergeable; int member_0; } ;
typedef TYPE_1__ git_merge_file_result ;
struct TYPE_13__ {int flags; } ;
typedef TYPE_2__ git_merge_file_options ;
struct TYPE_14__ {char* ptr; int size; char* path; int mode; } ;
typedef TYPE_3__ git_merge_file_input ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char const*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_3__*,TYPE_3__*,TYPE_3__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char const*) ;

void FUNC_7(void)
{
 git_merge_file_input VAR_3 = VAR_1,
  VAR_4 = VAR_1,
  VAR_5 = VAR_1;
 git_merge_file_options VAR_6 = VAR_2;
 git_merge_file_result VAR_7 = {0};
 const char *VAR_8 = "Zero\n1\n2\n3\n4\n5 XXX\n6 YYY\n7\n8\n9\nTen\n";

 VAR_3.ptr = "0\n1\n2\n3\n4\n5 XXX\n6YYY\n7\n8\n9\n10\n";
 VAR_3.size = FUNC_6(VAR_3.ptr);
 VAR_3.path = "testfile.txt";
 VAR_3.mode = 0100755;

 VAR_4.ptr = "Zero\n1\n2\n3\n4\n5 XXX\n6 YYY\n7\n8\n9\n10\n";
 VAR_4.size = FUNC_6(VAR_4.ptr);
 VAR_4.path = "testfile.txt";
 VAR_4.mode = 0100755;

 VAR_5.ptr = "0\n1\n2\n3\n4\n5 XXX\n6  YYY\n7\n8\n9\nTen\n";
 VAR_5.size = FUNC_6(VAR_5.ptr);
 VAR_5.path = "testfile.txt";
 VAR_5.mode = 0100755;

 VAR_6.flags |= VAR_0;
 FUNC_3(FUNC_4(&VAR_7, &VAR_3, &VAR_4, &VAR_5, &VAR_6));

 FUNC_0(1, VAR_7.automergeable);

 FUNC_1("testfile.txt", VAR_7.path);
 FUNC_0(0100755, VAR_7.mode);

 FUNC_0(FUNC_6(VAR_8), VAR_7.len);
 FUNC_2(VAR_8, VAR_7.ptr, VAR_7.len);

 FUNC_5(&VAR_7);
}
