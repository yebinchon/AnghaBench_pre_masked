
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct w83627hf_data {scalar_t__ addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct w83627hf_data *VAR_3, u16 VAR_4)
{
 if ((VAR_4 & 0x00f0) == 0x50) {
  FUNC_0(VAR_2, VAR_3->addr + VAR_0);
  FUNC_0(VAR_4 >> 8, VAR_3->addr + VAR_1);
 }
}
