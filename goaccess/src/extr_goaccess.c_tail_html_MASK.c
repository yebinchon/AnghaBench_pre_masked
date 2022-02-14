
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mutex; int not_empty; } ;
struct TYPE_3__ {int fd; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 TYPE_2__ VAR_0 ;
 char* FUNC_4 (int ,int ,int ) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void
FUNC_9 (void)
{
  char *VAR_4 = ((void*)0);

  FUNC_6 (&VAR_0.mutex);
  FUNC_3 (&VAR_3);
  FUNC_5 (&VAR_0.not_empty);
  FUNC_7 (&VAR_0.mutex);

  FUNC_0 ();

  FUNC_6 (&VAR_0.mutex);
  VAR_4 = FUNC_4 (VAR_1, VAR_3, 0);
  FUNC_7 (&VAR_0.mutex);

  if (VAR_4 == ((void*)0))
    return;

  FUNC_1 (VAR_2->fd, VAR_4, FUNC_8 (VAR_4));
  FUNC_2 (VAR_4);
}
