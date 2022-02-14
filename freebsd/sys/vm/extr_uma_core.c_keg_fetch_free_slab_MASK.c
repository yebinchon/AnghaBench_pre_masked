
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int * uma_slab_t ;
typedef TYPE_1__* uma_keg_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ uk_reserve; scalar_t__ uk_free; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int * FUNC_1 (TYPE_1__*,int,int) ;

__attribute__((used)) static uma_slab_t
FUNC_2(uma_keg_t VAR_1, int VAR_2, bool VAR_3, int VAR_4)
{
 uint32_t VAR_5;

 FUNC_0(VAR_1);

 VAR_5 = (VAR_4 & VAR_0) != 0 ? 0 : VAR_1->uk_reserve;
 if (VAR_1->uk_free <= VAR_5)
  return (((void*)0));
 return (FUNC_1(VAR_1, VAR_2, VAR_3));
}
