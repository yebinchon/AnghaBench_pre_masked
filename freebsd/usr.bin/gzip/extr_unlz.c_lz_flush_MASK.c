
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lz_decoder {scalar_t__ pos; scalar_t__ spos; scalar_t__ obuf; int wrapped; scalar_t__ dict_size; int ppos; int fout; int crc; } ;
typedef scalar_t__ off_t ;


 size_t FUNC_0 (scalar_t__,int,size_t,int ) ;
 int FUNC_1 (int *,scalar_t__,size_t) ;

__attribute__((used)) static int
FUNC_2(struct lz_decoder *VAR_0)
{
 off_t VAR_1 = VAR_0->pos - VAR_0->spos;
 if (VAR_1 <= 0)
  return -1;

 size_t VAR_2 = (size_t)VAR_1;
 FUNC_1(&VAR_0->crc, VAR_0->obuf + VAR_0->spos, VAR_2);
 if (FUNC_0(VAR_0->obuf + VAR_0->spos, 1, VAR_2, VAR_0->fout) != VAR_2)
  return -1;

 VAR_0->wrapped = VAR_0->pos >= VAR_0->dict_size;
 if (VAR_0->wrapped) {
  VAR_0->ppos += VAR_0->pos;
  VAR_0->pos = 0;
 }
 VAR_0->spos = VAR_0->pos;
 return 0;
}
