
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fd; } ;
struct TYPE_6__ {TYPE_1__ sock; int connection_lost; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_2__*,int *) ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (int *) ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_2(void)
{
 if (VAR_0)
  return 1;

 VAR_0 = FUNC_1(((void*)0));
 if (!VAR_0)
  return 0;

 VAR_0->connection_lost = VAR_1;
 FUNC_0(VAR_0->sock.fd, VAR_2, VAR_0, ((void*)0));
 return 1;
}
