
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; } ;
struct aldap {TYPE_1__ ber; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct aldap*) ;

int
FUNC_3(struct aldap *VAR_0)
{
 if (FUNC_1(VAR_0->ber.fd) == -1)
  return (-1);

 FUNC_0(&VAR_0->ber);
 FUNC_2(VAR_0);

 return (0);
}
