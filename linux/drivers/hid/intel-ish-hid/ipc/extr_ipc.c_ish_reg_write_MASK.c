
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ishtp_device {int dummy; } ;
struct ish_hw {scalar_t__ mem_addr; } ;


 struct ish_hw* FUNC_0 (struct ishtp_device*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct ishtp_device *VAR_0,
     unsigned long VAR_1,
     uint32_t VAR_2)
{
 struct ish_hw *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(VAR_2, VAR_3->mem_addr + VAR_1);
}
