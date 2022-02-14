
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
struct sockopt {int sopt_level; int sopt_name; int* sopt_val; int sopt_valsize; } ;
struct socket {int so_vnet; } ;
typedef int sopt ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sockopt*,int) ;
 int FUNC_3 (struct socket*,struct sockopt*) ;

__attribute__((used)) static int
FUNC_4(struct socket *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 struct sockopt VAR_4;
 int VAR_5;

 FUNC_2(&VAR_4, sizeof(VAR_4));
 VAR_4.sopt_level = VAR_1;
 VAR_4.sopt_name = VAR_2;
 VAR_4.sopt_val = &VAR_3;
 VAR_4.sopt_valsize = sizeof(VAR_3);
 FUNC_1(VAR_0->so_vnet);
 VAR_5 = FUNC_3(VAR_0, &VAR_4);
 FUNC_0();
 return VAR_5;
}
