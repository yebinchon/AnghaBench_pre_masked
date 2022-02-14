
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lz_range_decoder {int dummy; } ;


 unsigned int FUNC_0 (struct lz_range_decoder*,int*,int) ;

__attribute__((used)) static unsigned
FUNC_1(struct lz_range_decoder *VAR_0, int *VAR_1, int VAR_2)
{
 unsigned VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 unsigned VAR_4 = 0;

 for (int VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4 = (VAR_4 << 1) | (VAR_3 & 1);
  VAR_3 >>= 1;
 }

 return VAR_4;
}
