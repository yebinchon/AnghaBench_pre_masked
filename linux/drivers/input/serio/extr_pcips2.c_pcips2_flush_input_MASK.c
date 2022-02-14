
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcips2_data {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct pcips2_data *VAR_3)
{
 unsigned char VAR_4, VAR_5;

 do {
  VAR_4 = FUNC_0(VAR_3->base + VAR_1);
  if (!(VAR_4 & VAR_2))
   break;
  VAR_5 = FUNC_0(VAR_3->base + VAR_0);
  if (VAR_4 == 0xff && VAR_5 == 0xff)
   break;
 } while (1);
}
