
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int (* xdrproc_t ) (TYPE_1__*,void*) ;
struct TYPE_5__ {int x_op; } ;
typedef TYPE_1__ XDR ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,void*) ;

void
FUNC_1(xdrproc_t VAR_1, void *VAR_2)
{
 XDR VAR_3;

 VAR_3.x_op = VAR_0;
 (*VAR_1)(&VAR_3, VAR_2);
}
