
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct lz_decoder {scalar_t__ pos; scalar_t__ dict_size; int * obuf; } ;


 int FUNC_0 (struct lz_decoder*) ;

__attribute__((used)) static void
FUNC_1(struct lz_decoder *VAR_0, uint8_t VAR_1)
{
 VAR_0->obuf[VAR_0->pos++] = VAR_1;
 if (VAR_0->dict_size == VAR_0->pos)
  FUNC_0(VAR_0);
}
