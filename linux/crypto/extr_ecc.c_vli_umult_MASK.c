
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ m_low; scalar_t__ m_high; int member_0; } ;
typedef TYPE_1__ uint128_t ;
typedef scalar_t__ u64 ;
typedef int u32 ;


 TYPE_1__ FUNC_0 (TYPE_1__,TYPE_1__) ;
 TYPE_1__ FUNC_1 (scalar_t__ const,int ) ;

__attribute__((used)) static void FUNC_2(u64 *VAR_0, const u64 *VAR_1, u32 VAR_2,
        unsigned int VAR_3)
{
 uint128_t VAR_4 = { 0 };
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  uint128_t VAR_6;

  VAR_6 = FUNC_1(VAR_1[VAR_5], VAR_2);
  VAR_4 = FUNC_0(VAR_4, VAR_6);

  VAR_0[VAR_5] = VAR_4;
  VAR_4 = VAR_4;
  VAR_4 = 0;
 }
 VAR_0[VAR_5] = VAR_4;
 for (++VAR_5; VAR_5 < VAR_3 * 2; VAR_5++)
  VAR_0[VAR_5] = 0;
}
