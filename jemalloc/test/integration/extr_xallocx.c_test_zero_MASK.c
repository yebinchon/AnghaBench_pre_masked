
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,size_t,...) ;
 int FUNC_3 (void*,char*) ;
 int FUNC_4 (void*,int) ;
 void* FUNC_5 (size_t,int) ;
 int FUNC_6 (void*,int,size_t) ;
 size_t FUNC_7 (size_t,int) ;
 void* FUNC_8 (void*,size_t,int) ;
 int FUNC_9 (void*,int,size_t,size_t) ;
 size_t FUNC_10 (void*,size_t,int ,int) ;

__attribute__((used)) static void
FUNC_11(size_t VAR_2, size_t VAR_3) {
 int VAR_4 = FUNC_0(FUNC_1()) | VAR_1;
 size_t VAR_5, VAR_6;
 void *VAR_7;


 VAR_5 = VAR_3;
 VAR_7 = FUNC_5(VAR_5, VAR_4);
 FUNC_3(VAR_7, "Unexpected mallocx() error");
 FUNC_2(FUNC_9(VAR_7, 0x00, 0, VAR_5), "Memory not filled: sz=%zu",
     VAR_5);





 FUNC_6(VAR_7, 0x7aU, VAR_5);
 FUNC_2(FUNC_9(VAR_7, 0x7aU, 0, VAR_5),
     "Memory not filled: sz=%zu", VAR_5);


 VAR_5 = VAR_2;
 if (FUNC_10(VAR_7, VAR_5, 0, VAR_4) != VAR_5) {
  VAR_7 = FUNC_8(VAR_7, VAR_5, VAR_4);
  FUNC_3(VAR_7, "Unexpected rallocx() failure");
 }
 FUNC_2(FUNC_9(VAR_7, 0x7aU, 0, VAR_5),
     "Memory not filled: sz=%zu", VAR_5);

 for (VAR_5 = VAR_2; VAR_5 < VAR_3; VAR_5 = VAR_6) {
  VAR_6 = FUNC_7(VAR_5+1, VAR_4);
  if (FUNC_10(VAR_7, VAR_5+1, 0, VAR_4) != VAR_6) {
   VAR_7 = FUNC_8(VAR_7, VAR_5+1, VAR_4);
   FUNC_3(VAR_7, "Unexpected rallocx() failure");
  }
  FUNC_2(FUNC_9(VAR_7, 0x7aU, 0, VAR_5),
      "Memory not filled: sz=%zu", VAR_5);
  FUNC_2(FUNC_9(VAR_7, 0x00, VAR_5, VAR_6-VAR_5),
      "Memory not filled: sz=%zu, nsz-sz=%zu", VAR_5, VAR_6-VAR_5);
  FUNC_6((void *)((uintptr_t)VAR_7 + VAR_5), 0x7aU, VAR_6-VAR_5);
  FUNC_2(FUNC_9(VAR_7, 0x7aU, 0, VAR_6),
      "Memory not filled: nsz=%zu", VAR_6);
 }

 FUNC_4(VAR_7, VAR_4);
}
