
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,void*,int) ;
 void* FUNC_2 (int,int) ;
 int FUNC_3 (int,char*,char*,...) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int * FUNC_8 (char*,char*) ;
 int FUNC_9 (int *,char*,...) ;
 int FUNC_10 (void*,int,int,int *) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (int *,long,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int,char**,char*) ;
 scalar_t__ FUNC_15 (int *,int *) ;
 scalar_t__ FUNC_16 (void**,int*) ;
 char* VAR_2 ;
 int FUNC_17 (int *) ;
 int * VAR_3 ;
 int * VAR_4 ;
 scalar_t__ FUNC_18 (char*,char*) ;
 char* FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (char*) ;
 int FUNC_21 () ;

int
FUNC_22(int VAR_5, char *VAR_6[])
{
 FILE *VAR_7, *VAR_8;
 int VAR_9, VAR_10 = 0;
 void *VAR_11;
 int VAR_12, VAR_13, VAR_14;
 unsigned char *VAR_15;
 char *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);
 char *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);
 char *VAR_20 = ((void*)0);
 int VAR_21;

 while((VAR_21 = FUNC_14(VAR_5, VAR_6, "i:s:o:n:f:O")) != -1) {
  switch(VAR_21) {
  case 'f':
   VAR_19 = VAR_2;
   break;
  case 'i':
   VAR_16 = VAR_2;
   break;
  case 's':
   VAR_17 = VAR_2;
   break;
  case 'o':
   VAR_18 = VAR_2;
   break;
  case 'n':
   VAR_20 = VAR_2;
   break;
  case 'O':
   VAR_10 = 1;
   break;
  default:
   FUNC_21();
   break;
  }
 }

 if (VAR_19 != ((void*)0))
  FUNC_7(VAR_19);

 if (VAR_17 == ((void*)0))
  FUNC_21();


 VAR_7 = FUNC_8(VAR_17, "r");
 if (VAR_7 == ((void*)0))
  FUNC_3(1, "opening .SYS file '%s' failed", VAR_17);
 FUNC_12 (VAR_7, 0L, VAR_1);
 VAR_13 = FUNC_13 (VAR_7);
 FUNC_17 (VAR_7);
 VAR_11 = FUNC_2(VAR_13, 1);
 VAR_12 = FUNC_10 (VAR_11, VAR_13, 1, VAR_7);
 if (VAR_12 == 0)
  FUNC_3(1, "reading .SYS file '%s' failed", VAR_17);

 FUNC_6(VAR_7);

 if (FUNC_16(&VAR_11, &VAR_13)) {
  FUNC_9(VAR_3, "section relocation failed\n");
  FUNC_5(1);
 }

 if (VAR_18 == ((void*)0) || FUNC_18(VAR_18, "-") == 0)
  VAR_8 = VAR_4;
 else {
  VAR_8 = FUNC_8(VAR_18, "w");
  if (VAR_8 == ((void*)0))
   FUNC_3(1, "opening output file '%s' failed", VAR_18);
 }

 FUNC_9(VAR_8, "\n/*\n");
 FUNC_9(VAR_8, " * Generated from %s and %s (%d bytes)\n",
     VAR_16 == ((void*)0) ? "<notused>" : VAR_16, VAR_17, VAR_13);
 FUNC_9(VAR_8, " */\n\n");

 if (VAR_20 != ((void*)0)) {
  if (FUNC_20(VAR_20) > VAR_0)
   FUNC_3(1, "selected device name '%s' is "
       "too long (max chars: %d)", VAR_20, VAR_0);
  FUNC_9 (VAR_8, "#define NDIS_DEVNAME \"%s\"\n", VAR_20);
  FUNC_9 (VAR_8, "#define NDIS_MODNAME %s\n\n", VAR_20);
 }

 if (VAR_16 == ((void*)0)) {
  FUNC_9 (VAR_8, "#ifdef NDIS_REGVALS\n");
  FUNC_9 (VAR_8, "ndis_cfg ndis_regvals[] = {\n");
         FUNC_9 (VAR_8, "\t{ NULL, NULL, { 0 }, 0 }\n");
  FUNC_9 (VAR_8, "#endif /* NDIS_REGVALS */\n");

  FUNC_9 (VAR_8, "};\n\n");
 } else {
  VAR_7 = FUNC_8(VAR_16, "r");
  if (VAR_7 == ((void*)0))
   FUNC_3(1, "opening .INF file '%s' failed", VAR_16);


  if (FUNC_15(VAR_7, VAR_8) != 0)
   FUNC_4(1, "creating .INF file - no entries created, are you using the correct files?");
  FUNC_6(VAR_7);
 }

 FUNC_9(VAR_8, "\n#ifdef NDIS_IMAGE\n");

 if (VAR_10) {
  VAR_17 = FUNC_19(FUNC_0(VAR_17));
  VAR_15 = (unsigned char *)VAR_17;
  while (*VAR_15) {
   if (*VAR_15 == '.')
    *VAR_15 = '_';
   VAR_15++;
  }
  FUNC_9(VAR_8,
      "\nextern unsigned char ndis_%s_drv_data_start[];\n",
      VAR_17);
  FUNC_9(VAR_8, "static unsigned char *drv_data = "
      "ndis_%s_drv_data_start;\n\n", VAR_17);
  FUNC_1(VAR_17, VAR_18, VAR_11, VAR_13);
  goto done;
 }


 FUNC_9(VAR_8, "\nextern unsigned char drv_data[];\n\n");

 FUNC_9(VAR_8, "__asm__(\".data\");\n");
 FUNC_9(VAR_8, "__asm__(\".globl  drv_data\");\n");
 FUNC_9(VAR_8, "__asm__(\".type   drv_data, @object\");\n");
 FUNC_9(VAR_8, "__asm__(\".size   drv_data, %d\");\n", VAR_13);
 FUNC_9(VAR_8, "__asm__(\"drv_data:\");\n");

 VAR_15 = VAR_11;
 VAR_14 = 0;
 while(VAR_14 < VAR_13) {
  FUNC_9 (VAR_8, "__asm__(\".byte ");
  for (VAR_9 = 0; VAR_9 < 10; VAR_9++) {
   VAR_14++;
   if (VAR_14 == VAR_13) {
    FUNC_9(VAR_8, "0x%.2X\");\n", VAR_15[VAR_9]);
    goto done;
   } else {
    if (VAR_9 == 9)
     FUNC_9(VAR_8, "0x%.2X\");\n", VAR_15[VAR_9]);
    else
     FUNC_9(VAR_8, "0x%.2X, ", VAR_15[VAR_9]);
   }
  }
  VAR_15 += 10;
 }

done:

 FUNC_9(VAR_8, "#endif /* NDIS_IMAGE */\n");

 if (VAR_7 != ((void*)0))
  FUNC_6(VAR_7);
 FUNC_6(VAR_8);
 FUNC_11(VAR_11);
 FUNC_5(0);
}
