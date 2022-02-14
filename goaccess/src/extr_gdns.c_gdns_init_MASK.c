
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mutex; int not_full; int not_empty; } ;
typedef int GDnsQueue ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int) ;

void
FUNC_5 (void)
{
  VAR_1 = FUNC_4 (sizeof (GDnsQueue));
  FUNC_1 (VAR_1, VAR_0);

  if (FUNC_2 (&(VAR_2.not_empty), ((void*)0)))
    FUNC_0 ("Failed init thread condition");

  if (FUNC_2 (&(VAR_2.not_full), ((void*)0)))
    FUNC_0 ("Failed init thread condition");

  if (FUNC_3 (&(VAR_2.mutex), ((void*)0)))
    FUNC_0 ("Failed init thread mutex");
}
