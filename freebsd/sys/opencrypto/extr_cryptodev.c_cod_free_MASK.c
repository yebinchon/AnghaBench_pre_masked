
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* uio_iov; } ;
struct cryptop_data {TYPE_2__ uio; } ;
struct TYPE_3__ {struct cryptop_data* iov_base; } ;


 int VAR_0 ;
 int FUNC_0 (struct cryptop_data*,int ) ;

__attribute__((used)) static void
FUNC_1(struct cryptop_data *VAR_1)
{

 FUNC_0(VAR_1->uio.uio_iov[0].iov_base, VAR_0);
 FUNC_0(VAR_1, VAR_0);
}
