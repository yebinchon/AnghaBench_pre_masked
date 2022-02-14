
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_rq_stat {int nr_samples; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static inline bool FUNC_0(struct blk_rq_stat *VAR_3)
{






 return (VAR_3[VAR_0].nr_samples >= 1 &&
  VAR_3[VAR_2].nr_samples >= VAR_1);
}
