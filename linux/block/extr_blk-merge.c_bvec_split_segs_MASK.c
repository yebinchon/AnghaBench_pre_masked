
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct bio_vec {unsigned int bv_len; unsigned int bv_offset; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct request_queue const*,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 unsigned int FUNC_2 (struct request_queue const*) ;

__attribute__((used)) static bool FUNC_3(const struct request_queue *VAR_1,
       const struct bio_vec *VAR_2, unsigned *VAR_3,
       unsigned *VAR_4, unsigned VAR_5,
       unsigned VAR_6)
{
 unsigned VAR_7 = (FUNC_1(VAR_6, VAR_0 >> 9) - *VAR_4) << 9;
 unsigned VAR_8 = FUNC_1(VAR_2->bv_len, VAR_7);
 unsigned VAR_9 = 0;
 unsigned VAR_10 = 0;

 while (VAR_8 && *VAR_3 < VAR_5) {
  VAR_10 = FUNC_0(VAR_1, VAR_2->bv_offset + VAR_9);
  VAR_10 = FUNC_1(VAR_10, VAR_8);

  (*VAR_3)++;
  VAR_9 += VAR_10;
  VAR_8 -= VAR_10;

  if ((VAR_2->bv_offset + VAR_9) & FUNC_2(VAR_1))
   break;
 }

 *VAR_4 += VAR_9 >> 9;


 return VAR_8 > 0 || VAR_2->bv_len > VAR_7;
}
