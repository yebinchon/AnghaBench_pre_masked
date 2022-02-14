
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct set_gitdir_args {void* alternate_db; void* index_file; void* graft_file; void* object_dir; void* commondir; int * member_0; } ;
struct argv_array {int dummy; } ;


 int VAR_0 ;
 struct argv_array VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct argv_array*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 void* FUNC_4 (struct argv_array*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_5 (int ,char const*,struct set_gitdir_args*) ;
 int FUNC_6 (int ,char const*,int ) ;
 int VAR_13 ;
 int FUNC_7 (char const*) ;

void FUNC_8(const char *VAR_14)
{
 const char *VAR_15;
 const char *VAR_16;
 struct set_gitdir_args VAR_17 = { ((void*)0) };
 struct argv_array VAR_18 = VAR_1;

 VAR_17.commondir = FUNC_4(&VAR_18, VAR_3);
 VAR_17.object_dir = FUNC_4(&VAR_18, VAR_2);
 VAR_17.graft_file = FUNC_4(&VAR_18, VAR_7);
 VAR_17.index_file = FUNC_4(&VAR_18, VAR_8);
 VAR_17.alternate_db = FUNC_4(&VAR_18, VAR_0);
 FUNC_5(VAR_13, VAR_14, &VAR_17);
 FUNC_0(&VAR_18);

 if (FUNC_3(VAR_9))
  VAR_12 = 0;
 VAR_16 = FUNC_3(VAR_5);
 FUNC_2(VAR_11);
 VAR_11 = FUNC_7(VAR_16 ? VAR_16
         : "refs/replace/");
 FUNC_2(VAR_10);
 VAR_10 = FUNC_1(FUNC_3(VAR_4));
 VAR_15 = FUNC_3(VAR_6);
 if (VAR_15)
  FUNC_6(VAR_13, VAR_15, 0);
}
