
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_crypto_info {int addr_in; int count; int addr_out; } ;


 int FUNC_0 (struct rk_crypto_info*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct rk_crypto_info *VAR_5)
{
 FUNC_0(VAR_5, VAR_2, VAR_5->addr_in);
 FUNC_0(VAR_5, VAR_1, VAR_5->count / 4);
 FUNC_0(VAR_5, VAR_3, VAR_5->addr_out);
 FUNC_0(VAR_5, VAR_4, VAR_0 |
       FUNC_1(VAR_0, 16));
}
