
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int kaddr ;
typedef int inamlen ;
struct TYPE_2__ {scalar_t__ n_type; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 unsigned long* FUNC_0 (unsigned int,int) ;
 int FUNC_1 (unsigned long*) ;
 long long FUNC_2 () ;
 int * VAR_3 ;
 int FUNC_3 (int ,...) ;
 int FUNC_4 (uintptr_t,char*,size_t) ;
 char* FUNC_5 (size_t) ;
 scalar_t__ FUNC_6 (char*,char*,size_t*) ;
 TYPE_1__* VAR_4 ;
 int FUNC_7 (unsigned long*,unsigned long*,char*,unsigned int,size_t,long long) ;
 unsigned int FUNC_8 (unsigned long**) ;
 char* FUNC_9 (char*,size_t) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (unsigned int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,int,char*,char*,char*) ;
 int FUNC_14 (int,char*) ;
 int FUNC_15 () ;
 int FUNC_16 (char*) ;

__attribute__((used)) static void
FUNC_17(unsigned int VAR_5, int VAR_6)
{
 unsigned long *VAR_7, *VAR_8;
 char *VAR_9, *VAR_10;
 long long VAR_11, VAR_12, VAR_13;
 size_t VAR_14, VAR_15, VAR_16;
 uintptr_t VAR_17;
 unsigned int VAR_18;

 VAR_8 = ((void*)0);
 VAR_13 = FUNC_2();


 if (VAR_3 != ((void*)0)) {
  FUNC_3(VAR_2, &VAR_15, sizeof(VAR_15));
  if ((VAR_10 = FUNC_5(VAR_15)) == ((void*)0))
   FUNC_14(1, "malloc()");
  if (VAR_4[VAR_1].n_type == 0)
   FUNC_3(VAR_0, VAR_10, VAR_15);
  else {
   FUNC_3(VAR_0, &VAR_17, sizeof(VAR_17));
   FUNC_4(VAR_17, VAR_10, VAR_15);
  }
 } else {
  for (VAR_10 = ((void*)0), VAR_15 = 1024; ; VAR_15 *= 2) {
   if ((VAR_10 = FUNC_9(VAR_10, VAR_15)) == ((void*)0))
    FUNC_14(1, "reallocf()");
   if (FUNC_6("hw.intrnames", VAR_10, &VAR_15) == 0)
    break;
  }
 }


 VAR_9 = VAR_10;
 VAR_16 = FUNC_10("interrupt");
 while(*VAR_9 != '\0') {
  VAR_14 = FUNC_10(VAR_9);
  if (VAR_14 > VAR_16)
   VAR_16 = VAR_14;
  VAR_9 += FUNC_10(VAR_9) + 1;
 }
 FUNC_13("{T:/%-*s} {T:/%20s} {T:/%10s}\n",
     (int)VAR_16, "interrupt", "total", "rate");





 FUNC_16("interrupt-statistics");

 VAR_11 = VAR_13 / 1000000;
 while(1) {
  VAR_18 = FUNC_8(&VAR_7);




  if (VAR_8 == ((void*)0)) {
   VAR_8 = FUNC_0(VAR_18, sizeof(unsigned long));
   if (VAR_8 == ((void*)0))
    FUNC_14(1, "calloc()");
  }

  FUNC_7(VAR_7, VAR_8, VAR_10, VAR_18,
      VAR_16, VAR_11);
  FUNC_15();

  FUNC_1(VAR_8);
  VAR_8 = VAR_7;
  if (VAR_6 >= 0 && --VAR_6 <= 0)
   break;
  FUNC_11(VAR_5 * 1000);
  VAR_12 = VAR_13;
  VAR_13 = FUNC_2();
  VAR_11 = (VAR_13 - VAR_12) / 1000000;
 }

 FUNC_12("interrupt-statistics");
}
