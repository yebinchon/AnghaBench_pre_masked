
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sha256_state {unsigned int count; int const* buf; int state; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int const*,int const*,unsigned int) ;
 int FUNC_1 (int ,int const*,unsigned int const) ;

__attribute__((used)) static void FUNC_2(struct sha256_state *VAR_1, const u8 *VAR_2,
        unsigned int VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5 = 0;

 VAR_1->count += VAR_3;
 if (VAR_4) {
  VAR_5 = VAR_0 - VAR_4;
  FUNC_0(VAR_1->buf + VAR_4, VAR_2, VAR_5);
  FUNC_1(VAR_1->state, VAR_1->buf, 1);
 }
 if (VAR_3 - VAR_5 >= VAR_0) {
  const unsigned int VAR_6 = (VAR_3 - VAR_5) / VAR_0;

  FUNC_1(VAR_1->state, VAR_2 + VAR_5, VAR_6);
  VAR_5 += VAR_6 * VAR_0;
 }

 FUNC_0(VAR_1->buf, VAR_2 + VAR_5, VAR_3 - VAR_5);
}
