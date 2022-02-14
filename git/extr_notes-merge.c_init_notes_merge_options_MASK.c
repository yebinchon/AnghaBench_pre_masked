
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct notes_merge_options {struct repository* repo; int verbosity; int commit_msg; } ;


 int VAR_0 ;
 int FUNC_0 (struct notes_merge_options*,int ,int) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(struct repository *VAR_1,
         struct notes_merge_options *VAR_2)
{
 FUNC_0(VAR_2, 0, sizeof(struct notes_merge_options));
 FUNC_1(&(VAR_2->commit_msg), 0);
 VAR_2->verbosity = VAR_0;
 VAR_2->repo = VAR_1;
}
