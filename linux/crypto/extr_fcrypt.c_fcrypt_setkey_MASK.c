
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct fcrypt_ctx {void** sched; } ;
struct crypto_tfm {int dummy; } ;


 void* FUNC_0 (int) ;
 struct fcrypt_ctx* FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct crypto_tfm *VAR_0, const u8 *VAR_1, unsigned int VAR_2)
{
 struct fcrypt_ctx *VAR_3 = FUNC_1(VAR_0);
 u32 VAR_4, VAR_5;


 VAR_5 = (*VAR_1++) >> 1;
 VAR_5 <<= 7;
 VAR_5 |= (*VAR_1++) >> 1;
 VAR_5 <<= 7;
 VAR_5 |= (*VAR_1++) >> 1;
 VAR_5 <<= 7;
 VAR_5 |= (*VAR_1++) >> 1;
 VAR_4 = VAR_5 >> 4;
 VAR_5 &= 0xf;
 VAR_5 <<= 7;
 VAR_5 |= (*VAR_1++) >> 1;
 VAR_5 <<= 7;
 VAR_5 |= (*VAR_1++) >> 1;
 VAR_5 <<= 7;
 VAR_5 |= (*VAR_1++) >> 1;
 VAR_5 <<= 7;
 VAR_5 |= (*VAR_1) >> 1;


 VAR_3->sched[0x0] = FUNC_0(VAR_5); FUNC_2(VAR_4, VAR_5, 11);
 VAR_3->sched[0x1] = FUNC_0(VAR_5); FUNC_2(VAR_4, VAR_5, 11);
 VAR_3->sched[0x2] = FUNC_0(VAR_5); FUNC_2(VAR_4, VAR_5, 11);
 VAR_3->sched[0x3] = FUNC_0(VAR_5); FUNC_2(VAR_4, VAR_5, 11);
 VAR_3->sched[0x4] = FUNC_0(VAR_5); FUNC_2(VAR_4, VAR_5, 11);
 VAR_3->sched[0x5] = FUNC_0(VAR_5); FUNC_2(VAR_4, VAR_5, 11);
 VAR_3->sched[0x6] = FUNC_0(VAR_5); FUNC_2(VAR_4, VAR_5, 11);
 VAR_3->sched[0x7] = FUNC_0(VAR_5); FUNC_2(VAR_4, VAR_5, 11);
 VAR_3->sched[0x8] = FUNC_0(VAR_5); FUNC_2(VAR_4, VAR_5, 11);
 VAR_3->sched[0x9] = FUNC_0(VAR_5); FUNC_2(VAR_4, VAR_5, 11);
 VAR_3->sched[0xa] = FUNC_0(VAR_5); FUNC_2(VAR_4, VAR_5, 11);
 VAR_3->sched[0xb] = FUNC_0(VAR_5); FUNC_2(VAR_4, VAR_5, 11);
 VAR_3->sched[0xc] = FUNC_0(VAR_5); FUNC_2(VAR_4, VAR_5, 11);
 VAR_3->sched[0xd] = FUNC_0(VAR_5); FUNC_2(VAR_4, VAR_5, 11);
 VAR_3->sched[0xe] = FUNC_0(VAR_5); FUNC_2(VAR_4, VAR_5, 11);
 VAR_3->sched[0xf] = FUNC_0(VAR_5);
 return 0;

}
