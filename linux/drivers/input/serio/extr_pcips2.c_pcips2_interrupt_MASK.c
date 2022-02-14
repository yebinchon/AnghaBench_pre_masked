
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcips2_data {int io; scalar_t__ base; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (unsigned char) ;
 unsigned char FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,unsigned char,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_5, void *VAR_6)
{
 struct pcips2_data *VAR_7 = VAR_6;
 unsigned char VAR_8, VAR_9;
 int VAR_10 = 0;

 do {
  unsigned int VAR_11;

  VAR_8 = FUNC_2(VAR_7->base + VAR_1);
  if (!(VAR_8 & VAR_3))
   break;
  VAR_10 = 1;
  VAR_9 = FUNC_2(VAR_7->base + VAR_0);
  if (VAR_8 == 0xff && VAR_9 == 0xff)
   break;

  VAR_11 = (VAR_8 & VAR_2) ? 0 : VAR_4;

  if (FUNC_1(VAR_9) & 1)
   VAR_11 ^= VAR_4;

  FUNC_3(VAR_7->io, VAR_9, VAR_11);
 } while (1);
 return FUNC_0(VAR_10);
}
