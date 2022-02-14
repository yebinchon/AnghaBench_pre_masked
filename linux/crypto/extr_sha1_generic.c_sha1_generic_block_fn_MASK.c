
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int temp ;
struct sha1_state {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int const*,int *) ;

__attribute__((used)) static void FUNC_2(struct sha1_state *VAR_2, u8 const *VAR_3,
      int VAR_4)
{
 u32 VAR_5[VAR_1];

 while (VAR_4--) {
  FUNC_1(VAR_2->state, VAR_3, VAR_5);
  VAR_3 += VAR_0;
 }
 FUNC_0(VAR_5, sizeof(VAR_5));
}
