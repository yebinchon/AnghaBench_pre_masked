
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct dmar_unit {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (struct dmar_unit*,scalar_t__) ;
 int FUNC_2 (struct dmar_unit*,scalar_t__,int) ;

__attribute__((used)) static inline uint64_t
FUNC_3(struct dmar_unit *VAR_4, uint64_t VAR_5, int VAR_6)
{
 uint64_t VAR_7;

 FUNC_2(VAR_4, VAR_6 + VAR_3, VAR_2 |
     VAR_0 | VAR_1 | VAR_5);
 for (;;) {
  VAR_7 = FUNC_1(VAR_4, VAR_6 + VAR_3);
  if ((VAR_7 & VAR_2) == 0)
   break;
  FUNC_0();
 }
 return (VAR_7);
}
