
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct lz_range_decoder {int code; int * fp; int range; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct lz_range_decoder *VAR_0, FILE *VAR_1)
{
 VAR_0->fp = VAR_1;
 VAR_0->code = 0;
 VAR_0->range = ~0;
 for (int VAR_2 = 0; VAR_2 < 5; VAR_2++)
  VAR_0->code = (VAR_0->code << 8) | (uint8_t)FUNC_1(VAR_0->fp);
 return FUNC_0(VAR_0->fp) ? -1 : 0;
}
