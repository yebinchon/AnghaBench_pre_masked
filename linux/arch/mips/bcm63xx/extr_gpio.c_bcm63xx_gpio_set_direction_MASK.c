
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gpio_chip {unsigned int ngpio; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_4,
          unsigned VAR_5, int VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;
 u32 VAR_9;
 unsigned long VAR_10;

 if (VAR_5 >= VAR_4->ngpio)
  FUNC_0();

 if (VAR_5 < 32) {
  VAR_7 = VAR_2;
  VAR_8 = 1 << VAR_5;
 } else {
  VAR_7 = VAR_1;
  VAR_8 = 1 << (VAR_5 - 32);
 }

 FUNC_3(&VAR_3, VAR_10);
 VAR_9 = FUNC_1(VAR_7);
 if (VAR_6 == VAR_0)
  VAR_9 &= ~VAR_8;
 else
  VAR_9 |= VAR_8;
 FUNC_2(VAR_9, VAR_7);
 FUNC_4(&VAR_3, VAR_10);

 return 0;
}
