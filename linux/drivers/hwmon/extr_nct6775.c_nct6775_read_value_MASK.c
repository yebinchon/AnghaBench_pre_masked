
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nct6775_data {scalar_t__ addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct nct6775_data*,int) ;
 int FUNC_2 (struct nct6775_data*,int) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static u16 FUNC_4(struct nct6775_data *VAR_2, u16 VAR_3)
{
 int VAR_4, VAR_5 = FUNC_1(VAR_2, VAR_3);

 FUNC_2(VAR_2, VAR_3);
 FUNC_3(VAR_3 & 0xff, VAR_2->addr + VAR_0);
 VAR_4 = FUNC_0(VAR_2->addr + VAR_1);
 if (VAR_5) {
  FUNC_3((VAR_3 & 0xff) + 1,
         VAR_2->addr + VAR_0);
  VAR_4 = (VAR_4 << 8) + FUNC_0(VAR_2->addr + VAR_1);
 }
 return VAR_4;
}
