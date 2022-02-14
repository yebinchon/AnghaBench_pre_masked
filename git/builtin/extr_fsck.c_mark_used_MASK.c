
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object {int flags; } ;
struct fsck_options {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct object *VAR_1, int VAR_2, void *VAR_3, struct fsck_options *VAR_4)
{
 if (!VAR_1)
  return 1;
 VAR_1->flags |= VAR_0;
 return 0;
}
