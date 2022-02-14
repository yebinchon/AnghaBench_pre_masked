
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct spin_wait {int node_id; TYPE_3__* prev; TYPE_3__* next; } ;
struct TYPE_7__ {TYPE_3__* lock; } ;
typedef TYPE_1__ arch_spinlock_t ;
struct TYPE_9__ {int spinlock_index; } ;
struct TYPE_8__ {int next; } ;


 int VAR_0 ;
 struct spin_wait* FUNC_0 (TYPE_3__*) ;
 TYPE_5__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct spin_wait*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (TYPE_3__**,int,int) ;
 TYPE_3__* FUNC_3 (int) ;
 int FUNC_4 (int,struct spin_wait*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int VAR_8 ;
 int * VAR_9 ;
 struct spin_wait* FUNC_8 (int *) ;

__attribute__((used)) static inline void FUNC_9(arch_spinlock_t *VAR_10)
{
 struct spin_wait *VAR_11, *VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;

 VAR_14 = VAR_1.spinlock_index++;
 FUNC_6();
 VAR_13 = VAR_2;
 VAR_11 = FUNC_8(&VAR_9[VAR_14]);
 VAR_11->prev = VAR_11->next = ((void*)0);
 VAR_15 = VAR_11->node_id;


 while (1) {
  VAR_17 = FUNC_0(VAR_10->lock);
  if ((VAR_17 & VAR_3) == 0 &&
      (VAR_17 & VAR_6) != VAR_6) {







   VAR_18 = (VAR_17 ? (VAR_17 + VAR_5) : 0) | VAR_13;
   if (FUNC_2(&VAR_10->lock, VAR_17, VAR_18))

    goto out;

   continue;
  }

  VAR_18 = VAR_15 | (VAR_17 & VAR_4);
  if (FUNC_2(&VAR_10->lock, VAR_17, VAR_18))
   break;
 }

 VAR_16 = VAR_17 & VAR_7;
 if (VAR_16 != 0) {
  VAR_11->prev = FUNC_3(VAR_16);
  FUNC_1(VAR_11->prev->next, VAR_11);
 }


 VAR_19 = FUNC_4(VAR_17, VAR_11);
 if (VAR_19 && FUNC_5(VAR_19 - 1))
  FUNC_7(VAR_19 - 1);


 if (VAR_16 != 0) {
  VAR_20 = VAR_8;
  while (FUNC_0(VAR_11->prev) != ((void*)0)) {
   if (VAR_20-- >= 0)
    continue;
   VAR_20 = VAR_8;

   VAR_19 = FUNC_4(VAR_17, VAR_11);
   if (VAR_19 && FUNC_5(VAR_19 - 1))
    FUNC_7(VAR_19 - 1);
  }
 }


 VAR_20 = VAR_8;
 while (1) {
  VAR_17 = FUNC_0(VAR_10->lock);
  VAR_19 = VAR_17 & VAR_3;
  if (!VAR_19) {
   VAR_16 = VAR_17 & VAR_7;
   VAR_18 = ((VAR_16 != VAR_15) ? VAR_16 : 0) | VAR_13;
   if (FUNC_2(&VAR_10->lock, VAR_17, VAR_18))

    break;
   continue;
  }
  if (VAR_20-- >= 0)
   continue;
  VAR_20 = VAR_8;
  if (!VAR_0 || FUNC_5(VAR_19 - 1))
   FUNC_7(VAR_19 - 1);
 }


 if (VAR_15 && VAR_16 != VAR_15) {

  while ((VAR_12 = FUNC_0(VAR_11->next)) == ((void*)0))
   ;
  VAR_12->prev = ((void*)0);
 }

 out:
 VAR_1.spinlock_index--;
}
