
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {int loginfo; int dense_combined_merges; } ;
struct commit {int dummy; } ;


 int FUNC_0 (struct commit*,int ,struct rev_info*) ;

__attribute__((used)) static int FUNC_1(struct rev_info *VAR_0, struct commit *VAR_1)
{
 FUNC_0(VAR_1, VAR_0->dense_combined_merges, VAR_0);
 return !VAR_0->loginfo;
}
