
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atomic_zu_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (size_t,size_t,char*,...) ;
 int FUNC_2 (size_t,size_t,char*) ;
 int FUNC_3 (int *,int,int ) ;
 size_t FUNC_4 (int *,unsigned int,int) ;

__attribute__((used)) static void
FUNC_5(bool VAR_3) {
 atomic_zu_t VAR_4, VAR_5;
 size_t VAR_6, VAR_7;
 unsigned VAR_8;

 FUNC_3(&VAR_4, 42, VAR_0);
 VAR_6 = FUNC_4(&VAR_4, FUNC_0(1) << (3 + VAR_1), VAR_3);
 FUNC_3(&VAR_4, 42, VAR_0);
 VAR_7 = FUNC_4(&VAR_4, FUNC_0(1) << (3 + VAR_1), VAR_3);
 FUNC_1(VAR_6, VAR_7,
     "Repeated generation should produce repeated results");

 FUNC_3(&VAR_5, 42, VAR_0);
 VAR_7 = FUNC_4(&VAR_5, FUNC_0(1) << (3 + VAR_1), VAR_3);
 FUNC_1(VAR_6, VAR_7,
     "Equivalent generation should produce equivalent results");

 FUNC_3(&VAR_4, 42, VAR_0);
 VAR_6 = FUNC_4(&VAR_4, FUNC_0(1) << (3 + VAR_1), VAR_3);
 VAR_7 = FUNC_4(&VAR_4, FUNC_0(1) << (3 + VAR_1), VAR_3);
 FUNC_2(VAR_6, VAR_7,
     "Full-width results must not immediately repeat");

 FUNC_3(&VAR_4, 42, VAR_0);
 VAR_6 = FUNC_4(&VAR_4, FUNC_0(1) << (3 + VAR_1), VAR_3);
 for (VAR_8 = (FUNC_0(1) << (3 + VAR_1)) - 1; VAR_8 > 0;
     VAR_8--) {
  FUNC_3(&VAR_5, 42, VAR_0);
  VAR_7 = FUNC_4(&VAR_5, VAR_8, VAR_3);
  FUNC_1((VAR_7 & (VAR_2 << VAR_8)),
      0, "High order bits should be 0, lg_range=%u", VAR_8);
  FUNC_1(VAR_7, (VAR_6 >> ((FUNC_0(1) << (3 + VAR_1)) -
      VAR_8)), "Expected high order bits of full-width "
      "result, lg_range=%u", VAR_8);
 }
}
