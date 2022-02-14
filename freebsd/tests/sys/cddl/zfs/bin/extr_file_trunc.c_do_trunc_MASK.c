
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_5(int VAR_4)
{
 off_t VAR_5 = 0;

 VAR_5 = FUNC_4() % VAR_0;
 if (FUNC_2(VAR_4, (VAR_1 + VAR_5)) < 0) {
  FUNC_3("truncate");
  FUNC_0(7);
 }

 if (VAR_3) {
  (void) FUNC_1(VAR_2,
      "Truncated at offset %ld\n",
      (VAR_1 + VAR_5));
 }
}
