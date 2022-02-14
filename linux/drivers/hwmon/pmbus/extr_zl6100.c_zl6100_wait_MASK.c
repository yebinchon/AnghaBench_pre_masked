
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zl6100_data {scalar_t__ delay; int access; } ;
typedef scalar_t__ s64 ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(const struct zl6100_data *VAR_0)
{
 if (VAR_0->delay) {
  s64 VAR_1 = FUNC_1(FUNC_0(), VAR_0->access);
  if (VAR_1 < VAR_0->delay)
   FUNC_2(VAR_0->delay - VAR_1);
 }
}
