
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct shash_desc {int dummy; } ;
struct sha256_state {int count; int * state; scalar_t__ buf; } ;
typedef int __be64 ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (struct sha256_state*) ;
 int FUNC_4 (int *,scalar_t__,int) ;
 struct sha256_state* FUNC_5 (struct shash_desc*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct shash_desc *VAR_0, u8 *VAR_1)
{
 struct sha256_state *VAR_2 = FUNC_5(VAR_0);
 const unsigned int VAR_3 = VAR_2->count & 0x3f;
 char *VAR_4 = (char *)VAR_2->buf + VAR_3;
 int VAR_5;
 __be64 *VAR_6 = (__be64 *)(((char *)&VAR_2->buf) + 56);
 __be32 *VAR_7 = (__be32 *)VAR_1;

 VAR_5 = 55 - VAR_3;
 *VAR_4++ = 0x80;

 FUNC_6();

 if (VAR_5 < 0) {
  FUNC_2(VAR_4, 0x00, VAR_5 + sizeof (u64));
  FUNC_4(VAR_2->state, VAR_2->buf, 1);
  VAR_4 = (char *)VAR_2->buf;
  VAR_5 = 56;
 }

 FUNC_2(VAR_4, 0, VAR_5);
 *VAR_6 = FUNC_1(VAR_2->count << 3);
 FUNC_4(VAR_2->state, VAR_2->buf, 1);

 FUNC_7();

 VAR_7[0] = FUNC_0(VAR_2->state[0]);
 VAR_7[1] = FUNC_0(VAR_2->state[1]);
 VAR_7[2] = FUNC_0(VAR_2->state[2]);
 VAR_7[3] = FUNC_0(VAR_2->state[3]);
 VAR_7[4] = FUNC_0(VAR_2->state[4]);
 VAR_7[5] = FUNC_0(VAR_2->state[5]);
 VAR_7[6] = FUNC_0(VAR_2->state[6]);
 VAR_7[7] = FUNC_0(VAR_2->state[7]);

 FUNC_3(VAR_2);
 return 0;
}
