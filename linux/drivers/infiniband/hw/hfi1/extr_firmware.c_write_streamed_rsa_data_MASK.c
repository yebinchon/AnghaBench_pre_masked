
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct hfi1_devdata {int dummy; } ;


 int FUNC_0 (struct hfi1_devdata*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct hfi1_devdata *VAR_0, int VAR_1,
        const u8 *VAR_2, int VAR_3)
{
 u64 *VAR_4 = (u64 *)VAR_2;
 int VAR_5 = VAR_3 / 8;

 for (; VAR_5 > 0; VAR_5--, VAR_4++)
  FUNC_0(VAR_0, VAR_1, *VAR_4);
}
