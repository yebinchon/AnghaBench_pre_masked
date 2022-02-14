
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct dm_verity {int data_dev_block_bits; TYPE_2__* fec; TYPE_1__* data_dev; } ;
struct dm_buffer {int dummy; } ;
struct TYPE_4__ {int roots; scalar_t__ start; int bufio; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (char*,int ,unsigned long long,unsigned long long,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,scalar_t__,struct dm_buffer**) ;

__attribute__((used)) static u8 *FUNC_4(struct dm_verity *VAR_0, u64 VAR_1, int VAR_2,
      unsigned *VAR_3, struct dm_buffer **VAR_4)
{
 u64 VAR_5, VAR_6;
 u8 *VAR_7;

 VAR_5 = (VAR_2 + VAR_1) * VAR_0->fec->roots;
 VAR_6 = VAR_5 >> VAR_0->data_dev_block_bits;
 *VAR_3 = (unsigned)(VAR_5 - (VAR_6 << VAR_0->data_dev_block_bits));

 VAR_7 = FUNC_3(VAR_0->fec->bufio, VAR_0->fec->start + VAR_6, VAR_4);
 if (FUNC_1(VAR_7)) {
  FUNC_0("%s: FEC %llu: parity read failed (block %llu): %ld",
        VAR_0->data_dev->name, (unsigned long long)VAR_1,
        (unsigned long long)(VAR_0->fec->start + VAR_6),
        FUNC_2(VAR_7));
  *VAR_4 = ((void*)0);
 }

 return VAR_7;
}
