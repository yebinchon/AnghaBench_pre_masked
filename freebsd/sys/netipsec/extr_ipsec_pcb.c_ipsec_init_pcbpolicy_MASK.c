
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inpcbpolicy {int dummy; } ;
struct inpcb {int * inp_sp; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int,int ,int) ;

int
FUNC_2(struct inpcb *VAR_4)
{

 FUNC_0(VAR_4 != ((void*)0), ("null inp"));
 FUNC_0(VAR_4->inp_sp == ((void*)0), ("inp_sp already initialized"));

 VAR_4->inp_sp = FUNC_1(sizeof(struct inpcbpolicy), VAR_1,
     VAR_2 | VAR_3);
 if (VAR_4->inp_sp == ((void*)0))
  return (VAR_0);
 return (0);
}
