
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp55xx_predef_pattern {scalar_t__ size_r; scalar_t__ size_g; scalar_t__ size_b; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct lp55xx_predef_pattern *VAR_1)
{
 return VAR_1->size_r >= VAR_0 ||
        VAR_1->size_g >= VAR_0 ||
        VAR_1->size_b >= VAR_0;
}
