
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer16_priv {unsigned char ovf; scalar_t__ mapcommon; scalar_t__ mapbase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned short FUNC_0 (scalar_t__) ;
 unsigned char FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static unsigned long FUNC_4(struct timer16_priv *VAR_2)
{
 unsigned short VAR_3, VAR_4, VAR_5;
 unsigned char VAR_6, VAR_7;

 VAR_6 = FUNC_1(VAR_2->mapcommon + VAR_1) & VAR_2->ovf;


 do {
  VAR_7 = VAR_6;
  VAR_3 = FUNC_0(VAR_2->mapbase + VAR_0);
  VAR_4 = FUNC_0(VAR_2->mapbase + VAR_0);
  VAR_5 = FUNC_0(VAR_2->mapbase + VAR_0);
  VAR_6 = FUNC_1(VAR_2->mapcommon + VAR_1) & VAR_2->ovf;
 } while (FUNC_3((VAR_6 != VAR_7) || (VAR_3 > VAR_4 && VAR_3 < VAR_5)
     || (VAR_4 > VAR_5 && VAR_4 < VAR_3) || (VAR_5 > VAR_3 && VAR_5 < VAR_4)));

 if (FUNC_2(!VAR_6))
  return VAR_4;
 else
  return VAR_4 + 0x10000;
}
