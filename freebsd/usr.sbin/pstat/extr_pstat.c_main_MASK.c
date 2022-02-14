
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t order; int name; } ;
struct TYPE_4__ {char* n_name; scalar_t__ n_value; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int,char**,char const*) ;
 int VAR_3 ;
 int * VAR_4 ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int * FUNC_6 (void*,int *,int *,int ,char*) ;
 int * VAR_5 ;
 TYPE_2__* VAR_6 ;
 TYPE_1__* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char const*,char*) ;
 char* FUNC_9 (int ) ;
 char* FUNC_10 (char*,char) ;
 int VAR_10 ;
 int FUNC_11 () ;
 int VAR_11 ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 char* VAR_12 ;
 int VAR_13 ;
 int FUNC_14 (char*,char*) ;

int
FUNC_15(int VAR_14, char *VAR_15[])
{
 int VAR_16, VAR_17, VAR_18;
 int VAR_19, VAR_20;
 unsigned int VAR_21;
 char VAR_22[VAR_2];
 const char *VAR_23;

 VAR_19 = VAR_10 = VAR_20 = 0;


 VAR_23 = FUNC_10(VAR_15[0], '/');
 if (VAR_23)
  VAR_23++;
 else
  VAR_23 = VAR_15[0];
 if (!FUNC_8(VAR_23, "swapinfo")) {
  VAR_10 = 1;
  VAR_23 = "ghkmM:N:";
  VAR_12 = "swapinfo [-ghkm] [-M core [-N system]]";
 } else {
  VAR_23 = "TM:N:fghkmnst";
  VAR_12 = "pstat [-Tfghkmnst] [-M core [-N system]]";
 }

 while ((VAR_16 = FUNC_3(VAR_14, VAR_15, VAR_23)) != -1)
  switch (VAR_16) {
  case 'f':
   VAR_19 = 1;
   break;
  case 'g':
   FUNC_7("BLOCKSIZE", "1G", 1);
   break;
  case 'h':
   VAR_3 = 1;
   break;
  case 'k':
   FUNC_7("BLOCKSIZE", "1K", 1);
   break;
  case 'm':
   FUNC_7("BLOCKSIZE", "1M", 1);
   break;
  case 'M':
   VAR_5 = VAR_9;
   break;
  case 'N':
   VAR_8 = VAR_9;
   break;
  case 'n':
   VAR_13 = 1;
   break;
  case 's':
   ++VAR_10;
   break;
  case 'T':
   VAR_11 = 1;
   break;
  case 't':
   VAR_20 = 1;
   break;
  default:
   FUNC_13();
  }




 for (VAR_21 = 0; VAR_21 < VAR_0; VAR_21++)
  VAR_7[VAR_6[VAR_21].order].n_name = FUNC_9(VAR_6[VAR_21].name);

 if (VAR_5 != ((void*)0)) {
  VAR_4 = FUNC_6(VAR_8, VAR_5, ((void*)0), VAR_1, VAR_22);
  if (VAR_4 == ((void*)0))
   FUNC_0(1, "kvm_openfiles: %s", VAR_22);
  if ((VAR_18 = FUNC_5(VAR_4, VAR_7)) != 0) {
   if (VAR_18 == -1)
    FUNC_0(1, "kvm_nlist: %s", FUNC_4(VAR_4));
   VAR_17 = 0;
   for (VAR_21 = 0; VAR_7[VAR_21].n_name[0] != '\0'; ++VAR_21)
    if (VAR_7[VAR_21].n_value == 0) {
     VAR_17 = 1;
     FUNC_14("undefined symbol: %s",
         VAR_7[VAR_21].n_name);
    }
   if (VAR_17)
    FUNC_1(1);
  }
 }
 if (!(VAR_19 | VAR_20 | VAR_10 | VAR_11))
  FUNC_13();
 if (VAR_19 || VAR_11)
  FUNC_2();
 if (VAR_20)
  FUNC_12();
 if (VAR_10 || VAR_11)
  FUNC_11();
 FUNC_1 (0);
}
