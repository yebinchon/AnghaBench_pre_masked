
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct closure {int dummy; } ;
struct btree {int write_lock; } ;


 int FUNC_0 (struct btree*,struct closure*) ;
 int FUNC_1 (struct closure*) ;
 int FUNC_2 (struct closure*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct btree *VAR_0)
{
 struct closure VAR_1;

 FUNC_1(&VAR_1);

 FUNC_3(&VAR_0->write_lock);
 FUNC_0(VAR_0, &VAR_1);
 FUNC_4(&VAR_0->write_lock);

 FUNC_2(&VAR_1);
}
