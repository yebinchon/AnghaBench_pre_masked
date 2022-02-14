
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hashfile {unsigned int offset; void* buffer; int ctx; int crc32; scalar_t__ do_crc; } ;
struct TYPE_2__ {int (* update_fn ) (int *,void const*,unsigned int) ;} ;


 int FUNC_0 (int ,void const*,unsigned int) ;
 int FUNC_1 (struct hashfile*,void const*,unsigned int) ;
 int FUNC_2 (void*,void const*,unsigned int) ;
 int FUNC_3 (int *,void const*,unsigned int) ;
 TYPE_1__* VAR_0 ;

void FUNC_4(struct hashfile *VAR_1, const void *VAR_2, unsigned int VAR_3)
{
 while (VAR_3) {
  unsigned VAR_4 = VAR_1->offset;
  unsigned VAR_5 = sizeof(VAR_1->buffer) - VAR_4;
  unsigned VAR_6 = VAR_3 > VAR_5 ? VAR_5 : VAR_3;
  const void *VAR_7;

  if (VAR_1->do_crc)
   VAR_1->crc32 = FUNC_0(VAR_1->crc32, VAR_2, VAR_6);

  if (VAR_6 == sizeof(VAR_1->buffer)) {

   VAR_7 = VAR_2;
  } else {
   FUNC_2(VAR_1->buffer + VAR_4, VAR_2, VAR_6);
   VAR_7 = VAR_1->buffer;
  }

  VAR_3 -= VAR_6;
  VAR_4 += VAR_6;
  VAR_2 = (char *) VAR_2 + VAR_6;
  VAR_5 -= VAR_6;
  if (!VAR_5) {
   VAR_0->update_fn(&VAR_1->ctx, VAR_7, VAR_4);
   FUNC_1(VAR_1, VAR_7, VAR_4);
   VAR_4 = 0;
  }
  VAR_1->offset = VAR_4;
 }
}
