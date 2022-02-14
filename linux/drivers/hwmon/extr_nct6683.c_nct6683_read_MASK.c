
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nct6683_data {scalar_t__ addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static u16 FUNC_2(struct nct6683_data *VAR_3, u16 VAR_4)
{
 int VAR_5;

 FUNC_1(0xff, VAR_3->addr + VAR_2);
 FUNC_1(VAR_4 >> 8, VAR_3->addr + VAR_2);
 FUNC_1(VAR_4 & 0xff, VAR_3->addr + VAR_1);
 VAR_5 = FUNC_0(VAR_3->addr + VAR_0);
 return VAR_5;
}
