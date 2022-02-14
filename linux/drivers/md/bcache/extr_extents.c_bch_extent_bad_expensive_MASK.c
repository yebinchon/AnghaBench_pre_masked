
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bucket {scalar_t__ prio; int last_gc; int gen; int pin; } ;
struct btree {TYPE_1__* c; } ;
struct bkey {int dummy; } ;
typedef int buf ;
struct TYPE_3__ {int bucket_lock; scalar_t__ gc_mark_valid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct bucket*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct bkey const*) ;
 struct bucket* FUNC_2 (TYPE_1__*,struct bkey const*,unsigned int) ;
 int FUNC_3 (TYPE_1__*,struct bkey const*,unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int,struct bkey const*) ;
 int FUNC_6 (struct btree*,char*,char*,int ,int ,scalar_t__,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static bool FUNC_9(struct btree *VAR_3, const struct bkey *VAR_4,
         unsigned int VAR_5)
{
 struct bucket *VAR_6 = FUNC_2(VAR_3->c, VAR_4, VAR_5);
 char VAR_7[80];

 if (FUNC_7(&VAR_3->c->bucket_lock)) {
  if (VAR_3->c->gc_mark_valid &&
      (!FUNC_0(VAR_6) ||
       FUNC_0(VAR_6) == VAR_2 ||
       (FUNC_0(VAR_6) != VAR_1 && FUNC_1(VAR_4))))
   goto err;

  if (VAR_6->prio == VAR_0)
   goto err;

  FUNC_8(&VAR_3->c->bucket_lock);
 }

 return 0;
err:
 FUNC_8(&VAR_3->c->bucket_lock);
 FUNC_5(VAR_7, sizeof(VAR_7), VAR_4);
 FUNC_6(VAR_3,
"inconsistent extent pointer %s:\nbucket %zu pin %i prio %i gen %i last_gc %i mark %llu",
    VAR_7, FUNC_3(VAR_3->c, VAR_4, VAR_5), FUNC_4(&VAR_6->pin),
    VAR_6->prio, VAR_6->gen, VAR_6->last_gc, FUNC_0(VAR_6));
 return 1;
}
