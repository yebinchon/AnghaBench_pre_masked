
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct p_compressed_bm {int code; } ;
struct drbd_device {int dummy; } ;
struct bm_xfer_ctx {unsigned long bit_offset; unsigned long bm_bits; int word_offset; } ;
struct TYPE_6__ {int b; int bit; } ;
struct bitstream {TYPE_2__ cur; } ;
struct TYPE_8__ {TYPE_1__* connection; } ;
struct TYPE_7__ {int use_rle; } ;
struct TYPE_5__ {int agreed_pro_version; int net_conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (struct drbd_device*,unsigned long) ;
 unsigned long FUNC_1 (struct drbd_device*,unsigned long) ;
 int FUNC_2 (struct bitstream*,int,unsigned int,int ) ;
 int FUNC_3 (struct bm_xfer_ctx*) ;
 int FUNC_4 (struct p_compressed_bm*,int) ;
 int FUNC_5 (struct p_compressed_bm*,int) ;
 int FUNC_6 (struct drbd_device*,char*,int,...) ;
 TYPE_4__* FUNC_7 (struct drbd_device*) ;
 int FUNC_8 (int,int ,unsigned int) ;
 TYPE_3__* FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (struct bitstream*,unsigned long) ;

__attribute__((used)) static int FUNC_13(struct drbd_device *VAR_2,
    struct p_compressed_bm *VAR_3,
    unsigned int VAR_4,
    struct bm_xfer_ctx *VAR_5)
{
 struct bitstream VAR_6;
 unsigned long VAR_7;
 unsigned long VAR_8;
 unsigned long VAR_9;
 unsigned VAR_10;
 unsigned VAR_11;
 int VAR_12, VAR_13;


 FUNC_10();
 VAR_13 = FUNC_9(FUNC_7(VAR_2)->connection->net_conf)->use_rle;
 FUNC_11();
 if (!VAR_13 || FUNC_7(VAR_2)->connection->agreed_pro_version < 90)
  return 0;

 if (VAR_5->bit_offset >= VAR_5->bm_bits)
  return 0;


 FUNC_2(&VAR_6, VAR_3->code, VAR_4, 0);
 FUNC_8(VAR_3->code, 0, VAR_4);

 VAR_7 = 0;




 VAR_11 = 2;



 do {
  VAR_8 = (VAR_11 == 0) ? FUNC_1(VAR_2, VAR_5->bit_offset)
        : FUNC_0(VAR_2, VAR_5->bit_offset);
  if (VAR_8 == -1UL)
   VAR_8 = VAR_5->bm_bits;
  VAR_9 = VAR_8 - VAR_5->bit_offset;

  if (VAR_11 == 2) {
   if (VAR_9 == 0) {


    FUNC_5(VAR_3, 1);

    VAR_11 = !VAR_11;
    continue;
   }
   FUNC_5(VAR_3, 0);
  }



  if (VAR_9 == 0) {
   FUNC_6(VAR_2, "unexpected zero runlength while encoding bitmap "
       "t:%u bo:%lu\n", VAR_11, VAR_5->bit_offset);
   return -1;
  }

  VAR_12 = FUNC_12(&VAR_6, VAR_9);
  if (VAR_12 == -VAR_1)
   break;
  if (VAR_12 <= 0) {
   FUNC_6(VAR_2, "error while encoding bitmap: %d\n", VAR_12);
   return 0;
  }

  VAR_11 = !VAR_11;
  VAR_7 += VAR_9;
  VAR_5->bit_offset = VAR_8;
 } while (VAR_5->bit_offset < VAR_5->bm_bits);

 VAR_10 = VAR_6.cur.b - VAR_3->code + !!VAR_6.cur.bit;

 if (VAR_7 < (VAR_10 << 3)) {


  VAR_5->bit_offset -= VAR_7;
  FUNC_3(VAR_5);
  VAR_5->bit_offset = VAR_5->word_offset * VAR_0;
  return 0;
 }



 FUNC_3(VAR_5);


 FUNC_4(VAR_3, (8 - VAR_6.cur.bit) & 0x7);

 return VAR_10;
}
