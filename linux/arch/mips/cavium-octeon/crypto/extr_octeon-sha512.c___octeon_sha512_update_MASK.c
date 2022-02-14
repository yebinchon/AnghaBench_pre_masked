
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sha512_state {unsigned int* count; int const* buf; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int const*,int const*,unsigned int) ;
 int FUNC_1 (int const*) ;

__attribute__((used)) static void FUNC_2(struct sha512_state *VAR_1, const u8 *VAR_2,
       unsigned int VAR_3)
{
 unsigned int VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6;


 VAR_5 = VAR_1->count[0] % VAR_0;


 if ((VAR_1->count[0] += VAR_3) < VAR_3)
  VAR_1->count[1]++;

 VAR_4 = VAR_0 - VAR_5;


 if (VAR_3 >= VAR_4) {
  FUNC_0(&VAR_1->buf[VAR_5], VAR_2, VAR_4);
  FUNC_1(VAR_1->buf);

  for (VAR_6 = VAR_4; VAR_6 + VAR_0 <= VAR_3;
   VAR_6 += VAR_0)
   FUNC_1(&VAR_2[VAR_6]);

  VAR_5 = 0;
 } else {
  VAR_6 = 0;
 }


 FUNC_0(&VAR_1->buf[VAR_5], &VAR_2[VAR_6], VAR_3 - VAR_6);
}
