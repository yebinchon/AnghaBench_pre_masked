
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btree {int keys; int key; } ;
struct bkey {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (int *,struct bkey*,struct bkey*) ;
 int FUNC_2 (int *,char*,unsigned int,char*) ;
 scalar_t__ FUNC_3 (struct bkey*,int *) ;
 int FUNC_4 (struct btree*,struct bkey*,int ,unsigned int) ;

__attribute__((used)) static bool FUNC_5(struct btree *VAR_1, struct bkey *VAR_2,
        struct bkey *VAR_3)
{
 unsigned int VAR_4;

 FUNC_0(FUNC_3(VAR_2, &VAR_1->key) > 0);

 VAR_4 = FUNC_1(&VAR_1->keys, VAR_2, VAR_3);
 if (VAR_4 != VAR_0) {
  FUNC_2(&VAR_1->keys, "%u for %s", VAR_4,
          VAR_3 ? "replace" : "insert");

  FUNC_4(VAR_1, VAR_2, VAR_3 != ((void*)0),
           VAR_4);
  return 1;
 } else
  return 0;
}
