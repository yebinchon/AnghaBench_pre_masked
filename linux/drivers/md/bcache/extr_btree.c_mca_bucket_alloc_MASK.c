
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_set {int dummy; } ;
struct btree {int io_mutex; struct cache_set* c; int work; int list; int write_lock; int lock; } ;
struct bkey {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 struct btree* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct btree*,struct bkey*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static struct btree *FUNC_8(struct cache_set *VAR_1,
          struct bkey *VAR_2, gfp_t VAR_3)
{




 struct btree *VAR_4 = FUNC_3(sizeof(struct btree), VAR_3);

 if (!VAR_4)
  return ((void*)0);

 FUNC_2(&VAR_4->lock);
 FUNC_4(&VAR_4->lock);
 FUNC_6(&VAR_4->write_lock);
 FUNC_4(&VAR_4->write_lock);
 FUNC_1(&VAR_4->list);
 FUNC_0(&VAR_4->work, VAR_0);
 VAR_4->c = VAR_1;
 FUNC_7(&VAR_4->io_mutex, 1);

 FUNC_5(VAR_4, VAR_2, VAR_3);
 return VAR_4;
}
