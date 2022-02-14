
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int dummy; } ;
struct sha256_state {int count; scalar_t__ buf; int state; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*,int const*,unsigned int const) ;
 int FUNC_1 (int ,int const*,unsigned int) ;
 struct sha256_state* FUNC_2 (struct shash_desc*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct shash_desc *VAR_1, const u8 *VAR_2,
   unsigned int VAR_3)
{
 struct sha256_state *VAR_4 = FUNC_2(VAR_1);
 const unsigned int VAR_5 = VAR_4->count & 0x3f;
 const unsigned int VAR_6 = 64 - VAR_5;
 unsigned int VAR_7;
 const u8 *VAR_8 = VAR_2;

 if (VAR_6 > VAR_3) {
  VAR_4->count += VAR_3;
  FUNC_0((char *)VAR_4->buf + VAR_5, VAR_8, VAR_3);
  return 0;
 }

 VAR_4->count += VAR_3;

 if (VAR_5) {
  FUNC_0((char *)VAR_4->buf + VAR_5, VAR_8, VAR_6);

  FUNC_3();
  FUNC_1(VAR_4->state, (const u8 *)VAR_4->buf, 1);
  FUNC_4();

  VAR_3 -= VAR_6;
  VAR_8 += VAR_6;
 }

 while (VAR_3 > 63) {

  VAR_7 = (VAR_3 > VAR_0) ? VAR_0 : VAR_3;
  VAR_7 = VAR_7 & ~0x3f;

  FUNC_3();
  FUNC_1(VAR_4->state, VAR_8, VAR_7 >> 6);
  FUNC_4();

  VAR_8 += VAR_7;
  VAR_3 -= VAR_7;
 };

 FUNC_0((char *)VAR_4->buf, VAR_8, VAR_3);
 return 0;
}
