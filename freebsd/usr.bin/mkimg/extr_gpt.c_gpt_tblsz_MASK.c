
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct gpt_ent {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u_int
FUNC_0(void)
{
 u_int VAR_2;

 VAR_2 = VAR_1 / sizeof(struct gpt_ent);
 return ((VAR_0 + VAR_2 - 1) / VAR_2);
}
