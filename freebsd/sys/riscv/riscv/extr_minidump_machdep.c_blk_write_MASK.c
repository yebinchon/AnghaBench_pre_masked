
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef size_t u_int ;
struct dumperinfo {int maxiosize; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_1 (struct dumperinfo*) ;
 int FUNC_2 () ;
 size_t VAR_5 ;
 int FUNC_3 (struct dumperinfo*,char*,int ,size_t) ;
 void* VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t FUNC_4 (int ,size_t) ;
 int FUNC_5 (char*,...) ;
 size_t VAR_9 ;
 int FUNC_6 (size_t,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct dumperinfo *VAR_10, char *VAR_11, vm_paddr_t VAR_12, size_t VAR_13)
{
 size_t VAR_14;
 int VAR_15, VAR_16;
 u_int VAR_17;

 VAR_17 = FUNC_4(VAR_10->maxiosize, VAR_2 * VAR_3);
 if (VAR_17 == 0)
  VAR_17 = VAR_3;
 VAR_15 = 0;
 if ((VAR_13 % VAR_3) != 0) {
  FUNC_5("size not page aligned\n");
  return (VAR_1);
 }
 if (VAR_11 != ((void*)0) && VAR_12 != 0) {
  FUNC_5("cant have both va and pa!\n");
  return (VAR_1);
 }
 if ((((uintptr_t)VAR_12) % VAR_3) != 0) {
  FUNC_5("address not page aligned %#lx\n", (uintptr_t)VAR_12);
  return (VAR_1);
 }
 if (VAR_11 != ((void*)0)) {




  VAR_15 = FUNC_1(VAR_10);
  if (VAR_15 != 0)
   return (VAR_15);
 }
 while (VAR_13) {
  VAR_14 = VAR_17 - VAR_8;
  if (VAR_14 > VAR_13)
   VAR_14 = VAR_13;
  VAR_5 += VAR_14;
  VAR_9 -= VAR_14;
  if (VAR_5 >> 22) {
   FUNC_6(VAR_9, VAR_7);
   VAR_5 &= (1 << 22) - 1;
  }

  FUNC_7(VAR_4);

  if (VAR_11) {
   VAR_15 = FUNC_3(VAR_10, VAR_11, 0, VAR_14);
   if (VAR_15 != 0)
    return (VAR_15);
   VAR_11 += VAR_14;
   VAR_13 -= VAR_14;
  } else {
   VAR_6 = (void *)FUNC_0(VAR_12);
   VAR_8 += VAR_14;
   VAR_12 += VAR_14;
   VAR_13 -= VAR_14;
   VAR_15 = FUNC_1(VAR_10);
   if (VAR_15 != 0)
    return (VAR_15);
  }


  VAR_16 = FUNC_2();
  if (VAR_16 == 0x03)
   return (VAR_0);
  if (VAR_16 != -1)
   FUNC_5(" (CTRL-C to abort) ");
 }

 return (0);
}
