
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int token_t ;
struct timeval {int dummy; } ;
typedef int au_event_t ;
typedef int au_emod_t ;


 int * FUNC_0 (int,int ,int ,struct timeval) ;
 int FUNC_1 (struct timeval*,int *) ;

token_t *
FUNC_2(int VAR_0, au_event_t VAR_1, au_emod_t VAR_2)
{
 struct timeval VAR_3;

 if (FUNC_1(&VAR_3, ((void*)0)) == -1)
  return (((void*)0));
 return (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3));
}
