
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct dm_verity_io {int dummy; } ;
struct dm_verity_fec_io {unsigned int nbufs; int output; } ;
struct dm_verity {int data_dev_block_bits; TYPE_1__* data_dev; int digest_size; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (char*,int ,unsigned long long,int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct dm_verity*,struct dm_verity_fec_io*) ;
 int FUNC_2 (struct dm_verity*,struct dm_verity_fec_io*,scalar_t__,int,unsigned int,int) ;
 int FUNC_3 (struct dm_verity*,struct dm_verity_fec_io*) ;
 int FUNC_4 (struct dm_verity*,struct dm_verity_io*,scalar_t__,scalar_t__,unsigned int,int*) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct dm_verity*,int ,int ,int,int ) ;
 int FUNC_8 (struct dm_verity*,struct dm_verity_io*) ;
 int FUNC_9 (struct dm_verity*,struct dm_verity_io*) ;
 int FUNC_10 (struct dm_verity*,struct dm_verity_io*) ;

__attribute__((used)) static int FUNC_11(struct dm_verity *VAR_2, struct dm_verity_io *VAR_3,
     struct dm_verity_fec_io *VAR_4, u64 VAR_5, u64 VAR_6,
     bool VAR_7)
{
 int VAR_8, VAR_9 = 0;
 unsigned VAR_10;

 VAR_8 = FUNC_1(VAR_2, VAR_4);
 if (FUNC_6(VAR_8 < 0))
  return VAR_8;

 for (VAR_10 = 0; VAR_10 < 1 << VAR_2->data_dev_block_bits; ) {
  FUNC_3(VAR_2, VAR_4);

  VAR_8 = FUNC_4(VAR_2, VAR_3, VAR_5, VAR_6, VAR_10,
      VAR_7 ? &VAR_9 : ((void*)0));
  if (FUNC_6(VAR_8 < 0))
   return VAR_8;

  VAR_8 = FUNC_2(VAR_2, VAR_4, VAR_5, VAR_8, VAR_10, VAR_9);
  if (VAR_8 < 0)
   return VAR_8;

  VAR_10 += VAR_4->nbufs << VAR_0;
 }


 VAR_8 = FUNC_7(VAR_2, FUNC_8(VAR_2, VAR_3), VAR_4->output,
   1 << VAR_2->data_dev_block_bits,
   FUNC_9(VAR_2, VAR_3));
 if (FUNC_6(VAR_8 < 0))
  return VAR_8;

 if (FUNC_5(FUNC_9(VAR_2, VAR_3), FUNC_10(VAR_2, VAR_3),
     VAR_2->digest_size)) {
  FUNC_0("%s: FEC %llu: failed to correct (%d erasures)",
       VAR_2->data_dev->name, (unsigned long long)VAR_5, VAR_9);
  return -VAR_1;
 }

 return 0;
}
