
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clone {scalar_t__ region_size; } ;
struct bio {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 scalar_t__ FUNC_1 (struct bio*) ;

__attribute__((used)) static inline bool FUNC_2(struct clone *VAR_1, struct bio *VAR_2)
{
 return (FUNC_0(VAR_2) == VAR_0 && FUNC_1(VAR_2) == VAR_1->region_size);
}
