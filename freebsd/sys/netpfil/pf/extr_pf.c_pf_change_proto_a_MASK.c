
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
typedef int u_int16_t ;
struct mbuf {int dummy; } ;
typedef int ao ;


 int FUNC_0 (void*,int*,int) ;
 int FUNC_1 (struct mbuf*,int ,int,int,int ) ;

void
FUNC_2(struct mbuf *VAR_0, void *VAR_1, u_int16_t *VAR_2, u_int32_t VAR_3, u_int8_t VAR_4)
{
 u_int32_t VAR_5;

 FUNC_0(&VAR_5, VAR_1, sizeof(VAR_5));
 FUNC_0(VAR_1, &VAR_3, sizeof(u_int32_t));

 *VAR_2 = FUNC_1(VAR_0,
     FUNC_1(VAR_0, *VAR_2, VAR_5 / 65536, VAR_3 / 65536, VAR_4),
     VAR_5 % 65536, VAR_3 % 65536, VAR_4);
}
