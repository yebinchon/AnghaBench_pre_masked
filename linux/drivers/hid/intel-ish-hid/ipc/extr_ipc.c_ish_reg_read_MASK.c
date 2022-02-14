
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ishtp_device {int dummy; } ;
struct ish_hw {scalar_t__ mem_addr; } ;


 int FUNC_0 (scalar_t__) ;
 struct ish_hw* FUNC_1 (struct ishtp_device const*) ;

__attribute__((used)) static inline uint32_t FUNC_2(const struct ishtp_device *VAR_0,
 unsigned long VAR_1)
{
 struct ish_hw *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2->mem_addr + VAR_1);
}
