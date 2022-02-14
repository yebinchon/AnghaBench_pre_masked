
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int (* xdrproc_t ) (TYPE_1__*,void*) ;
typedef int bool_t ;
struct TYPE_5__ {int x_op; } ;
typedef TYPE_1__ XDR ;
typedef int CLIENT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,void*) ;

__attribute__((used)) static bool_t
FUNC_1(CLIENT *VAR_1, xdrproc_t VAR_2, void *VAR_3)
{
 XDR VAR_4;
 bool_t VAR_5;

 VAR_4.x_op = VAR_0;
 VAR_5 = (*VAR_2)(&VAR_4, VAR_3);

 return (VAR_5);
}
