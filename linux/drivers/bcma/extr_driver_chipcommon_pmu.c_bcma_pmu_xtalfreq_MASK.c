
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcma_drv_cc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bcma_drv_cc*,int ) ;
 int FUNC_2 (struct bcma_drv_cc*,int ,int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static u32 FUNC_4(struct bcma_drv_cc *VAR_5)
{
 u32 VAR_6, VAR_7;

 if (!(FUNC_1(VAR_5, VAR_0) &
       VAR_1))
  return 0;

 FUNC_2(VAR_5, VAR_2,
    FUNC_0(VAR_4));
 FUNC_3(1000, 2000);

 VAR_6 = FUNC_1(VAR_5, VAR_2);
 VAR_6 &= VAR_3;

 FUNC_2(VAR_5, VAR_2, 0);

 VAR_7 = VAR_6 * 32768 / 4;
 return (VAR_7 + 50000) / 100000 * 100;
}
