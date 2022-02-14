
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct mylo_partition_table {int dummy; } ;
struct mylo_partition_header {int dummy; } ;
struct mylo_fw_blockdesc {void* blen; void* dlen; void* addr; void* type; } ;
struct fw_block {int size; int flags; int addr; int blocklen; } ;
typedef int desc ;
struct TYPE_2__ {int part_offset; int part_size; } ;
typedef int FILE ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 struct fw_block* VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (struct mylo_fw_blockdesc*,int ,int) ;
 scalar_t__ FUNC_3 (int *,struct mylo_fw_blockdesc*,int*) ;
 scalar_t__ FUNC_4 (int *,struct fw_block*,int*) ;
 scalar_t__ FUNC_5 (int *,int*) ;

int
FUNC_6(FILE *VAR_8, uint32_t *VAR_9)
{
 struct mylo_fw_blockdesc VAR_10;
 struct fw_block *VAR_11;
 uint32_t VAR_12;
 int VAR_13;





 if (VAR_7 > 0) {
  VAR_10.type = FUNC_1(VAR_1);
  VAR_10.addr = FUNC_1(VAR_4->part_offset);
  VAR_10.dlen = FUNC_1(sizeof(struct mylo_partition_table) +
     (VAR_2 * VAR_3));
  VAR_10.blen = FUNC_1(VAR_4->part_size);

  if (FUNC_3(VAR_8, &VAR_10, VAR_9) != 0)
          return -1;
 }




 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
  VAR_11 = &VAR_5[VAR_13];


  VAR_12 = VAR_11->size;
  if ((VAR_11->flags & VAR_0) != 0) {
   VAR_12 += sizeof(struct mylo_partition_header);
  }


  VAR_12 = FUNC_0(VAR_12, 4);


  VAR_10.type = FUNC_1(VAR_1);
  VAR_10.addr = FUNC_1(VAR_11->addr);
  VAR_10.dlen = FUNC_1(VAR_12);
  VAR_10.blen = FUNC_1(VAR_11->blocklen);

  if (FUNC_3(VAR_8, &VAR_10, VAR_9) != 0)
   return -1;
 }




 FUNC_2(&VAR_10, 0, sizeof(VAR_10));
 if (FUNC_3(VAR_8, &VAR_10, VAR_9) != 0)
  return -1;

 if (FUNC_5(VAR_8, VAR_9) != 0)
  return -1;




 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
  VAR_11 = &VAR_5[VAR_13];
  if (FUNC_4(VAR_8, VAR_11, VAR_9) != 0)
          return -1;
 }

 return 0;
}
