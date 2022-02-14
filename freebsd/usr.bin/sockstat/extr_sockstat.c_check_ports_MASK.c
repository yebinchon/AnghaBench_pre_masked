
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {scalar_t__ family; struct addr* faddr; struct addr* laddr; } ;
struct addr {int address; struct addr* next; } ;
struct TYPE_4__ {int sin_port; } ;
struct TYPE_3__ {int sin6_port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int * VAR_2 ;
 TYPE_2__* FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct sock *VAR_3)
{
 int VAR_4;
 struct addr *VAR_5;

 if (VAR_2 == ((void*)0))
  return (1);
 if ((VAR_3->family != VAR_0) && (VAR_3->family != VAR_1))
  return (1);
 for (VAR_5 = VAR_3->laddr; VAR_5 != ((void*)0); VAR_5 = VAR_5->next) {
  if (VAR_3->family == VAR_0)
   VAR_4 = FUNC_1(FUNC_2(&VAR_5->address)->sin_port);
  else
   VAR_4 = FUNC_1(FUNC_3(&VAR_5->address)->sin6_port);
  if (FUNC_0(VAR_4))
   return (1);
 }
 for (VAR_5 = VAR_3->faddr; VAR_5 != ((void*)0); VAR_5 = VAR_5->next) {
  if (VAR_3->family == VAR_0)
   VAR_4 = FUNC_1(FUNC_2(&VAR_5->address)->sin_port);
  else
   VAR_4 = FUNC_1(FUNC_3(&VAR_5->address)->sin6_port);
  if (FUNC_0(VAR_4))
   return (1);
 }
 return (0);
}
