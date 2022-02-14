
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mthca_eq {int eqn; int nent; } ;
struct mthca_dev {int doorbell_lock; scalar_t__ kar; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int,scalar_t__,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static inline void FUNC_3(struct mthca_dev *VAR_2, struct mthca_eq *VAR_3, u32 VAR_4)
{
 FUNC_2();
 FUNC_1(VAR_0 | VAR_3->eqn, VAR_4 & (VAR_3->nent - 1),
        VAR_2->kar + VAR_1,
        FUNC_0(&VAR_2->doorbell_lock));
}
