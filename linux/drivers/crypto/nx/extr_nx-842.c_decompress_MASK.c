
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u16 ;
struct nx842_crypto_param {unsigned int oremain; scalar_t__ iremain; int * out; int * in; } ;
struct nx842_crypto_header_group {int compressed_length; int padding; int uncompressed_length; } ;
struct nx842_crypto_ctx {int * dbounce; int wmem; TYPE_1__* driver; int * sbounce; } ;
struct nx842_constraints {unsigned int multiple; unsigned int minimum; unsigned int maximum; int alignment; } ;
typedef int ktime_t ;
struct TYPE_2__ {int (* decompress ) (int *,unsigned int,int *,unsigned int*,int ) ;} ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int *,unsigned int) ;
 int FUNC_6 (int *,int ,unsigned int) ;
 unsigned int FUNC_7 (unsigned int,unsigned int) ;
 int FUNC_8 (char*,unsigned int,...) ;
 int FUNC_9 (char*) ;
 unsigned int FUNC_10 (unsigned int,unsigned int) ;
 unsigned int FUNC_11 (unsigned int,unsigned int) ;
 int FUNC_12 (int *,unsigned int,int *,unsigned int*,int ) ;
 int FUNC_13 (int *,unsigned int,int *,unsigned int*) ;
 int FUNC_14 (struct nx842_crypto_param*,scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_15(struct nx842_crypto_ctx *VAR_6,
        struct nx842_crypto_param *VAR_7,
        struct nx842_crypto_header_group *VAR_8,
        struct nx842_constraints *VAR_9,
        u16 VAR_10)
{
 unsigned int VAR_11 = FUNC_1(VAR_8->compressed_length);
 unsigned int VAR_12 = FUNC_1(VAR_8->uncompressed_length);
 unsigned int VAR_13 = VAR_7->oremain, VAR_14;
 unsigned int VAR_15 = VAR_11;
 u8 *VAR_16 = VAR_7->in, *VAR_17 = VAR_7->out;
 u16 VAR_18 = FUNC_0(VAR_8->padding);
 int VAR_19, VAR_20 = 0;
 ktime_t VAR_21;

 if (!VAR_11 || !VAR_12)
  return -VAR_3;

 if (VAR_7->iremain <= 0 || VAR_18 + VAR_11 > VAR_7->iremain)
  return -VAR_5;

 if (VAR_7->oremain <= 0 || VAR_12 - VAR_10 > VAR_7->oremain)
  return -VAR_4;

 VAR_16 += VAR_18;

 if (VAR_11 % VAR_9->multiple)
  VAR_15 = FUNC_11(VAR_11, VAR_9->multiple);
 if (VAR_11 < VAR_9->minimum)
  VAR_15 = VAR_9->minimum;
 if (VAR_11 > VAR_9->maximum)
  goto usesw;
 if (VAR_11 < VAR_15 || (u64)VAR_16 % VAR_9->alignment) {




  if (VAR_11 < VAR_15)
   FUNC_6(VAR_6->sbounce + VAR_11, 0, VAR_15 - VAR_11);
  FUNC_5(VAR_6->sbounce, VAR_16, VAR_11);
  VAR_16 = VAR_6->sbounce;
  VAR_20 = VAR_15 - VAR_11;
  VAR_11 = VAR_15;
  FUNC_8("using decomp sbounce buffer, len %x\n", VAR_11);
 }

 if (VAR_13 % VAR_9->multiple)
  VAR_13 = FUNC_10(VAR_13, VAR_9->multiple);
 if (VAR_13 < VAR_12 || (u64)VAR_17 % VAR_9->alignment) {
  VAR_17 = VAR_6->dbounce;
  VAR_13 = FUNC_7(VAR_12, VAR_0);
  FUNC_8("using decomp dbounce buffer, len %x\n", VAR_13);
 }
 if (VAR_13 < VAR_9->minimum)
  goto usesw;
 if (VAR_13 > VAR_9->maximum)
  VAR_13 = VAR_9->maximum;

 VAR_14 = VAR_13;
 VAR_21 = FUNC_2(FUNC_4(), VAR_1);
 do {
  VAR_13 = VAR_14;
  VAR_19 = VAR_6->driver->decompress(VAR_16, VAR_11, VAR_17, &VAR_13, VAR_6->wmem);
 } while (VAR_19 == -VAR_2 && FUNC_3(FUNC_4(), VAR_21));
 if (VAR_19) {
usesw:

  VAR_16 = VAR_7->in + VAR_18;
  VAR_11 = FUNC_1(VAR_8->compressed_length);
  VAR_20 = 0;
  VAR_17 = VAR_7->out;
  VAR_13 = VAR_7->oremain;
  if (VAR_13 < VAR_12) {
   VAR_17 = VAR_6->dbounce;
   VAR_13 = VAR_0;
  }
  FUNC_9("using software 842 decompression\n");
  VAR_19 = FUNC_13(VAR_16, VAR_11, VAR_17, &VAR_13);
 }
 if (VAR_19)
  return VAR_19;

 VAR_11 -= VAR_20;

 VAR_13 -= VAR_10;
 if (VAR_10)
  FUNC_8("ignoring last %x bytes\n", VAR_10);

 if (VAR_17 == VAR_6->dbounce)
  FUNC_5(VAR_7->out, VAR_17, VAR_13);

 FUNC_8("decompress slen %x padding %x dlen %x ignore %x\n",
   VAR_11, VAR_18, VAR_13, VAR_10);

 return FUNC_14(VAR_7, VAR_11 + VAR_18, VAR_13);
}
