
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct hfi1_devdata {int dummy; } ;


 int FUNC_0 (int *,int const*,int) ;
 int FUNC_1 (struct hfi1_devdata*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct hfi1_devdata *VAR_0, int VAR_1,
      const u8 *VAR_2, int VAR_3)
{
 int VAR_4 = VAR_3 / 8;
 int VAR_5;

 if (((unsigned long)VAR_2 & 0x7) == 0) {

  u64 *VAR_6 = (u64 *)VAR_2;

  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++, VAR_6++)
   FUNC_1(VAR_0, VAR_1 + (8 * VAR_5), *VAR_6);
 } else {

  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++, VAR_2 += 8) {
   u64 VAR_7;

   FUNC_0(&VAR_7, VAR_2, 8);
   FUNC_1(VAR_0, VAR_1 + (8 * VAR_5), VAR_7);
  }
 }
}
