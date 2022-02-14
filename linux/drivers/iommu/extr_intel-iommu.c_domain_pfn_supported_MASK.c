
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_domain {int agaw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct dmar_domain *VAR_2,
           unsigned long VAR_3)
{
 int VAR_4 = FUNC_0(VAR_2->agaw) - VAR_1;

 return !(VAR_4 < VAR_0 && VAR_3 >> VAR_4);
}
