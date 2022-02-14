
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;


 unsigned int FUNC_0 (int) ;
 int FUNC_1 (unsigned int,unsigned int,char*,...) ;
 int FUNC_2 (unsigned int,unsigned int,char*) ;
 unsigned int FUNC_3 (unsigned int*,unsigned int) ;

__attribute__((used)) static void
FUNC_4(void) {
 uint64_t VAR_0, VAR_1, VAR_2, VAR_3;
 unsigned VAR_4;

 VAR_0 = 42;
 VAR_2 = FUNC_3(&VAR_0, 64);
 VAR_0 = 42;
 VAR_3 = FUNC_3(&VAR_0, 64);
 FUNC_1(VAR_2, VAR_3,
     "Repeated generation should produce repeated results");

 VAR_1 = 42;
 VAR_3 = FUNC_3(&VAR_1, 64);
 FUNC_1(VAR_2, VAR_3,
     "Equivalent generation should produce equivalent results");

 VAR_0 = 42;
 VAR_2 = FUNC_3(&VAR_0, 64);
 VAR_3 = FUNC_3(&VAR_0, 64);
 FUNC_2(VAR_2, VAR_3,
     "Full-width results must not immediately repeat");

 VAR_0 = 42;
 VAR_2 = FUNC_3(&VAR_0, 64);
 for (VAR_4 = 63; VAR_4 > 0; VAR_4--) {
  VAR_1 = 42;
  VAR_3 = FUNC_3(&VAR_1, VAR_4);
  FUNC_1((VAR_3 & (FUNC_0(0xffffffffffffffff) << VAR_4)),
      0, "High order bits should be 0, lg_range=%u", VAR_4);
  FUNC_1(VAR_3, (VAR_2 >> (64 - VAR_4)),
      "Expected high order bits of full-width result, "
      "lg_range=%u", VAR_4);
 }
}
