
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int verifier_state_t ;
typedef int uint32_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int const**,int const*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int const**,int const*,int) ;

__attribute__((used)) static __inline__ verifier_state_t
FUNC_4(uint32_t const **VAR_3, const uint32_t *VAR_4)
{
 uint32_t VAR_5;
 const uint32_t *VAR_6 = *VAR_3;

 if (VAR_4 - VAR_6 < 4) {
  FUNC_0("Illegal termination of video header5 command\n");
  return VAR_2;
 }

 VAR_5 = *VAR_6++ & ~VAR_0;
 if (FUNC_2(VAR_5))
  return VAR_2;

 VAR_5 = *VAR_6++;
 if (*VAR_6++ != 0x00F50000) {
  FUNC_0("Illegal header5 header data\n");
  return VAR_2;
 }
 if (*VAR_6++ != 0x00000000) {
  FUNC_0("Illegal header5 header data\n");
  return VAR_2;
 }
 if (FUNC_1(&VAR_6, VAR_4, VAR_5))
  return VAR_2;
 if ((VAR_5 & 3) && FUNC_3(&VAR_6, VAR_4, 4 - (VAR_5 & 3)))
  return VAR_2;
 *VAR_3 = VAR_6;
 return VAR_1;

}
