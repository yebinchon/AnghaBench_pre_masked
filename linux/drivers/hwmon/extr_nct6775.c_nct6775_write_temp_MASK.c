
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nct6775_data {int dummy; } ;


 int FUNC_0 (struct nct6775_data*,int) ;
 int FUNC_1 (struct nct6775_data*,int,int) ;

__attribute__((used)) static int FUNC_2(struct nct6775_data *VAR_0, u16 VAR_1, u16 VAR_2)
{
 if (!FUNC_0(VAR_0, VAR_1))
  VAR_2 >>= 8;
 return FUNC_1(VAR_0, VAR_1, VAR_2);
}
