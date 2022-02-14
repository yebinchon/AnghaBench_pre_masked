
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int temp ;
struct shash_desc {int dummy; } ;
struct sha1_state {int count; int * buffer; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*,unsigned int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int const*,int *) ;
 struct sha1_state* FUNC_3 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_4(struct shash_desc *VAR_1, const u8 *VAR_2,
   unsigned int VAR_3)
{
 struct sha1_state *VAR_4 = FUNC_3(VAR_1);
 unsigned int VAR_5, VAR_6;
 const u8 *VAR_7;

 VAR_5 = VAR_4->count & 0x3f;
 VAR_4->count += VAR_3;
 VAR_6 = 0;
 VAR_7 = VAR_2;

 if ((VAR_5 + VAR_3) > 63) {
  u32 VAR_8[VAR_0];

  if (VAR_5) {
   VAR_6 = -VAR_5;
   FUNC_0(VAR_4->buffer + VAR_5, VAR_2, VAR_6 + 64);
   VAR_7 = VAR_4->buffer;
  }

  do {
   FUNC_2(VAR_4->state, VAR_7, VAR_8);
   VAR_6 += 64;
   VAR_7 = VAR_2 + VAR_6;
  } while (VAR_6 + 63 < VAR_3);

  FUNC_1(VAR_8, sizeof(VAR_8));
  VAR_5 = 0;
 }
 FUNC_0(VAR_4->buffer + VAR_5, VAR_7, VAR_3 - VAR_6);

 return 0;
}
