
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct charlcd {scalar_t__ irq; scalar_t__ virtbase; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct charlcd*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static u8 FUNC_5(struct charlcd *VAR_4)
{
 u8 VAR_5;
 u32 VAR_6;
 int VAR_7;


 if (VAR_4->irq >= 0)
  FUNC_0(VAR_4);
 else {
  VAR_7 = 0;
  VAR_6 = 0;
  while (!(VAR_6 & VAR_2) && VAR_7 < 10) {
   FUNC_3(100);
   VAR_6 = FUNC_2(VAR_4->virtbase + VAR_0);
   VAR_7++;
  }

  FUNC_4(VAR_1, VAR_4->virtbase + VAR_0);
 }
 FUNC_1(1);


 VAR_5 = FUNC_2(VAR_4->virtbase + VAR_3) & 0xf0;





 VAR_7 = 0;
 VAR_6 = 0;
 while (!(VAR_6 & VAR_2) && VAR_7 < 10) {
  FUNC_3(100);
  VAR_6 = FUNC_2(VAR_4->virtbase + VAR_0);
  VAR_7++;
 }
 FUNC_4(VAR_1, VAR_4->virtbase + VAR_0);
 FUNC_1(1);


 VAR_5 |= (FUNC_2(VAR_4->virtbase + VAR_3) >> 4) & 0x0f;

 return VAR_5;
}
