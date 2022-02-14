
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int ntlm_client ;
typedef int ntlm_buf ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *,int *,int ) ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static inline bool FUNC_3(
 ntlm_client *VAR_2,
 ntlm_buf *VAR_3,
 size_t VAR_4,
 size_t VAR_5)
{
 if (VAR_4 > VAR_0) {
  FUNC_0(VAR_2, "invalid string, too long");
  return 0;
 }

 if (VAR_5 > VAR_1) {
  FUNC_0(VAR_2, "invalid string, invalid offset");
  return 0;
 }

 return FUNC_1(VAR_2, VAR_3, (uint16_t)VAR_4) &&
  FUNC_1(VAR_2, VAR_3, (uint16_t)VAR_4) &&
  FUNC_2(VAR_2, VAR_3, (uint32_t)VAR_5);
}
