
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scatterlist {int dummy; } ;
struct scatter_walk {int dummy; } ;
struct aegis_state {int dummy; } ;
struct aegis_block {int const* bytes; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct aegis_state*,unsigned int,int const*) ;
 int FUNC_1 (int const*,int const*,unsigned int) ;
 int FUNC_2 (int const*,int ,unsigned int) ;
 int FUNC_3 (struct scatter_walk*,unsigned int) ;
 unsigned int FUNC_4 (struct scatter_walk*,unsigned int) ;
 int FUNC_5 (struct scatter_walk*,int ,unsigned int) ;
 void* FUNC_6 (struct scatter_walk*) ;
 int FUNC_7 (struct scatter_walk*,struct scatterlist*) ;
 int FUNC_8 (void*) ;

__attribute__((used)) static void FUNC_9(
  struct aegis_state *VAR_1, struct scatterlist *VAR_2,
  unsigned int VAR_3)
{
 struct scatter_walk VAR_4;
 struct aegis_block VAR_5;
 unsigned int VAR_6 = 0;

 FUNC_7(&VAR_4, VAR_2);
 while (VAR_3 != 0) {
  unsigned int VAR_7 = FUNC_4(&VAR_4, VAR_3);
  unsigned int VAR_8 = VAR_7;
  void *VAR_9 = FUNC_6(&VAR_4);
  const u8 *VAR_10 = (const u8 *)VAR_9;

  if (VAR_6 + VAR_7 >= VAR_0) {
   if (VAR_6 > 0) {
    unsigned int VAR_11 = VAR_0 - VAR_6;
    FUNC_1(VAR_5.bytes + VAR_6, VAR_10, VAR_11);
    FUNC_0(VAR_1,
        VAR_0,
        VAR_5.bytes);
    VAR_6 = 0;
    VAR_8 -= VAR_11;
    VAR_10 += VAR_11;
   }

   FUNC_0(VAR_1, VAR_8, VAR_10);

   VAR_10 += VAR_8 & ~(VAR_0 - 1);
   VAR_8 &= VAR_0 - 1;
  }

  FUNC_1(VAR_5.bytes + VAR_6, VAR_10, VAR_8);
  VAR_6 += VAR_8;
  VAR_3 -= VAR_7;

  FUNC_8(VAR_9);
  FUNC_3(&VAR_4, VAR_7);
  FUNC_5(&VAR_4, 0, VAR_3);
 }

 if (VAR_6 > 0) {
  FUNC_2(VAR_5.bytes + VAR_6, 0, VAR_0 - VAR_6);
  FUNC_0(VAR_1, VAR_0, VAR_5.bytes);
 }
}
