
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_queue_struct {int nr; } ;
struct diff_options {int diff_path_counter; int repo; } ;
struct diff_filespec {int dummy; } ;
struct argv_array {int argv; } ;


 struct argv_array VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,struct argv_array*,char const*,struct diff_filespec*) ;
 int FUNC_2 (struct argv_array*) ;
 int FUNC_3 (struct argv_array*,char const*) ;
 int FUNC_4 (struct argv_array*,char*,int ) ;
 int FUNC_5 (int ,char const*) ;
 int FUNC_6 (struct diff_filespec*) ;
 struct diff_queue_struct VAR_2 ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ,int ,int *,int ) ;

__attribute__((used)) static void FUNC_9(const char *VAR_3,
         const char *VAR_4,
         const char *VAR_5,
         struct diff_filespec *VAR_6,
         struct diff_filespec *VAR_7,
         const char *VAR_8,
         struct diff_options *VAR_9)
{
 struct argv_array VAR_10 = VAR_0;
 struct argv_array VAR_11 = VAR_0;
 struct diff_queue_struct *VAR_12 = &VAR_2;

 FUNC_3(&VAR_10, VAR_3);
 FUNC_3(&VAR_10, VAR_4);

 if (VAR_6 && VAR_7) {
  FUNC_1(VAR_9->repo, &VAR_10, VAR_4, VAR_6);
  if (!VAR_5)
   FUNC_1(VAR_9->repo, &VAR_10, VAR_4, VAR_7);
  else {
   FUNC_1(VAR_9->repo, &VAR_10, VAR_5, VAR_7);
   FUNC_3(&VAR_10, VAR_5);
   FUNC_3(&VAR_10, VAR_8);
  }
 }

 FUNC_4(&VAR_11, "GIT_DIFF_PATH_COUNTER=%d", ++VAR_9->diff_path_counter);
 FUNC_4(&VAR_11, "GIT_DIFF_PATH_TOTAL=%d", VAR_12->nr);

 FUNC_6(VAR_6);
 FUNC_6(VAR_7);
 if (FUNC_8(VAR_10.argv, VAR_1, ((void*)0), VAR_11.argv))
  FUNC_5(FUNC_0("external diff died, stopping at %s"), VAR_4);

 FUNC_7();
 FUNC_2(&VAR_10);
 FUNC_2(&VAR_11);
}
