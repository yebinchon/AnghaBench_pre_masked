
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ftm_quaddec {scalar_t__ ftm_base; scalar_t__ big_endian; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ftm_quaddec *VAR_0, uint32_t VAR_1, uint32_t *VAR_2)
{
 if (VAR_0->big_endian)
  *VAR_2 = FUNC_1(VAR_0->ftm_base + VAR_1);
 else
  *VAR_2 = FUNC_0(VAR_0->ftm_base + VAR_1);
}
