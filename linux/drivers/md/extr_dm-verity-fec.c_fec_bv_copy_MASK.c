
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dm_verity_io {int dummy; } ;
struct dm_verity_fec_io {size_t output_pos; int * output; } ;
struct dm_verity {int dummy; } ;


 struct dm_verity_fec_io* FUNC_0 (struct dm_verity_io*) ;
 int FUNC_1 (int *,int *,size_t) ;

__attribute__((used)) static int FUNC_2(struct dm_verity *VAR_0, struct dm_verity_io *VAR_1, u8 *VAR_2,
         size_t VAR_3)
{
 struct dm_verity_fec_io *VAR_4 = FUNC_0(VAR_1);

 FUNC_1(VAR_2, &VAR_4->output[VAR_4->output_pos], VAR_3);
 VAR_4->output_pos += VAR_3;

 return 0;
}
