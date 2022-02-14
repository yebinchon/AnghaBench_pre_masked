
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_buffer {void (* end_io ) (struct dm_buffer*,VAR_0) ;unsigned int block; unsigned int write_start; unsigned int write_end; scalar_t__ data_mode; TYPE_1__* c; } ;
typedef unsigned int sector_t ;
struct TYPE_2__ {unsigned int sectors_per_block_bits; unsigned int block_size; int (* write_callback ) (struct dm_buffer*) ;scalar_t__ start; } ;


 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct dm_buffer*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct dm_buffer*,int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_4 (struct dm_buffer*,int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct dm_buffer *VAR_5, int VAR_6, void (*VAR_7)(struct dm_buffer *, VAR_8))
{
 unsigned VAR_9;
 sector_t VAR_10;
 unsigned VAR_11, VAR_12;

 VAR_5->end_io = VAR_7;

 if (FUNC_0(VAR_5->c->sectors_per_block_bits >= 0))
  VAR_10 = VAR_5->block << VAR_5->c->sectors_per_block_bits;
 else
  VAR_10 = VAR_5->block * (VAR_5->c->block_size >> VAR_4);
 VAR_10 += VAR_5->c->start;

 if (VAR_6 != VAR_3) {
  VAR_9 = VAR_5->c->block_size >> VAR_4;
  VAR_11 = 0;
 } else {
  if (VAR_5->c->write_callback)
   VAR_5->c->write_callback(VAR_5);
  VAR_11 = VAR_5->write_start;
  VAR_12 = VAR_5->write_end;
  VAR_11 &= -VAR_2;
  VAR_12 += VAR_2 - 1;
  VAR_12 &= -VAR_2;
  if (FUNC_2(VAR_12 > VAR_5->c->block_size))
   VAR_12 = VAR_5->c->block_size;

  VAR_10 += VAR_11 >> VAR_4;
  VAR_9 = (VAR_12 - VAR_11) >> VAR_4;
 }

 if (VAR_5->data_mode != VAR_1)
  FUNC_3(VAR_5, VAR_6, VAR_10, VAR_9, VAR_11);
 else
  FUNC_4(VAR_5, VAR_6, VAR_10, VAR_9, VAR_11);
}
