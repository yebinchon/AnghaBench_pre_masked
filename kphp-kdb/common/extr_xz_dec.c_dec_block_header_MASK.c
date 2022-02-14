
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ uncompressed; scalar_t__ compressed; } ;
struct TYPE_5__ {int size; int* buf; int pos; } ;
struct TYPE_4__ {void* uncompressed; void* compressed; } ;
struct xz_dec {TYPE_3__ block; TYPE_2__ temp; int lzma2; TYPE_1__ block_header; void* vli; } ;
typedef enum xz_ret { ____Placeholder_xz_ret } xz_ret ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct xz_dec*,int*,int*,int) ;
 scalar_t__ FUNC_1 (int*) ;
 scalar_t__ FUNC_2 (int*,int,int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static enum xz_ret FUNC_4(struct xz_dec *VAR_5)
{
 enum xz_ret VAR_6;





 VAR_5->temp.size -= 4;
 if (FUNC_2(VAR_5->temp.buf, VAR_5->temp.size, 0)
   != FUNC_1(VAR_5->temp.buf + VAR_5->temp.size))
  return VAR_1;

 VAR_5->temp.pos = 2;





 if (VAR_5->temp.buf[1] & 0x3F)
  return VAR_3;


 if (VAR_5->temp.buf[1] & 0x40) {
  if (FUNC_0(VAR_5, VAR_5->temp.buf, &VAR_5->temp.pos, VAR_5->temp.size)
     != VAR_4)
   return VAR_1;

  VAR_5->block_header.compressed = VAR_5->vli;
 } else {
  VAR_5->block_header.compressed = VAR_0;
 }


 if (VAR_5->temp.buf[1] & 0x80) {
  if (FUNC_0(VAR_5, VAR_5->temp.buf, &VAR_5->temp.pos, VAR_5->temp.size)
    != VAR_4)
   return VAR_1;

  VAR_5->block_header.uncompressed = VAR_5->vli;
 } else {
  VAR_5->block_header.uncompressed = VAR_0;
 }


 if (VAR_5->temp.size - VAR_5->temp.pos < 2)
  return VAR_1;


 if (VAR_5->temp.buf[VAR_5->temp.pos++] != 0x21)
  return VAR_3;


 if (VAR_5->temp.buf[VAR_5->temp.pos++] != 0x01)
  return VAR_3;


 if (VAR_5->temp.size - VAR_5->temp.pos < 1)
  return VAR_1;

 VAR_6 = FUNC_3(VAR_5->lzma2, VAR_5->temp.buf[VAR_5->temp.pos++]);
 if (VAR_6 != VAR_2)
  return VAR_6;


 while (VAR_5->temp.pos < VAR_5->temp.size)
  if (VAR_5->temp.buf[VAR_5->temp.pos++] != 0x00)
   return VAR_3;

 VAR_5->temp.pos = 0;
 VAR_5->block.compressed = 0;
 VAR_5->block.uncompressed = 0;

 return VAR_2;
}
