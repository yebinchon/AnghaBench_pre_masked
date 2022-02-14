
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; scalar_t__ pos; } ;
struct xz_dec {TYPE_1__ temp; int index; int block; scalar_t__ crc32; scalar_t__ pos; scalar_t__ allow_buf_error; int sequence; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;

void FUNC_1(struct xz_dec *VAR_2)
{
 VAR_2->sequence = VAR_0;
 VAR_2->allow_buf_error = 0;
 VAR_2->pos = 0;
 VAR_2->crc32 = 0;
 FUNC_0(&VAR_2->block, sizeof(VAR_2->block));
 FUNC_0(&VAR_2->index, sizeof(VAR_2->index));
 VAR_2->temp.pos = 0;
 VAR_2->temp.size = VAR_1;
}
