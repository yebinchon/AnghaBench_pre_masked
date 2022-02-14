
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct hfi1_devdata*,int ) ;
 int FUNC_2 (struct hfi1_devdata*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct hfi1_devdata *VAR_4, u32 VAR_5, u32 *VAR_6)
{
 int VAR_7;

 FUNC_2(VAR_4, VAR_0, FUNC_0(VAR_5));
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
  VAR_6[VAR_7] = (u32)FUNC_1(VAR_4, VAR_1);
 FUNC_2(VAR_4, VAR_0, VAR_2);
}
