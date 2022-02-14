
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buff_file {scalar_t__ wptr; scalar_t__ wend; int after_crc32; int crc32; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (void const*,int,int ) ;
 int FUNC_2 (scalar_t__,void const*,int) ;
 int FUNC_3 (struct buff_file*) ;

void FUNC_4 (struct buff_file *VAR_0, const void *VAR_1, int VAR_2) {
  VAR_2 = (VAR_2 + 3) & -4;
  FUNC_0 (!(VAR_2 & (-0x100000)));
  if (VAR_0->wptr + VAR_2 > VAR_0->wend) {
    FUNC_3 (VAR_0);
    FUNC_0 (VAR_0->wptr + VAR_2 <= VAR_0->wend);
  }
  FUNC_2 (VAR_0->wptr, VAR_1, VAR_2);
  VAR_0->wptr += VAR_2;
  VAR_0->after_crc32 += VAR_2;
  VAR_0->crc32 = FUNC_1 (VAR_1, VAR_2, VAR_0->crc32);
}
