
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sii8620 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sii8620*,int ) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct sii8620 *VAR_5, u8 VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < 10; ++VAR_7) {
  u8 VAR_8 = FUNC_0(VAR_5, VAR_4);

  if ((VAR_8 & VAR_3) == VAR_6)
   return 0;
  if (!(VAR_8 & VAR_0))
   return -VAR_1;
  FUNC_1(4000, 6000);
 }
 return -VAR_2;
}
