
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mmhubbub_wbif_mode { ____Placeholder_mmhubbub_wbif_mode } mmhubbub_wbif_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

unsigned int FUNC_0(
  unsigned int VAR_3,
  enum mmhubbub_wbif_mode VAR_4,
  unsigned int VAR_5)
{
 unsigned int VAR_6 = 0;
 unsigned int VAR_7 = 0x200;
 unsigned int VAR_8 = 0x140;
 unsigned int VAR_9, VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12;

 if (VAR_4 == VAR_0)
  VAR_6 = VAR_3/4;
 else if (VAR_4 == VAR_2)
  VAR_6 = VAR_3;
 else if (VAR_4 == VAR_1)
  VAR_6 = VAR_3 * 819/1024;

 if (VAR_6 == 0)
  VAR_6 = 1;

 VAR_9 = (VAR_7 > VAR_8) ? VAR_8 : VAR_7;
 VAR_10 = (VAR_4 == VAR_0) ? VAR_7 + VAR_8 : VAR_9;
 VAR_11 = VAR_10*VAR_6*32/16;
 VAR_12 = VAR_11 - VAR_5;
 return VAR_12;
}
