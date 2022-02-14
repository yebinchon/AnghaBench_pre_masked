
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipu_di {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct ipu_di*,int ) ;
 int FUNC_3 (struct ipu_di*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct ipu_di *VAR_0, int VAR_1, int VAR_2,
  int VAR_3, int VAR_4, int VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_2(VAR_0, FUNC_0(VAR_1));
 VAR_6 &= ~(0x3 << (VAR_2 * 2));
 VAR_6 |= VAR_3 << (VAR_2 * 2);
 FUNC_3(VAR_0, VAR_6, FUNC_0(VAR_1));

 FUNC_3(VAR_0, (VAR_5 << 16) | VAR_4, FUNC_1(VAR_1, VAR_3));
}
