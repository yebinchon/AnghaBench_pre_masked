
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {int dummy; } ;
struct merge_options {int * ancestor; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct merge_options*) ;
 scalar_t__ FUNC_2 (struct merge_options*,struct tree*) ;
 int FUNC_3 (struct merge_options*,struct tree*,struct tree*,struct tree*,struct tree**) ;

int FUNC_4(struct merge_options *VAR_0,
  struct tree *VAR_1,
  struct tree *VAR_2,
  struct tree *VAR_3)
{
 int VAR_4;
 struct tree *VAR_5;

 FUNC_0(VAR_0->ancestor != ((void*)0));

 if (FUNC_2(VAR_0, VAR_1))
  return -1;
 VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_5);
 FUNC_1(VAR_0);

 return VAR_4;
}
