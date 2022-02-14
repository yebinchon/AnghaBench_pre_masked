
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sata_gemini {scalar_t__ muxmode; int sata_bridge; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

bool FUNC_0(struct sata_gemini *VAR_2, bool VAR_3)
{
 if (!VAR_2->sata_bridge)
  return 0;




 if ((VAR_2->muxmode == VAR_0) &&
     !VAR_3)
  return 0;
 if ((VAR_2->muxmode == VAR_1) &&
     VAR_3)
  return 0;

 return 1;
}
