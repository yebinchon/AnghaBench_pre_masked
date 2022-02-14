
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * private_data; } ;
struct TYPE_5__ {int i_rdev; } ;
typedef TYPE_1__ DSL_DRV_inode_t ;
typedef TYPE_2__ DSL_DRV_file_t ;
typedef int DSL_DEV_Device_t ;


 int * FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4 (DSL_DRV_inode_t * VAR_1, DSL_DRV_file_t * VAR_2)
{
 int VAR_3 = FUNC_2 (VAR_1->i_rdev);
 int VAR_4 = FUNC_3 (VAR_1->i_rdev);

 DSL_DEV_Device_t *VAR_5 = ((void*)0);
 if ((VAR_5 = FUNC_0 (VAR_3, VAR_4)) == ((void*)0)) {
  FUNC_1("open(%d:%d) fail!\n", VAR_3, VAR_4);
  return -VAR_0;
 }
 VAR_2->private_data = VAR_5;
 return 0;
}
