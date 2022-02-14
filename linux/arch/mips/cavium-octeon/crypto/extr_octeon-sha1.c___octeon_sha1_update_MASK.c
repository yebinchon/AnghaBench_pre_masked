
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sha1_state {unsigned int count; int * buffer; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,int const*,unsigned int) ;
 int FUNC_1 (int const*) ;

__attribute__((used)) static void FUNC_2(struct sha1_state *VAR_1, const u8 *VAR_2,
     unsigned int VAR_3)
{
 unsigned int VAR_4;
 unsigned int VAR_5;
 const u8 *VAR_6;

 VAR_4 = VAR_1->count % VAR_0;
 VAR_1->count += VAR_3;
 VAR_5 = 0;
 VAR_6 = VAR_2;

 if ((VAR_4 + VAR_3) >= VAR_0) {
  if (VAR_4) {
   VAR_5 = -VAR_4;
   FUNC_0(VAR_1->buffer + VAR_4, VAR_2,
          VAR_5 + VAR_0);
   VAR_6 = VAR_1->buffer;
  }

  do {
   FUNC_1(VAR_6);
   VAR_5 += VAR_0;
   VAR_6 = VAR_2 + VAR_5;
  } while (VAR_5 + VAR_0 <= VAR_3);

  VAR_4 = 0;
 }
 FUNC_0(VAR_1->buffer + VAR_4, VAR_6, VAR_3 - VAR_5);
}
