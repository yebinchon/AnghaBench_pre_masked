
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udpcb {int dummy; } ;
struct inpcb {struct udpcb* inp_ppcb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct udpcb* FUNC_0 (int ,int) ;

int
FUNC_1(struct inpcb *VAR_4)
{
 struct udpcb *VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_1 | VAR_2);
 if (VAR_5 == ((void*)0))
  return (VAR_0);
 VAR_4->inp_ppcb = VAR_5;
 return (0);
}
