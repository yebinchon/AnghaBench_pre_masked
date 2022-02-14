
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_crypto_info {int addr_in; int count; } ;


 int FUNC_0 (struct rk_crypto_info*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(struct rk_crypto_info *VAR_4)
{
 FUNC_0(VAR_4, VAR_3, VAR_4->addr_in);
 FUNC_0(VAR_4, VAR_2, (VAR_4->count + 3) / 4);
 FUNC_0(VAR_4, VAR_0, VAR_1 |
       (VAR_1 << 16));
}
