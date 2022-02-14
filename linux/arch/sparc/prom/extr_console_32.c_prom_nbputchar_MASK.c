
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * fd_stdout; } ;
struct TYPE_4__ {int (* v2_dev_write ) (int ,char const*,int) ;} ;
struct TYPE_6__ {TYPE_2__ pv_v2bootargs; TYPE_1__ pv_v2devops; int (* pv_nbputchar ) (char const) ;} ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_3__* VAR_2 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (char const) ;
 int FUNC_4 (int ,char const*,int) ;

__attribute__((used)) static int FUNC_5(const char *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5 = -1;

 FUNC_1(&VAR_0, VAR_4);
 switch(VAR_1) {
 case 130:
  if ((*(VAR_2->pv_nbputchar))(*VAR_3))
   VAR_5 = 1;
  break;
 case 129:
 case 128:
  if ((*(VAR_2->pv_v2devops).v2_dev_write)(*VAR_2->pv_v2bootargs.fd_stdout,
         VAR_3, 0x1) == 1)
   VAR_5 = 1;
  break;
 default:
  break;
 }
 FUNC_0();
 FUNC_2(&VAR_0, VAR_4);
 return VAR_5;
}
