
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct dumpreg {int srevMin; int srevMax; int phyMin; int phyMax; scalar_t__ addr; int * name; } ;
struct TYPE_2__ {int nregs; struct dumpreg** regs; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct dumpreg**,int,int,int ) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_2 (int *,int *) ;

void
FUNC_3(struct dumpreg *VAR_3, u_int VAR_4,
 int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 const int VAR_9 = VAR_2.nregs;
 int VAR_10, VAR_11;

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  struct dumpreg *VAR_12 = &VAR_3[VAR_10];
  if (VAR_12->srevMin == 0)
   VAR_12->srevMin = VAR_5;
  if (VAR_12->srevMax == 0)
   VAR_12->srevMax = VAR_6;
  if (VAR_12->phyMin == 0)
   VAR_12->phyMin = VAR_7;
  if (VAR_12->phyMax == 0)
   VAR_12->phyMax = VAR_8;
  for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
   struct dumpreg *VAR_13 = VAR_2.regs[VAR_11];




   if (VAR_12->addr == VAR_13->addr &&
       (VAR_12->name == VAR_13->name ||
        VAR_12->name != ((void*)0) && VAR_13->name != ((void*)0) &&
        FUNC_2(VAR_12->name, VAR_13->name) == 0)) {
    if (VAR_12->srevMin < VAR_13->srevMin &&
        (VAR_13->srevMin <= VAR_12->srevMax &&
         VAR_12->srevMax+1 <= VAR_13->srevMax)) {
     VAR_13->srevMin = VAR_12->srevMin;
     goto skip;
    }
    if (VAR_12->srevMax > VAR_13->srevMax &&
        (VAR_13->srevMin <= VAR_12->srevMin &&
         VAR_12->srevMin <= VAR_13->srevMax)) {
     VAR_13->srevMax = VAR_12->srevMax;
     goto skip;
    }
   }
   if (VAR_13->addr > VAR_12->addr)
    break;
  }



  if (VAR_2.nregs == VAR_0)
   FUNC_0(-1, "too many registers; bump MAXREGS");
  VAR_2.regs[VAR_2.nregs++] = VAR_12;
 skip:
  ;
 }
 FUNC_1(VAR_2.regs, VAR_2.nregs, sizeof(struct dumpreg *), VAR_1);
}
