
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct merge_options {int detect_renames; int rename_limit; int verbosity; int buffer_output; scalar_t__ renormalize; int obuf; int detect_directory_renames; struct repository* repo; } ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (struct merge_options*,int ,int) ;
 int FUNC_2 (struct merge_options*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (char const*,int *,int) ;

void FUNC_5(struct merge_options *VAR_1,
   struct repository *VAR_2)
{
 const char *VAR_3;
 FUNC_1(VAR_1, 0, sizeof(struct merge_options));

 VAR_1->repo = VAR_2;

 VAR_1->detect_renames = -1;
 VAR_1->detect_directory_renames = VAR_0;
 VAR_1->rename_limit = -1;

 VAR_1->verbosity = 2;
 VAR_1->buffer_output = 1;
 FUNC_3(&VAR_1->obuf, 0);

 VAR_1->renormalize = 0;

 FUNC_2(VAR_1);
 VAR_3 = FUNC_0("GIT_MERGE_VERBOSITY");
 if (VAR_3)
  VAR_1->verbosity = FUNC_4(VAR_3, ((void*)0), 10);
 if (VAR_1->verbosity >= 5)
  VAR_1->buffer_output = 0;
}
