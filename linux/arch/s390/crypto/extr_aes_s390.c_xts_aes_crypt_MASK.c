
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct s390_xts_ctx {int key_len; unsigned long fc; int * key; int * pcc_key; } ;
struct TYPE_7__ {int addr; } ;
struct TYPE_8__ {TYPE_3__ virt; } ;
struct TYPE_5__ {int addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct blkcipher_walk {unsigned int nbytes; TYPE_4__ src; TYPE_2__ dst; int * iv; } ;
struct blkcipher_desc {int tfm; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct blkcipher_desc*,struct blkcipher_walk*,unsigned int) ;
 int FUNC_1 (struct blkcipher_desc*,struct blkcipher_walk*) ;
 int FUNC_2 (unsigned long,int *,int ,int ,unsigned int) ;
 int FUNC_3 (unsigned long,int *) ;
 struct s390_xts_ctx* FUNC_4 (int ) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int ,int) ;

__attribute__((used)) static int FUNC_7(struct blkcipher_desc *VAR_1, unsigned long VAR_2,
    struct blkcipher_walk *VAR_3)
{
 struct s390_xts_ctx *VAR_4 = FUNC_4(VAR_1->tfm);
 unsigned int VAR_5, VAR_6, VAR_7;
 int VAR_8;
 struct {
  u8 key[32];
  u8 tweak[16];
  u8 block[16];
  u8 bit[16];
  u8 xts[16];
 } VAR_9;
 struct {
  u8 key[32];
  u8 init[16];
 } VAR_10;

 VAR_8 = FUNC_1(VAR_1, VAR_3);
 VAR_5 = VAR_4->key_len & 0x10;
 FUNC_6(VAR_9.block, 0, sizeof(VAR_9.block));
 FUNC_6(VAR_9.bit, 0, sizeof(VAR_9.bit));
 FUNC_6(VAR_9.xts, 0, sizeof(VAR_9.xts));
 FUNC_5(VAR_9.tweak, VAR_3->iv, sizeof(VAR_9.tweak));
 FUNC_5(VAR_9.key + VAR_5, VAR_4->pcc_key, VAR_4->key_len);
 FUNC_3(VAR_4->fc, VAR_9.key + VAR_5);

 FUNC_5(VAR_10.key + VAR_5, VAR_4->key, VAR_4->key_len);
 FUNC_5(VAR_10.init, VAR_9.xts, 16);

 while ((VAR_6 = VAR_3->nbytes) >= VAR_0) {

  VAR_7 = VAR_6 & ~(VAR_0 - 1);
  FUNC_2(VAR_4->fc | VAR_2, VAR_10.key + VAR_5,
    VAR_3->dst.virt.addr, VAR_3->src.virt.addr, VAR_7);
  VAR_8 = FUNC_0(VAR_1, VAR_3, VAR_6 - VAR_7);
 }
 return VAR_8;
}
