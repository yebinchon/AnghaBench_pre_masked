
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (void*,char*) ;
 int FUNC_2 (int,int,char*,size_t,size_t) ;
 int FUNC_3 (int*,int ) ;
 scalar_t__ FUNC_4 (size_t,int ) ;
 scalar_t__ FUNC_5 (int*,size_t,int ) ;
 size_t FUNC_6 (int*,int ) ;
 size_t FUNC_7 (int*,size_t,int ,int ) ;

__attribute__((used)) static void
FUNC_8(size_t VAR_1, size_t VAR_2) {
 uint8_t *VAR_3;
 size_t VAR_4, VAR_5, VAR_6;


 VAR_4 = 0;
 VAR_3 = (uint8_t *)FUNC_4(VAR_1, 0);
 FUNC_1((void *)VAR_3, "Unexpected mallocx() failure");

 for (VAR_5 = FUNC_6(VAR_3, 0); VAR_5 <= VAR_2;
     VAR_4 = VAR_5, VAR_5 = FUNC_6(VAR_3, 0)) {
  if (VAR_4 > 0) {
   FUNC_2(VAR_3[0], ((uint8_t)0x61),
       "Previously allocated byte %zu/%zu is corrupted",
       FUNC_0(0), VAR_4);
   FUNC_2(VAR_3[VAR_4-1], ((uint8_t)0x61),
       "Previously allocated byte %zu/%zu is corrupted",
       VAR_4-1, VAR_4);
  }

  for (VAR_6 = VAR_4; VAR_6 < VAR_5; VAR_6++) {
   FUNC_2(VAR_3[VAR_6], 0x0,
       "Newly allocated byte %zu/%zu isn't zero-filled",
       VAR_6, VAR_5);
   VAR_3[VAR_6] = ((uint8_t)0x61);
  }

  if (FUNC_7(VAR_3, VAR_5+1, 0, 0) == VAR_5) {
   VAR_3 = (uint8_t *)FUNC_5(VAR_3, VAR_5+1, 0);
   FUNC_1((void *)VAR_3,
       "Unexpected rallocx() failure");
  }
 }

 FUNC_3(VAR_3, 0);

}
