
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem {int dummy; } ;
struct jit {int lock; int jetsam; struct mem* mem; } ;


 int VAR_0 ;
 struct jit* FUNC_0 (int,int) ;
 int FUNC_1 (struct jit*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct jit *FUNC_4(struct mem *VAR_1) {
    struct jit *VAR_2 = FUNC_0(1, sizeof(struct jit));
    VAR_2->mem = VAR_1;
    FUNC_1(VAR_2, VAR_0);
    FUNC_2(&VAR_2->jetsam);
    FUNC_3(&VAR_2->lock);
    return VAR_2;
}
