
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct gc_stat {int key_bytes; int data; } ;
struct closure {int dummy; } ;
struct cache_set {int gc_stats; int btree_gc_time; int flags; } ;
struct btree_op {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cache_set*) ;
 int FUNC_1 (struct btree_op*,int ) ;
 int FUNC_2 (struct cache_set*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct cache_set*,struct gc_stat*) ;
 int FUNC_5 (struct cache_set*) ;
 int FUNC_6 (int ,struct cache_set*,struct btree_op*,struct closure*,struct gc_stat*) ;
 int FUNC_7 (struct closure*) ;
 int FUNC_8 (struct closure*) ;
 int FUNC_9 () ;
 int VAR_4 ;
 int FUNC_10 () ;
 int FUNC_11 (int *,struct gc_stat*,int) ;
 int FUNC_12 (struct gc_stat*,int ,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (struct cache_set*) ;
 int FUNC_18 (struct cache_set*) ;
 int FUNC_19 (struct cache_set*) ;

__attribute__((used)) static void FUNC_20(struct cache_set *VAR_5)
{
 int VAR_6;
 struct gc_stat VAR_7;
 struct closure VAR_8;
 struct btree_op VAR_9;
 uint64_t VAR_10 = FUNC_10();

 FUNC_18(VAR_5);

 FUNC_12(&VAR_7, 0, sizeof(struct gc_stat));
 FUNC_7(&VAR_8);
 FUNC_1(&VAR_9, VAR_3);

 FUNC_5(VAR_5);


 do {
  VAR_6 = FUNC_6(VAR_4, VAR_5, &VAR_9, &VAR_8, &VAR_7);
  FUNC_8(&VAR_8);
  FUNC_9();

  if (VAR_6 == -VAR_1)
   FUNC_15(FUNC_13
             (VAR_2));
  else if (VAR_6)
   FUNC_14("gc failed!");
 } while (VAR_6 && !FUNC_16(VAR_0, &VAR_5->flags));

 FUNC_0(VAR_5);
 FUNC_19(VAR_5);

 FUNC_3(&VAR_5->btree_gc_time, VAR_10);

 VAR_7.key_bytes *= sizeof(uint64_t);
 VAR_7.data <<= 9;
 FUNC_4(VAR_5, &VAR_7);
 FUNC_11(&VAR_5->gc_stats, &VAR_7, sizeof(struct gc_stat));

 FUNC_17(VAR_5);

 FUNC_2(VAR_5);
}
