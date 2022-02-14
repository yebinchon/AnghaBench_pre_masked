
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct idma64_chan {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct idma64_chan*,int ) ;
 int FUNC_1 (struct idma64_chan*,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct idma64_chan *VAR_4, bool VAR_5)
{
 unsigned short VAR_6 = 100;
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_4, VAR_0);
 if (VAR_5)
  VAR_7 |= VAR_1;
 else
  VAR_7 &= ~VAR_1;

 FUNC_1(VAR_4, VAR_0, VAR_7 | VAR_2);
 do {
  FUNC_2(1);
  VAR_7 = FUNC_0(VAR_4, VAR_0);
 } while (!(VAR_7 & VAR_3) && --VAR_6);
}
