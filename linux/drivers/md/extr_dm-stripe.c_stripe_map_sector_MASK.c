
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct stripe_c {int chunk_size_shift; int chunk_size; int stripes_shift; int stripes; int ti; } ;
typedef int sector_t ;


 int FUNC_0 (int ,int) ;
 void* FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct stripe_c *VAR_0, sector_t VAR_1,
         uint32_t *VAR_2, sector_t *VAR_3)
{
 sector_t VAR_4 = FUNC_0(VAR_0->ti, VAR_1);
 sector_t VAR_5;

 if (VAR_0->chunk_size_shift < 0)
  VAR_5 = FUNC_1(VAR_4, VAR_0->chunk_size);
 else {
  VAR_5 = VAR_4 & (VAR_0->chunk_size - 1);
  VAR_4 >>= VAR_0->chunk_size_shift;
 }

 if (VAR_0->stripes_shift < 0)
  *VAR_2 = FUNC_1(VAR_4, VAR_0->stripes);
 else {
  *VAR_2 = VAR_4 & (VAR_0->stripes - 1);
  VAR_4 >>= VAR_0->stripes_shift;
 }

 if (VAR_0->chunk_size_shift < 0)
  VAR_4 *= VAR_0->chunk_size;
 else
  VAR_4 <<= VAR_0->chunk_size_shift;

 *VAR_3 = VAR_4 + VAR_5;
}
