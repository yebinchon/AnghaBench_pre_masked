
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bufio_client {scalar_t__ block_size; scalar_t__ sectors_per_block_bits; int * slab_cache; } ;
typedef int gfp_t ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int,scalar_t__) ;
 void* FUNC_1 (scalar_t__,int,int ) ;
 void* FUNC_2 (int *,int) ;
 int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void *FUNC_6(struct dm_bufio_client *VAR_8, gfp_t VAR_9,
          unsigned char *VAR_10)
{
 if (FUNC_5(VAR_8->slab_cache != ((void*)0))) {
  *VAR_10 = VAR_1;
  return FUNC_2(VAR_8->slab_cache, VAR_9);
 }

 if (VAR_8->block_size <= VAR_3 &&
     VAR_9 & VAR_7) {
  *VAR_10 = VAR_0;
  return (void *)FUNC_0(VAR_9,
      VAR_8->sectors_per_block_bits - (VAR_5 - VAR_6));
 }

 *VAR_10 = VAR_2;
 if (VAR_9 & VAR_7) {
  unsigned VAR_11 = FUNC_4();
  void *VAR_12 = FUNC_1(VAR_8->block_size, VAR_9, VAR_4);

  FUNC_3(VAR_11);
  return VAR_12;
 }

 return FUNC_1(VAR_8->block_size, VAR_9, VAR_4);
}
