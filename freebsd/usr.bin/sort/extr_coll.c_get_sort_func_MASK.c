
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sort_mods {scalar_t__ Vflag; scalar_t__ Rflag; scalar_t__ Mflag; scalar_t__ gflag; scalar_t__ hflag; scalar_t__ nflag; } ;
typedef int cmpcoll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

cmpcoll_t
FUNC_0(struct sort_mods *VAR_7)
{

 if (VAR_7->nflag)
  return (VAR_3);
 else if (VAR_7->hflag)
  return (VAR_1);
 else if (VAR_7->gflag)
  return (VAR_0);
 else if (VAR_7->Mflag)
  return (VAR_2);
 else if (VAR_7->Rflag)
  return (VAR_4);
 else if (VAR_7->Vflag)
  return (VAR_5);
 else
  return (VAR_6);
}
