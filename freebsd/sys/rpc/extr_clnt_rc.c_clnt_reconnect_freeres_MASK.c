
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xdrproc_t ;
struct rc_data {int rc_client; } ;
typedef int bool_t ;
struct TYPE_3__ {scalar_t__ cl_private; } ;
typedef TYPE_1__ CLIENT ;


 int FUNC_0 (int ,int ,void*) ;

__attribute__((used)) static bool_t
FUNC_1(CLIENT *VAR_0, xdrproc_t VAR_1, void *VAR_2)
{
 struct rc_data *VAR_3 = (struct rc_data *)VAR_0->cl_private;

 return (FUNC_0(VAR_3->rc_client, VAR_1, VAR_2));
}
