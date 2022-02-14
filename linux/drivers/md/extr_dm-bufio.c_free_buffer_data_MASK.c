
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bufio_client {scalar_t__ sectors_per_block_bits; int slab_cache; } ;


 int FUNC_0 () ;



 int FUNC_1 (char*,unsigned char) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (unsigned long,scalar_t__) ;
 int FUNC_3 (int ,void*) ;
 int FUNC_4 (void*) ;

__attribute__((used)) static void FUNC_5(struct dm_bufio_client *VAR_2,
        void *VAR_3, unsigned char VAR_4)
{
 switch (VAR_4) {
 case 129:
  FUNC_3(VAR_2->slab_cache, VAR_3);
  break;

 case 130:
  FUNC_2((unsigned long)VAR_3,
      VAR_2->sectors_per_block_bits - (VAR_0 - VAR_1));
  break;

 case 128:
  FUNC_4(VAR_3);
  break;

 default:
  FUNC_1("dm_bufio_free_buffer_data: bad data mode: %d",
         VAR_4);
  FUNC_0();
 }
}
