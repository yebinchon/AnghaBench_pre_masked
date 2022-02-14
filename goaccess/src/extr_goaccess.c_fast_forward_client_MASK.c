
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mutex; } ;
struct TYPE_3__ {int mutex; int fd; } ;


 int FUNC_0 (char*) ;
 TYPE_2__ VAR_0 ;
 char* FUNC_1 (int ,int ,int ) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,char*,int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6 (int VAR_4)
{
  char *VAR_5 = ((void*)0);

  FUNC_2 (&VAR_0.mutex);
  VAR_5 = FUNC_1 (VAR_1, VAR_3, 0);
  FUNC_3 (&VAR_0.mutex);

  if (VAR_5 == ((void*)0))
    return;

  FUNC_2 (&VAR_2->mutex);
  FUNC_4 (VAR_2->fd, VAR_4, VAR_5, FUNC_5 (VAR_5));
  FUNC_3 (&VAR_2->mutex);
  FUNC_0 (VAR_5);
}
