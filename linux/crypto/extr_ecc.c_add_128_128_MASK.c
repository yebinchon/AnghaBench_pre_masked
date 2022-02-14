
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ m_low; scalar_t__ m_high; } ;
typedef TYPE_1__ uint128_t ;



__attribute__((used)) static uint128_t FUNC_0(uint128_t VAR_0, uint128_t VAR_1)
{
 uint128_t VAR_2;

 VAR_2.m_low = VAR_0.m_low + VAR_1.m_low;
 VAR_2.m_high = VAR_0.m_high + VAR_1.m_high + (VAR_2.m_low < VAR_0.m_low);

 return VAR_2;
}
