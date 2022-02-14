
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum dfl_fpga_devt_type { ____Placeholder_dfl_fpga_devt_type } dfl_fpga_devt_type ;
typedef int dev_t ;
struct TYPE_2__ {int devt; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static dev_t FUNC_2(enum dfl_fpga_devt_type VAR_2, int VAR_3)
{
 if (VAR_2 >= VAR_0)
  return 0;

 return FUNC_1(FUNC_0(VAR_1[VAR_2].devt), VAR_3);
}
