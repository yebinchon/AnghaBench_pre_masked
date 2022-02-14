
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct eventtimer {scalar_t__ et_frequency; } ;
typedef int sbintime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(struct eventtimer *VAR_3, sbintime_t VAR_4, sbintime_t VAR_5)
{
 uint64_t VAR_6;

 if (VAR_4 != 0) {
  VAR_6 = ((uint32_t)VAR_3->et_frequency * VAR_4) >> 32;
  FUNC_2(FUNC_1() + VAR_6);
  FUNC_0(VAR_2, VAR_1);

  return (0);
 }

 return (VAR_0);

}
