
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u16 ;
struct nios2_timer {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long FUNC_0 (struct nios2_timer*,int ) ;
 int FUNC_1 (struct nios2_timer*,unsigned long,int ) ;

__attribute__((used)) static void FUNC_2(struct nios2_timer *VAR_7, unsigned long VAR_8,
          bool VAR_9)
{
 u16 VAR_10;



  VAR_8--;

 VAR_10 = FUNC_0(VAR_7, VAR_2);

 FUNC_1(VAR_7, VAR_10 | VAR_4,
  VAR_2);


 FUNC_1(VAR_7, VAR_8, VAR_6);
 FUNC_1(VAR_7, VAR_8 >> 16, VAR_5);

 VAR_10 |= VAR_3 | VAR_1;
 if (VAR_9)
  VAR_10 |= VAR_0;
 else
  VAR_10 &= ~VAR_0;
 FUNC_1(VAR_7, VAR_10, VAR_2);
}
