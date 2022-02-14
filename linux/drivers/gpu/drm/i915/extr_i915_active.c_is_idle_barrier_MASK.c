
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct active_node {scalar_t__ timeline; int base; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline bool FUNC_1(struct active_node *VAR_0, u64 VAR_1)
{
 return VAR_0->timeline == VAR_1 && !FUNC_0(&VAR_0->base);
}
