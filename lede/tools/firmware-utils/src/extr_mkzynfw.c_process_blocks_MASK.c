
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct fw_block {int dummy; } ;
struct TYPE_4__ {scalar_t__ romio_offs; } ;
struct TYPE_3__ {scalar_t__ file_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct fw_block*) ;
 struct fw_block* VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ,scalar_t__*) ;
 int VAR_4 ;

int
FUNC_2(void)
{
 struct fw_block *VAR_5;
 uint32_t VAR_6;
 int VAR_7;
 int VAR_8;


 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_5 = &VAR_1[VAR_7];
  VAR_8 = FUNC_0(VAR_5);
  if (VAR_8)
   return VAR_8;
 }

 VAR_6 = VAR_2->romio_offs + VAR_3->file_size;
 VAR_8 = FUNC_1(VAR_0, &VAR_6);

 return VAR_8;
}
