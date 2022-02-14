
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nx842_coproc {int chip_id; int list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_2(struct nx842_coproc *VAR_1,
     int VAR_2)
{
 VAR_1->chip_id = VAR_2;
 FUNC_0(&VAR_1->list);
 FUNC_1(&VAR_1->list, &VAR_0);
}
