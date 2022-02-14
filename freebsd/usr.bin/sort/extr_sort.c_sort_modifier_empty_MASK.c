
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sort_mods {scalar_t__ fflag; scalar_t__ dflag; scalar_t__ hflag; scalar_t__ Rflag; scalar_t__ rflag; scalar_t__ gflag; scalar_t__ nflag; scalar_t__ Vflag; scalar_t__ Mflag; } ;



__attribute__((used)) static bool
FUNC_0(struct sort_mods *VAR_0)
{

 if (VAR_0 == ((void*)0))
  return (1);
 return (!(VAR_0->Mflag || VAR_0->Vflag || VAR_0->nflag || VAR_0->gflag ||
     VAR_0->rflag || VAR_0->Rflag || VAR_0->hflag || VAR_0->dflag || VAR_0->fflag));
}
