
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atom_clock_dividers {int post_div; int ref_div; } ;



__attribute__((used)) static void FUNC_0(u32 VAR_0,
            u32 VAR_1,
            bool VAR_2,
            struct atom_clock_dividers *VAR_3,
            u32 *VAR_4,
            u32 *VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8;
 u32 VAR_9;

 if (VAR_2)
  VAR_9 = (VAR_0 * 8) / 2;
 else
  VAR_9 = (VAR_0 * 4) / 2;

 VAR_6 = VAR_3->post_div;
 VAR_7 = VAR_3->ref_div;

 VAR_8 =
  (8 * VAR_9 * VAR_7 * VAR_6) / VAR_1;

 *VAR_4 = VAR_8 / 8;
 *VAR_5 = VAR_8 % 8;
}
