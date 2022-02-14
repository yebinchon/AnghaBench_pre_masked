
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef unsigned int u16 ;
struct nx842_crypto_param {unsigned int iremain; unsigned int oremain; int * out; int * in; } ;
struct nx842_crypto_header_group {void* uncompressed_length; void* compressed_length; int padding; } ;
struct nx842_crypto_ctx {int * dbounce; int wmem; TYPE_1__* driver; int * sbounce; } ;
struct nx842_constraints {unsigned int minimum; unsigned int multiple; unsigned int maximum; int alignment; } ;
typedef int ktime_t ;
struct TYPE_2__ {int (* compress ) (int *,unsigned int,int *,unsigned int*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int *,int) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int *,unsigned int) ;
 int FUNC_7 (int *,int ,unsigned int) ;
 unsigned int FUNC_8 (unsigned int,int ) ;
 int FUNC_9 (char*,unsigned int,...) ;
 unsigned int FUNC_10 (unsigned int,unsigned int) ;
 unsigned int FUNC_11 (unsigned int,unsigned int) ;
 int FUNC_12 (int *,unsigned int,int *,unsigned int*,int ) ;
 int FUNC_13 (struct nx842_crypto_param*,unsigned int,int) ;

__attribute__((used)) static int FUNC_14(struct nx842_crypto_ctx *VAR_5,
      struct nx842_crypto_param *VAR_6,
      struct nx842_crypto_header_group *VAR_7,
      struct nx842_constraints *VAR_8,
      u16 *VAR_9,
      unsigned int VAR_10)
{
 unsigned int VAR_11 = VAR_6->iremain, VAR_12 = VAR_6->oremain, VAR_13;
 unsigned int VAR_14 = VAR_11;
 u8 *VAR_15 = VAR_6->in, *VAR_16 = VAR_6->out;
 int VAR_17, VAR_18 = 0;
 ktime_t VAR_19;

 if (VAR_6->iremain == 0)
  return -VAR_4;

 if (VAR_6->oremain == 0 || VAR_10 + VAR_8->minimum > VAR_12)
  return -VAR_3;

 if (VAR_11 % VAR_8->multiple)
  VAR_14 = FUNC_11(VAR_11, VAR_8->multiple);
 if (VAR_11 < VAR_8->minimum)
  VAR_14 = VAR_8->minimum;
 if (VAR_11 > VAR_8->maximum)
  VAR_14 = VAR_11 = VAR_8->maximum;
 if (VAR_14 > VAR_11 || (u64)VAR_15 % VAR_8->alignment) {
  VAR_14 = FUNC_8(VAR_14, VAR_0);
  VAR_11 = FUNC_8(VAR_11, VAR_0);
  if (VAR_14 > VAR_11)
   FUNC_7(VAR_5->sbounce + VAR_11, 0, VAR_14 - VAR_11);
  FUNC_6(VAR_5->sbounce, VAR_15, VAR_11);
  VAR_15 = VAR_5->sbounce;
  VAR_11 = VAR_14;
  FUNC_9("using comp sbounce buffer, len %x\n", VAR_11);
 }

 VAR_16 += VAR_10;
 VAR_12 -= VAR_10;

 if ((u64)VAR_16 % VAR_8->alignment) {
  VAR_18 = (int)(FUNC_0(VAR_16, VAR_8->alignment) - VAR_16);
  VAR_16 += VAR_18;
  VAR_12 -= VAR_18;
 }
 if (VAR_12 % VAR_8->multiple)
  VAR_12 = FUNC_10(VAR_12, VAR_8->multiple);
 if (VAR_12 < VAR_8->minimum) {
nospc:
  VAR_16 = VAR_5->dbounce;
  VAR_12 = FUNC_8(VAR_6->oremain, VAR_0);
  VAR_12 = FUNC_10(VAR_12, VAR_8->multiple);
  VAR_18 = 0;
  FUNC_9("using comp dbounce buffer, len %x\n", VAR_12);
 }
 if (VAR_12 > VAR_8->maximum)
  VAR_12 = VAR_8->maximum;

 VAR_13 = VAR_12;
 VAR_19 = FUNC_3(FUNC_5(), VAR_1);
 do {
  VAR_12 = VAR_13;
  VAR_17 = VAR_5->driver->compress(VAR_15, VAR_11, VAR_16, &VAR_12, VAR_5->wmem);



  if (VAR_17 == -VAR_3 && VAR_16 != VAR_5->dbounce)
   goto nospc;
 } while (VAR_17 == -VAR_2 && FUNC_4(FUNC_5(), VAR_19));
 if (VAR_17)
  return VAR_17;

 VAR_18 += VAR_10;

 if (VAR_16 == VAR_5->dbounce)
  FUNC_6(VAR_6->out + VAR_18, VAR_16, VAR_12);

 VAR_7->padding = FUNC_1(VAR_18);
 VAR_7->compressed_length = FUNC_2(VAR_12);
 VAR_7->uncompressed_length = FUNC_2(VAR_11);

 if (VAR_6->iremain < VAR_11) {
  *VAR_9 = VAR_11 - VAR_6->iremain;
  VAR_11 = VAR_6->iremain;
 }

 FUNC_9("compress slen %x ignore %x dlen %x padding %x\n",
   VAR_11, *VAR_9, VAR_12, VAR_18);

 return FUNC_13(VAR_6, VAR_11, VAR_18 + VAR_12);
}
