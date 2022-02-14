
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int member_0; } ;
struct TYPE_5__ {char* path; scalar_t__ mode; int id; TYPE_1__ member_0; } ;
typedef TYPE_2__ git_index_entry ;
typedef scalar_t__ git_filemode_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int *,char const*) ;

__attribute__((used)) static void FUNC_4(
 bool VAR_2, const char *VAR_3, git_filemode_t VAR_4)
{
 git_index_entry VAR_5 = {0};

 FUNC_1(FUNC_3(&VAR_5.id, VAR_3));

 VAR_5.path = VAR_4 == VAR_0 ? "test_folder" : "test_file";
 VAR_5.mode = VAR_4;

 if (VAR_2)
  FUNC_1(FUNC_2(VAR_1, &VAR_5));
 else
  FUNC_0(FUNC_2(VAR_1, &VAR_5));
}
