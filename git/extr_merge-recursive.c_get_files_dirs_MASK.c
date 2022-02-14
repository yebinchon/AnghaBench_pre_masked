
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {int dummy; } ;
struct pathspec {int dummy; } ;
struct merge_options {int repo; } ;
typedef int match_all ;


 int FUNC_0 (struct pathspec*,int ,int) ;
 int FUNC_1 (int ,struct tree*,char*,int ,int ,struct pathspec*,int ,struct merge_options*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct merge_options *VAR_1, struct tree *VAR_2)
{
 struct pathspec VAR_3;
 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 FUNC_1(VAR_1->repo, VAR_2, "", 0, 0,
       &VAR_3, VAR_0, VAR_1);
}
