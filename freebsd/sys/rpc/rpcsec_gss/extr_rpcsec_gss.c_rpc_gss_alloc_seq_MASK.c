
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rpc_gss_data {int gd_lock; int gd_seq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static uint32_t
FUNC_2(struct rpc_gss_data *VAR_0)
{
 uint32_t VAR_1;

 FUNC_0(&VAR_0->gd_lock);
 VAR_1 = VAR_0->gd_seq;
 VAR_0->gd_seq++;
 FUNC_1(&VAR_0->gd_lock);

 return (VAR_1);
}
