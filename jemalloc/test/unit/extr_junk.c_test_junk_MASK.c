
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;


 char VAR_0 ;
 size_t FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,char*,char*) ;
 int FUNC_2 (void*,char*) ;
 int FUNC_3 (int,char*,size_t) ;
 int FUNC_4 (char,char,char*,size_t,size_t) ;
 int FUNC_5 (size_t,size_t,char*) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_8 (size_t,int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_9 (char*,size_t,int ) ;
 size_t FUNC_10 (char*,int ) ;
 scalar_t__ VAR_12 ;
 int FUNC_11 (char*) ;
 size_t FUNC_12 (char*,size_t,int ,int ) ;

__attribute__((used)) static void
FUNC_13(size_t VAR_13, size_t VAR_14) {
 uint8_t *VAR_15;
 size_t VAR_16, VAR_17, VAR_18;

 if (VAR_11) {
  VAR_3 = VAR_1;
  VAR_1 = VAR_2;
  VAR_6 = VAR_4;
  VAR_4 = VAR_5;
  VAR_9 = VAR_7;
  VAR_7 = VAR_8;
 }

 VAR_16 = 0;
 VAR_15 = (uint8_t *)FUNC_8(VAR_13, 0);
 FUNC_2((void *)VAR_15, "Unexpected mallocx() failure");

 for (VAR_17 = FUNC_10(VAR_15, 0); VAR_17 <= VAR_14;
     VAR_16 = VAR_17, VAR_17 = FUNC_10(VAR_15, 0)) {
  if (VAR_16 > 0) {
   FUNC_4(VAR_15[0], 'a',
       "Previously allocated byte %zu/%zu is corrupted",
       FUNC_0(0), VAR_16);
   FUNC_4(VAR_15[VAR_16-1], 'a',
       "Previously allocated byte %zu/%zu is corrupted",
       VAR_16-1, VAR_16);
  }

  for (VAR_18 = VAR_16; VAR_18 < VAR_17; VAR_18++) {
   if (VAR_10) {
    FUNC_4(VAR_15[VAR_18], VAR_0,
        "Newly allocated byte %zu/%zu isn't "
        "junk-filled", VAR_18, VAR_17);
   }
   VAR_15[VAR_18] = 'a';
  }

  if (FUNC_12(VAR_15, VAR_17+1, 0, 0) == VAR_17) {
   uint8_t *VAR_19;
   FUNC_11(VAR_15);
   VAR_19 = (uint8_t *)FUNC_9(VAR_15, VAR_17+1, 0);
   FUNC_2((void *)VAR_19,
       "Unexpected rallocx() failure");
   FUNC_5(FUNC_10(VAR_19, 0), VAR_17+1,
       "Unexpectedly small rallocx() result");
   if (!FUNC_6()) {
    FUNC_1(VAR_15, VAR_19,
        "Unexpected in-place rallocx()");
    FUNC_3(!VAR_11 || VAR_12,
        "Expected region of size %zu to be "
        "junk-filled", VAR_17);
   }
   VAR_15 = VAR_19;
  }
 }

 FUNC_11(VAR_15);
 FUNC_7(VAR_15, 0);
 FUNC_3(!VAR_11 || VAR_12,
     "Expected region of size %zu to be junk-filled", VAR_17);

 if (VAR_11) {
  VAR_1 = VAR_3;
  VAR_4 = VAR_6;
  VAR_7 = VAR_9;
 }
}
