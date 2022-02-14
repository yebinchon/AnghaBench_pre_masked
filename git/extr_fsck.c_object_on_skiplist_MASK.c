
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object {int oid; } ;
struct fsck_options {int skiplist; } ;


 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(struct fsck_options *VAR_0, struct object *VAR_1)
{
 return VAR_0 && VAR_1 && FUNC_0(&VAR_0->skiplist, &VAR_1->oid);
}
