
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int dummy; } ;
struct sha3_state {unsigned int partial; int rsiz; unsigned int rsizw; int * buf; int * st; } ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int const*,unsigned int) ;
 struct sha3_state* FUNC_3 (struct shash_desc*) ;

int FUNC_4(struct shash_desc *VAR_0, const u8 *VAR_1,
         unsigned int VAR_2)
{
 struct sha3_state *VAR_3 = FUNC_3(VAR_0);
 unsigned int VAR_4;
 const u8 *VAR_5;

 VAR_4 = 0;
 VAR_5 = VAR_1;

 if ((VAR_3->partial + VAR_2) > (VAR_3->rsiz - 1)) {
  if (VAR_3->partial) {
   VAR_4 = -VAR_3->partial;
   FUNC_2(VAR_3->buf + VAR_3->partial, VAR_1,
          VAR_4 + VAR_3->rsiz);
   VAR_5 = VAR_3->buf;
  }

  do {
   unsigned int VAR_6;

   for (VAR_6 = 0; VAR_6 < VAR_3->rsizw; VAR_6++)
    VAR_3->st[VAR_6] ^= FUNC_0(VAR_5 + 8 * VAR_6);
   FUNC_1(VAR_3->st);

   VAR_4 += VAR_3->rsiz;
   VAR_5 = VAR_1 + VAR_4;
  } while (VAR_4 + (VAR_3->rsiz - 1) < VAR_2);

  VAR_3->partial = 0;
 }
 FUNC_2(VAR_3->buf + VAR_3->partial, VAR_5, VAR_2 - VAR_4);
 VAR_3->partial += (VAR_2 - VAR_4);

 return 0;
}
