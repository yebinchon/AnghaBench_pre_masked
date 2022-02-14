
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct bucket {scalar_t__ prio; int last_gc; int gen; int pin; } ;
struct btree {TYPE_1__* c; } ;
struct bkey {int dummy; } ;
typedef int buf ;
struct TYPE_4__ {int bucket_lock; scalar_t__ gc_mark_valid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct bucket*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct bkey const*) ;
 unsigned int FUNC_2 (struct bkey const*) ;
 struct bucket* FUNC_3 (TYPE_1__*,struct bkey const*,unsigned int) ;
 int FUNC_4 (TYPE_1__*,struct bkey const*,unsigned int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int,struct bkey const*) ;
 int FUNC_7 (struct btree*,char*,char*,int ,int ,scalar_t__,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (TYPE_1__*,struct bkey const*,unsigned int) ;

__attribute__((used)) static bool FUNC_11(struct btree *VAR_2, const struct bkey *VAR_3)
{
 unsigned int VAR_4;
 char VAR_5[80];
 struct bucket *VAR_6;

 if (FUNC_8(&VAR_2->c->bucket_lock)) {
  for (VAR_4 = 0; VAR_4 < FUNC_2(VAR_3); VAR_4++)
   if (FUNC_10(VAR_2->c, VAR_3, VAR_4)) {
    VAR_6 = FUNC_3(VAR_2->c, VAR_3, VAR_4);

    if (FUNC_1(VAR_3) ||
        VAR_6->prio != VAR_0 ||
        (VAR_2->c->gc_mark_valid &&
         FUNC_0(VAR_6) != VAR_1))
     goto err;
   }

  FUNC_9(&VAR_2->c->bucket_lock);
 }

 return 0;
err:
 FUNC_9(&VAR_2->c->bucket_lock);
 FUNC_6(VAR_5, sizeof(VAR_5), VAR_3);
 FUNC_7(VAR_2,
"inconsistent btree pointer %s: bucket %zi pin %i prio %i gen %i last_gc %i mark %llu",
    VAR_5, FUNC_4(VAR_2->c, VAR_3, VAR_4), FUNC_5(&VAR_6->pin),
    VAR_6->prio, VAR_6->gen, VAR_6->last_gc, FUNC_0(VAR_6));
 return 1;
}
