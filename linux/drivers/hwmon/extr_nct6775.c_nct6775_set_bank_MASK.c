
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct nct6775_data {scalar_t__ bank; scalar_t__ addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct nct6775_data *VAR_3, u16 VAR_4)
{
 u8 VAR_5 = VAR_4 >> 8;

 if (VAR_3->bank != VAR_5) {
  FUNC_0(VAR_2, VAR_3->addr + VAR_0);
  FUNC_0(VAR_5, VAR_3->addr + VAR_1);
  VAR_3->bank = VAR_5;
 }
}
