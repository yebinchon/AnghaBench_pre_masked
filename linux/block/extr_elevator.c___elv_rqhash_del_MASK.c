
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int rq_flags; int hash; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct request *VAR_1)
{
 FUNC_0(&VAR_1->hash);
 VAR_1->rq_flags &= ~VAR_0;
}
