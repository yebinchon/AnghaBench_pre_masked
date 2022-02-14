
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; } ;
struct aldap {TYPE_1__ ber; } ;


 struct aldap* FUNC_0 (int,int) ;

struct aldap *
FUNC_1(int VAR_0)
{
 struct aldap *VAR_1;

 if ((VAR_1 = FUNC_0(1, sizeof(*VAR_1))) == ((void*)0))
  return ((void*)0);
 VAR_1->ber.fd = VAR_0;

 return VAR_1;
}
