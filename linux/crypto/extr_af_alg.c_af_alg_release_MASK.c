
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int * sk; } ;


 int FUNC_0 (int *) ;

int FUNC_1(struct socket *VAR_0)
{
 if (VAR_0->sk) {
  FUNC_0(VAR_0->sk);
  VAR_0->sk = ((void*)0);
 }
 return 0;
}
