
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int szc ;
typedef scalar_t__ phandle_t ;
typedef int pcell_t ;
typedef int paddrc ;
typedef int name ;
typedef int bus_addr_t ;
typedef int banks ;
typedef int addrc ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;


 int FUNC_1 (scalar_t__,char*,...) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (char*,char*) ;

int
FUNC_5(phandle_t VAR_5, int VAR_6, int *VAR_7, bus_addr_t *VAR_8)
{
 char VAR_9[32];
 uint64_t VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 pcell_t VAR_17, VAR_18, VAR_19;
 phandle_t VAR_20, VAR_21, VAR_22;
 uint32_t VAR_23[10 * 5];
 uint32_t VAR_24, VAR_25, VAR_26;
 int VAR_27, VAR_28, VAR_29;
 VAR_20 = FUNC_2(VAR_5);
 if (VAR_20 == 0)
  return (VAR_0);
 if (FUNC_1(VAR_20, "name", VAR_9, sizeof(VAR_9)) == -1)
  return (VAR_0);
 VAR_9[sizeof(VAR_9) - 1] = '\0';
 if (FUNC_1(VAR_20, "#address-cells", &VAR_17, sizeof(VAR_17)) == -1)
  VAR_17 = 2;
 if (FUNC_1(VAR_20, "#size-cells", &VAR_18, sizeof(VAR_18)) == -1)
  VAR_18 = 1;
 if (VAR_17 < 2 || VAR_17 > 3 || VAR_18 < 1 || VAR_18 > 2)
  return (VAR_0);
 if (FUNC_4(VAR_9, "pci") == 0) {
  if (VAR_17 > 3)
   return (VAR_0);
  VAR_29 = FUNC_1(VAR_5, "assigned-addresses", &VAR_23,
      sizeof(VAR_23));
 } else {
  if (VAR_17 > 2)
   return (VAR_0);
  VAR_29 = FUNC_1(VAR_5, "reg", &VAR_23, sizeof(VAR_23));
 }
 if (VAR_29 == -1)
  return (VAR_0);
 VAR_29 /= sizeof(VAR_23[0]) * (VAR_17 + VAR_18);
 if (VAR_6 < 0 || VAR_6 > VAR_29 - 1)
  return (VAR_0);
 VAR_6 *= VAR_17 + VAR_18;
 VAR_26 = FUNC_3(VAR_9, VAR_23[VAR_6]);

 VAR_6 += VAR_17 - 2;
 VAR_13 = 0;
 for (VAR_27 = 0; VAR_27 < FUNC_0(2, VAR_17); VAR_27++)
  VAR_13 = ((uint64_t)VAR_13 << 32) | VAR_23[VAR_6++];
 VAR_15 = 0;
 for (VAR_27 = 0; VAR_27 < VAR_18; VAR_27++)
  VAR_15 = ((uint64_t)VAR_15 << 32) | VAR_23[VAR_6++];
 VAR_16 = VAR_13;
 VAR_12 = VAR_13 + VAR_15 - 1;
 VAR_24 = 0;
 VAR_21 = VAR_20;
 while ((VAR_22 = FUNC_2(VAR_20)) != 0) {
  if (FUNC_1(VAR_22, "#address-cells", &VAR_19,
      sizeof(VAR_19)) == -1)
   VAR_19 = 2;
  if (VAR_19 < 2 || VAR_19 > 3)
   return (VAR_0);
  VAR_29 = FUNC_1(VAR_20, "ranges", &VAR_23, sizeof(VAR_23));
  if (VAR_29 == -1) {
   if (FUNC_1(VAR_22, "name", VAR_9, sizeof(VAR_9)) == -1)
    return (VAR_0);
   VAR_9[sizeof(VAR_9) - 1] = '\0';
   goto skip;
  }
  if (FUNC_1(VAR_20, "#size-cells", &VAR_18, sizeof(VAR_18)) == -1)
   VAR_18 = 1;
  if (VAR_18 < 1 || VAR_18 > 2)
   return (VAR_0);
  VAR_29 /= sizeof(VAR_23[0]) * (VAR_17 + VAR_19 + VAR_18);
  VAR_6 = 0;
  for (VAR_27 = 0; VAR_27 < VAR_29; VAR_27++) {
   VAR_24 = FUNC_3(VAR_9, VAR_23[VAR_6]);
   if (VAR_24 != VAR_26) {
    VAR_6 += VAR_17 + VAR_19 + VAR_18;
    continue;
   }

   VAR_6 += VAR_17 - 2;
   VAR_13 = 0;
   for (VAR_28 = 0; VAR_28 < FUNC_0(2, VAR_17); VAR_28++)
    VAR_13 = ((uint64_t)VAR_13 << 32) | VAR_23[VAR_6++];
   VAR_25 = VAR_23[VAR_6];

   VAR_6 += VAR_19 - 2;
   VAR_14 = 0;
   for (VAR_28 = 0; VAR_28 < FUNC_0(2, VAR_19); VAR_28++)
    VAR_14 =
        ((uint64_t)VAR_14 << 32) | VAR_23[VAR_6++];
   VAR_15 = 0;
   for (VAR_28 = 0; VAR_28 < VAR_18; VAR_28++)
    VAR_15 = ((uint64_t)VAR_15 << 32) | VAR_23[VAR_6++];
   VAR_11 = VAR_13;
   VAR_10 = VAR_13 + VAR_15 - 1;
   if (VAR_16 < VAR_11 || VAR_16 > VAR_10)
    continue;
   if (VAR_12 < VAR_11 || VAR_12 > VAR_10)
    return (VAR_0);
   if (FUNC_1(VAR_22, "name", VAR_9, sizeof(VAR_9)) == -1)
    return (VAR_0);
   VAR_9[sizeof(VAR_9) - 1] = '\0';
   VAR_26 = FUNC_3(VAR_9, VAR_25);
   VAR_16 += VAR_14 - VAR_11;
   VAR_12 += VAR_14 - VAR_11;
   break;
  }
  if (VAR_27 == VAR_29)
   return (VAR_0);
  VAR_21 = VAR_20;
 skip:
  VAR_17 = VAR_19;
  VAR_20 = VAR_22;
 }

 *VAR_8 = VAR_16;

 if (FUNC_2(VAR_21) == 0) {
  *VAR_7 = VAR_1;
  return (0);
 }
 if (FUNC_1(VAR_21, "name", VAR_9, sizeof(VAR_9)) == -1)
  return (VAR_0);
 VAR_9[sizeof(VAR_9) - 1] = '\0';
 if (FUNC_4(VAR_9, "central") == 0 || FUNC_4(VAR_9, "ebus") == 0 ||
     FUNC_4(VAR_9, "upa") == 0) {
  *VAR_7 = VAR_1;
  return (0);
 } else if (FUNC_4(VAR_9, "pci") == 0) {
  switch (VAR_24) {
  case 129:
   *VAR_7 = VAR_2;
   return (0);
  case 128:
   *VAR_7 = VAR_3;
   return (0);
  }
 } else if (FUNC_4(VAR_9, "sbus") == 0) {
  *VAR_7 = VAR_4;
  return (0);
 }
 return (VAR_0);
}
