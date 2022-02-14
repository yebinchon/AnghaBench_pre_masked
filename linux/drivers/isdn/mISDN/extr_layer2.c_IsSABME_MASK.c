
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct layer2 {int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *) ;

inline int
FUNC_1(u_char *VAR_3, struct layer2 *VAR_4)
{
 u_char VAR_5 = VAR_3[0] & ~0x10;

 return FUNC_0(VAR_0, &VAR_4->flag) ? VAR_5 == VAR_2 : VAR_5 == VAR_1;
}
