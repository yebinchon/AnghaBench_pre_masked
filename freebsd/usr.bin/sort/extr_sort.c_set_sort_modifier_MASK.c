
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sort_mods {int bflag; int dflag; int fflag; int gflag; int iflag; int Rflag; int Mflag; int nflag; int rflag; int Vflag; int hflag; int func; } ;
struct TYPE_2__ {int complex_sort; } ;


 int FUNC_0 (struct sort_mods*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static bool
FUNC_2(struct sort_mods *VAR_4, int VAR_5)
{

 if (VAR_4 == ((void*)0))
  return (1);

 switch (VAR_5){
 case 'b':
  VAR_4->bflag = 1;
  break;
 case 'd':
  VAR_4->dflag = 1;
  break;
 case 'f':
  VAR_4->fflag = 1;
  break;
 case 'g':
  VAR_4->gflag = 1;
  VAR_0 = 1;
  break;
 case 'i':
  VAR_4->iflag = 1;
  break;
 case 'R':
  VAR_4->Rflag = 1;
  VAR_0 = 1;
  VAR_1 = 1;
  break;
 case 'M':
  FUNC_1();
  VAR_4->Mflag = 1;
  VAR_0 = 1;
  break;
 case 'n':
  VAR_4->nflag = 1;
  VAR_0 = 1;
  VAR_2 = 1;
  break;
 case 'r':
  VAR_4->rflag = 1;
  break;
 case 'V':
  VAR_4->Vflag = 1;
  break;
 case 'h':
  VAR_4->hflag = 1;
  VAR_0 = 1;
  VAR_2 = 1;
  break;
 default:
  return (0);
 }

 VAR_3.complex_sort = 1;
 VAR_4->func = FUNC_0(VAR_4);
 return (1);
}
