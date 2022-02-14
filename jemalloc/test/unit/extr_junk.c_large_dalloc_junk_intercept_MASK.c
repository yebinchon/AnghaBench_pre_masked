
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,size_t,size_t) ;
 int FUNC_1 (void*,size_t) ;
 int VAR_1 ;
 void* VAR_2 ;

__attribute__((used)) static void
FUNC_2(void *VAR_3, size_t VAR_4) {
 size_t VAR_5;

 FUNC_1(VAR_3, VAR_4);
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  FUNC_0(((uint8_t *)VAR_3)[VAR_5], VAR_0,
      "Missing junk fill for byte %zu/%zu of deallocated region",
      VAR_5, VAR_4);
 }
 if (VAR_3 == VAR_2) {
  VAR_1 = 1;
 }
}
