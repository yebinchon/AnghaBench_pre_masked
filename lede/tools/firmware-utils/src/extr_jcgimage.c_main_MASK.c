
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uimage_header {int ih_dcrc; } ;
struct jcg_header {int dummy; } ;


 void* VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,void*,size_t) ;
 int FUNC_3 (int,char*,char*,...) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (int,size_t) ;
 int FUNC_6 (int,char**,char*) ;
 int FUNC_7 (void*,size_t,char*) ;
 int FUNC_8 (struct uimage_header*,size_t,size_t) ;
 void* FUNC_9 (int *,size_t,int,int ,int,int ) ;
 int FUNC_10 (void*,size_t) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,int,int) ;
 int FUNC_13 (char*,size_t*) ;
 char* VAR_11 ;
 int VAR_12 ;
 size_t FUNC_14 (int,void*,size_t) ;
 int FUNC_15 () ;
 int FUNC_16 () ;

int
FUNC_17(int VAR_13, char **VAR_14)
{
 struct jcg_header *VAR_15;
 struct uimage_header *VAR_16;
 int VAR_17;
 char *VAR_18 = ((void*)0);
 char *VAR_19 = ((void*)0);
 char *VAR_20 = ((void*)0);
 char *VAR_21 = ((void*)0);
 int VAR_22 = VAR_5;
 int VAR_23, VAR_24, VAR_25;
 size_t VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
 void *VAR_32;


 FUNC_0(sizeof(struct jcg_header) == 512);
 FUNC_0(sizeof(struct uimage_header) == 64);
 FUNC_15();

 while ((VAR_17 = FUNC_6(VAR_13, VAR_14, "o:k:f:u:v:h")) != -1) {
  switch (VAR_17) {
  case 'o':
   VAR_18 = VAR_11;
   break;
  case 'k':
   if (VAR_22 == VAR_4) {
    FUNC_4(1,"-k cannot be combined with -u");
   }
   VAR_22 = VAR_3;
   VAR_19 = VAR_11;
   break;
  case 'f':
   if (VAR_22 == VAR_4) {
    FUNC_4(1,"-f cannot be combined with -u");
   }
   VAR_22 = VAR_3;
   VAR_20 = VAR_11;
   break;
  case 'u':
   if (VAR_22 == VAR_3) {
    FUNC_4(1,"-u cannot be combined with -k and -r");
   }
   VAR_22 = VAR_4;
   VAR_19 = VAR_11;
   break;
  case 'v':
   VAR_21 = VAR_11;
   break;
  case 'h':
  default:
   FUNC_16();
  }
 }
 if (VAR_12 != VAR_13) {
  FUNC_4(1, "illegal arg \"%s\"", VAR_14[VAR_12]);
 }
 if (VAR_18 == ((void*)0)) {
  FUNC_4(1, "no output file specified");
 }
 if (VAR_22 == VAR_5) {
  FUNC_4(1, "specify either -u or -k and -r");
 }
 if (VAR_22 == VAR_3) {
  if (VAR_19 == ((void*)0) || VAR_20 == ((void*)0)) {
   FUNC_4(1,"need -k and -r");
  }
  VAR_25 = FUNC_13(VAR_20, &VAR_27);
 }
 VAR_24 = FUNC_13(VAR_19, &VAR_26);
 if (VAR_22 == VAR_4) {
  VAR_30 = sizeof(*VAR_15);
  VAR_28 = VAR_26 + 4;
  VAR_29 = sizeof(*VAR_15) + VAR_28;
 } else {
  VAR_30 = sizeof(*VAR_15) + sizeof(*VAR_16);
  VAR_31 = sizeof(*VAR_15) + sizeof(*VAR_16) + VAR_26;
  VAR_28 = sizeof(*VAR_16) + VAR_26 + VAR_27;
  VAR_29 = sizeof(*VAR_15) + VAR_28;
 }

 if (VAR_29 > VAR_2) {
  FUNC_4(1,"payload too large: %zd > %zd\n", VAR_29, VAR_2);
 }

 VAR_23 = FUNC_12(VAR_18, VAR_7 | VAR_6 | VAR_8, 00644);
 if (VAR_23 < 0) {
  FUNC_3(1, "cannot open \"%s\"", VAR_18);
 }

 if (FUNC_5(VAR_23, VAR_29) == -1) {
  FUNC_3(1, "cannot grow \"%s\" to %zd bytes", VAR_18, VAR_29);
 }
 VAR_32 = FUNC_9(((void*)0), VAR_29, VAR_9|VAR_10, VAR_1, VAR_23, 0);
 VAR_16 = VAR_32 + sizeof(*VAR_15);
 if (VAR_32 == VAR_0) {
  FUNC_3(1, "cannot mmap \"%s\"", VAR_18);
 }

 if (FUNC_14(VAR_24, VAR_32 + VAR_30, VAR_26) != VAR_26) {
  FUNC_3(1, "cannot copy %s", VAR_19);
 }

 if (VAR_22 == VAR_3) {
  if (FUNC_14(VAR_25, VAR_32+VAR_31, VAR_27) != VAR_27) {
   FUNC_3(1, "cannot copy %s", VAR_20);
  }
  FUNC_8(VAR_16, VAR_26, VAR_27);
 } else if (VAR_22 == VAR_4) {
  FUNC_2(FUNC_11(VAR_16->ih_dcrc), (void*)VAR_16 + sizeof(*VAR_16),
    VAR_28 - sizeof(*VAR_16));
 }
 FUNC_7(VAR_32, VAR_28, VAR_21);
 FUNC_10(VAR_32, VAR_29);
 FUNC_1(VAR_23);
 return 0;
}
