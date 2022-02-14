
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct btree {TYPE_1__* c; int key; } ;
struct bkey {int dummy; } ;
struct TYPE_3__ {int bucket_lock; int prio_blocked; } ;


 unsigned int FUNC_0 (struct bkey*) ;
 int FUNC_1 (TYPE_1__*,int *,unsigned int) ;
 int FUNC_2 (TYPE_1__*,int *,unsigned int) ;
 int FUNC_3 (struct bkey*,unsigned int,int ) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct bkey*,int *) ;
 int FUNC_7 (struct bkey*,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct btree *VAR_1, struct bkey *VAR_2)
{
 unsigned int VAR_3;

 FUNC_8(&VAR_1->c->bucket_lock);

 FUNC_4(&VAR_1->c->prio_blocked);

 FUNC_6(VAR_2, &VAR_1->key);
 FUNC_7(VAR_2, &VAR_0);

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2); VAR_3++)
  FUNC_3(VAR_2, VAR_3,
       FUNC_5(FUNC_2(VAR_1->c, &VAR_1->key, VAR_3),
     FUNC_1(VAR_1->c, &VAR_1->key, VAR_3)));

 FUNC_9(&VAR_1->c->bucket_lock);
}
