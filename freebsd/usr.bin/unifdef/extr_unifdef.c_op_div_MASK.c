
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Linetype ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (long*,long,scalar_t__,scalar_t__) ;

__attribute__((used)) static Linetype FUNC_2(long *VAR_2, Linetype VAR_3, long VAR_4, Linetype VAR_5, long VAR_6) {
 if (VAR_5 != VAR_1) {
  FUNC_0("eval division by zero");
  return (VAR_0);
 }
 return FUNC_1(VAR_2, VAR_4 / VAR_6, VAR_3, VAR_5);
}
