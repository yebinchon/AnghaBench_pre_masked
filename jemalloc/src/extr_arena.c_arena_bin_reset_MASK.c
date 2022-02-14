
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tsd_t ;
typedef int extent_t ;
struct TYPE_5__ {scalar_t__ curslabs; scalar_t__ curregs; } ;
struct TYPE_6__ {int lock; TYPE_1__ stats; int slabs_full; int slabs_nonfull; int * slabcur; } ;
typedef TYPE_2__ bin_t ;
typedef int arena_t ;


 int FUNC_0 (int *,TYPE_2__*,int *) ;
 int FUNC_1 (int ,int *,int *) ;
 scalar_t__ VAR_0 ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(tsd_t *VAR_1, arena_t *VAR_2, bin_t *VAR_3) {
 extent_t *VAR_4;

 FUNC_4(FUNC_6(VAR_1), &VAR_3->lock);
 if (VAR_3->slabcur != ((void*)0)) {
  VAR_4 = VAR_3->slabcur;
  VAR_3->slabcur = ((void*)0);
  FUNC_5(FUNC_6(VAR_1), &VAR_3->lock);
  FUNC_1(FUNC_6(VAR_1), VAR_2, VAR_4);
  FUNC_4(FUNC_6(VAR_1), &VAR_3->lock);
 }
 while ((VAR_4 = FUNC_2(&VAR_3->slabs_nonfull)) != ((void*)0)) {
  FUNC_5(FUNC_6(VAR_1), &VAR_3->lock);
  FUNC_1(FUNC_6(VAR_1), VAR_2, VAR_4);
  FUNC_4(FUNC_6(VAR_1), &VAR_3->lock);
 }
 for (VAR_4 = FUNC_3(&VAR_3->slabs_full); VAR_4 != ((void*)0);
      VAR_4 = FUNC_3(&VAR_3->slabs_full)) {
  FUNC_0(VAR_2, VAR_3, VAR_4);
  FUNC_5(FUNC_6(VAR_1), &VAR_3->lock);
  FUNC_1(FUNC_6(VAR_1), VAR_2, VAR_4);
  FUNC_4(FUNC_6(VAR_1), &VAR_3->lock);
 }
 if (VAR_0) {
  VAR_3->stats.curregs = 0;
  VAR_3->stats.curslabs = 0;
 }
 FUNC_5(FUNC_6(VAR_1), &VAR_3->lock);
}
