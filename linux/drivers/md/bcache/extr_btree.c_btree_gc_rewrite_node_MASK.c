
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keylist {int top; } ;
struct btree_op {int dummy; } ;
struct btree {int key; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct btree*,struct btree_op*,struct keylist*,int *,int *) ;
 int FUNC_2 (struct btree*) ;
 int FUNC_3 (struct keylist*,int *) ;
 int FUNC_4 (struct keylist*) ;
 int FUNC_5 (struct keylist*) ;
 int FUNC_6 (struct keylist*) ;
 scalar_t__ FUNC_7 (struct btree*,int *) ;
 struct btree* FUNC_8 (struct btree*,int *) ;
 int FUNC_9 (struct btree*) ;
 int FUNC_10 (struct btree*,int ) ;
 int FUNC_11 (int,struct btree*) ;

__attribute__((used)) static int FUNC_12(struct btree *VAR_1, struct btree_op *VAR_2,
     struct btree *VAR_3)
{
 struct keylist VAR_4;
 struct btree *VAR_5;

 if (FUNC_7(VAR_1, ((void*)0)))
  return 0;

 VAR_5 = FUNC_8(VAR_3, ((void*)0));


 if (FUNC_7(VAR_1, ((void*)0))) {
  FUNC_9(VAR_5);
  FUNC_11(1, VAR_5);
  return 0;
 }

 FUNC_2(VAR_5);

 FUNC_5(&VAR_4);
 FUNC_3(&VAR_4, &VAR_5->key);

 FUNC_10(VAR_3, VAR_4.top);
 FUNC_6(&VAR_4);

 FUNC_1(VAR_1, VAR_2, &VAR_4, ((void*)0), ((void*)0));
 FUNC_0(!FUNC_4(&VAR_4));

 FUNC_9(VAR_3);
 FUNC_11(1, VAR_5);


 return -VAR_0;
}
