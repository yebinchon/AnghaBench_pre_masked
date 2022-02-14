
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inpcb {int inp_flags2; } ;


 int VAR_0 ;
 int FUNC_0 (struct inpcb*) ;
 int FUNC_1 (struct inpcb*) ;
 int FUNC_2 (struct inpcb*) ;

__attribute__((used)) static void
FUNC_3(struct inpcb *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 && !(VAR_1->inp_flags2 & VAR_0))
  FUNC_0(VAR_1);
 else if (!VAR_2 && (VAR_1->inp_flags2 & VAR_0))
  FUNC_2(VAR_1);
}
