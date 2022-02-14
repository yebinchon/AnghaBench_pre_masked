
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {scalar_t__ unpadded; scalar_t__ uncompressed; int crc32; } ;
struct TYPE_6__ {scalar_t__ count; int sequence; TYPE_2__ hash; } ;
struct TYPE_4__ {scalar_t__ count; } ;
struct xz_dec {scalar_t__ vli; TYPE_3__ index; TYPE_1__ block; } ;
struct xz_buf {int in_size; int in_pos; int in; } ;
typedef enum xz_ret { ____Placeholder_xz_ret } xz_ret ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xz_dec*,int ,int *,int ) ;
 int FUNC_1 (struct xz_dec*,struct xz_buf*) ;
 int FUNC_2 (int const*,int,int ) ;

__attribute__((used)) static enum xz_ret FUNC_3(struct xz_dec *VAR_2, struct xz_buf *VAR_3)
{
 enum xz_ret VAR_4;

 do {
  VAR_4 = FUNC_0(VAR_2, VAR_3->in, &VAR_3->in_pos, VAR_3->in_size);
  if (VAR_4 != VAR_1) {
   FUNC_1(VAR_2, VAR_3);
   return VAR_4;
  }

  switch (VAR_2->index.sequence) {
  case 130:
   VAR_2->index.count = VAR_2->vli;






   if (VAR_2->index.count != VAR_2->block.count)
    return VAR_0;

   VAR_2->index.sequence = 128;
   break;

  case 128:
   VAR_2->index.hash.unpadded += VAR_2->vli;
   VAR_2->index.sequence = 129;
   break;

  case 129:
   VAR_2->index.hash.uncompressed += VAR_2->vli;
   VAR_2->index.hash.crc32 = FUNC_2(
     (const uint8_t *)&VAR_2->index.hash,
     sizeof(VAR_2->index.hash),
     VAR_2->index.hash.crc32);
   --VAR_2->index.count;
   VAR_2->index.sequence = 128;
   break;
  }
 } while (VAR_2->index.count > 0);

 return VAR_1;
}
