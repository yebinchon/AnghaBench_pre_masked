
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct image_desc {int dummy; } ;
struct TYPE_6__ {int max_fs_size; int max_kernel_size; } ;
struct TYPE_5__ {void* padc; int out_size; int file_name; } ;


 void* VAR_0 ;
 TYPE_4__* VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__ VAR_3 ;

int
FUNC_1(void)
{
 struct image_desc *VAR_4;
 uint32_t VAR_5 = 0;
 int VAR_6;
 int VAR_7;

 VAR_3.out_size = VAR_1->max_kernel_size;
 VAR_3.padc = VAR_0;
 VAR_7 = FUNC_0(&VAR_3);
 if (VAR_7)
  return VAR_7;

 if (!VAR_2.file_name)
  return 0;

 VAR_2.out_size = VAR_1->max_fs_size;
 VAR_2.padc = VAR_0;
 VAR_7 = FUNC_0(&VAR_2);
 if (VAR_7)
  return VAR_7;

 return 0;
}
