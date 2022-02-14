
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_4__ {char* vendor; int (* load ) (int *,int,void**,void**) ;int * (* match ) (int *,size_t*) ;} ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 uintptr_t VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int * VAR_4 ;
 TYPE_1__* VAR_5 ;
 int * FUNC_2 (uintptr_t,size_t) ;
 int FUNC_3 (int *,int *,size_t) ;
 size_t FUNC_4 (TYPE_1__*) ;
 int * FUNC_5 (scalar_t__) ;
 size_t FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,int ) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int * FUNC_10 (int *,size_t*) ;
 int FUNC_11 (int *,int,void**,void**) ;
 int * VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_1__* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int FUNC_12 (uintptr_t,size_t) ;

size_t
FUNC_13(uintptr_t VAR_11)
{
 union {
  uint32_t regs[4];
  char vendor[13];
 } VAR_12;
 uint8_t *VAR_13, *VAR_14, *VAR_15;
 char *VAR_16;
 uint64_t VAR_17, VAR_18;
 caddr_t VAR_19;
 size_t VAR_20, VAR_21;
 int VAR_22;

 FUNC_0(VAR_11 % VAR_3 == 0, ("unaligned boundary %p", (void *)VAR_11));

 FUNC_1(0, VAR_12.regs);
 VAR_12.regs[0] = VAR_12.regs[1];
 VAR_12.regs[1] = VAR_12.regs[3];
 VAR_12.vendor[12] = '\0';
 for (VAR_20 = 0; VAR_20 < FUNC_4(VAR_5); VAR_20++)
  if (FUNC_9(VAR_12.vendor, VAR_5[VAR_20].vendor) == 0) {
   VAR_8 = &VAR_5[VAR_20];
   break;
  }
 if (VAR_8 == ((void*)0))
  return (0);

 VAR_19 = 0;
 VAR_14 = VAR_15 = ((void*)0);
 for (;;) {
  VAR_19 = FUNC_8(VAR_19);
  if (VAR_19 == 0)
   break;
  VAR_16 = (char *)FUNC_7(VAR_19, VAR_0);
  if (VAR_16 == ((void*)0) || FUNC_9(VAR_16, "cpu_microcode") != 0)
   continue;

  VAR_14 = FUNC_5(VAR_19);
  VAR_21 = FUNC_6(VAR_19);
  VAR_15 = VAR_8->match(VAR_14, &VAR_21);
  if (VAR_15 != ((void*)0)) {
   VAR_13 = FUNC_2(VAR_11, VAR_21);

   FUNC_3(VAR_13, VAR_15, VAR_21);
   VAR_15 = VAR_13;

   VAR_22 = VAR_8->load(VAR_15, 0, &VAR_17, &VAR_18);
   if (VAR_22 == 0) {
    VAR_6 = VAR_4 = VAR_15;
    VAR_9 = VAR_17;
    VAR_10 = VAR_18;
    return (VAR_21);
   }
   FUNC_12(VAR_11, VAR_21);
  }
 }
 if (VAR_14 != ((void*)0) && VAR_7 == VAR_1)
  VAR_7 = VAR_2;
 return (0);
}
