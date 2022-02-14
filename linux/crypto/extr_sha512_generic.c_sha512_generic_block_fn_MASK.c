
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sha512_state {int state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int const*) ;

__attribute__((used)) static void FUNC_1(struct sha512_state *VAR_1, u8 const *VAR_2,
        int VAR_3)
{
 while (VAR_3--) {
  FUNC_0(VAR_1->state, VAR_2);
  VAR_2 += VAR_0;
 }
}
