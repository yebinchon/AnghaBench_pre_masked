
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int new_entry ;
struct TYPE_8__ {char* path; scalar_t__ mode; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;
typedef scalar_t__ git_filemode_t ;


 int FUNC_0 (int,char const*,int,char*,int *,int) ;
 int FUNC_1 (char const*,int,char*,int,char*,unsigned int,unsigned int) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*,char const*,int ) ;
 int FUNC_4 (size_t*,int *,char*) ;
 TYPE_1__* FUNC_5 (int *,size_t) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__ const*,int) ;
 int FUNC_7 (TYPE_1__*,int,int) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static void FUNC_9(
 git_index *VAR_0, bool VAR_1, git_filemode_t VAR_2,
 const char *VAR_3, int VAR_4)
{
 size_t VAR_5;
 const git_index_entry* VAR_6;
 git_index_entry VAR_7;




 if (VAR_1)
 {
  FUNC_0(!FUNC_4(&VAR_5, VAR_0, "exec_off"),
   VAR_3, VAR_4, "Cannot find original index entry", ((void*)0), 1);

  VAR_6 = FUNC_5(VAR_0, VAR_5);

  FUNC_6(&VAR_7, VAR_6, sizeof(VAR_7));
 }
 else
  FUNC_7(&VAR_7, 0x0, sizeof(git_index_entry));

 VAR_7.path = "filemodes/explicit_test";
 VAR_7.mode = VAR_2;

 if (VAR_1)
 {
  FUNC_0(!FUNC_2(VAR_0, &VAR_7),
   VAR_3, VAR_4, "Cannot add index entry", ((void*)0), 1);
 }
 else
 {
  const char *VAR_8 = "hey there\n";
  FUNC_0(!FUNC_3(VAR_0, &VAR_7, VAR_8, FUNC_8(VAR_8)),
   VAR_3, VAR_4, "Cannot add index entry from buffer", ((void*)0), 1);
 }

 FUNC_0(!FUNC_4(&VAR_5, VAR_0, "filemodes/explicit_test"),
  VAR_3, VAR_4, "Cannot find new index entry", ((void*)0), 1);

 VAR_6 = FUNC_5(VAR_0, VAR_5);

 FUNC_1(VAR_3, VAR_4, "Expected mode does not match index",
  1, "%07o", (unsigned int)VAR_6->mode, (unsigned int)VAR_2);
}
