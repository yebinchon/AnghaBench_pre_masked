
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sis5595_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sis5595_data*,int ) ;
 int FUNC_1 (struct sis5595_data*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct sis5595_data *VAR_1)
{
 u8 VAR_2 = FUNC_0(VAR_1, VAR_0);
 if (!(VAR_2 & 0x01))
  FUNC_1(VAR_1, VAR_0,
    (VAR_2 & 0xf7) | 0x01);
}
