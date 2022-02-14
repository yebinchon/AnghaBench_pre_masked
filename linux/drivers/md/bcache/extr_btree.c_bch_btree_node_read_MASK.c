
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
struct closure {int dummy; } ;
struct TYPE_11__ {TYPE_2__* set; } ;
struct btree {int key; TYPE_4__* c; TYPE_3__ keys; } ;
struct TYPE_9__ {int bi_size; } ;
struct bio {int bi_opf; scalar_t__ bi_status; struct closure* bi_private; int bi_end_io; TYPE_1__ bi_iter; } ;
struct TYPE_12__ {int btree_read_time; } ;
struct TYPE_10__ {int data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct bio* FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct bio*,TYPE_4__*) ;
 int FUNC_4 (struct bio*,int ) ;
 int FUNC_5 (struct btree*) ;
 int FUNC_6 (TYPE_4__*,char*,int ) ;
 int FUNC_7 (struct bio*,TYPE_4__*,int *,int ) ;
 int FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (struct btree*) ;
 int VAR_2 ;
 int FUNC_10 (struct closure*) ;
 int FUNC_11 (struct closure*) ;
 int FUNC_12 () ;
 int FUNC_13 (struct btree*) ;
 int FUNC_14 (struct btree*) ;

__attribute__((used)) static void FUNC_15(struct btree *VAR_3)
{
 uint64_t VAR_4 = FUNC_12();
 struct closure VAR_5;
 struct bio *VAR_6;

 FUNC_14(VAR_3);

 FUNC_10(&VAR_5);

 VAR_6 = FUNC_2(VAR_3->c);
 VAR_6->bi_iter.bi_size = FUNC_0(&VAR_3->key) << 9;
 VAR_6->bi_end_io = VAR_2;
 VAR_6->bi_private = &VAR_5;
 VAR_6->bi_opf = VAR_1 | VAR_0;

 FUNC_4(VAR_6, VAR_3->keys.set[0].data);

 FUNC_7(VAR_6, VAR_3->c, &VAR_3->key, 0);
 FUNC_11(&VAR_5);

 if (VAR_6->bi_status)
  FUNC_13(VAR_3);

 FUNC_3(VAR_6, VAR_3->c);

 if (FUNC_9(VAR_3))
  goto err;

 FUNC_5(VAR_3);
 FUNC_8(&VAR_3->c->btree_read_time, VAR_4);

 return;
err:
 FUNC_6(VAR_3->c, "io error reading bucket %zu",
       FUNC_1(VAR_3->c, &VAR_3->key, 0));
}
