
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hdcp_srm_header {int dummy; } ;


 int FUNC_0 (int const*,size_t) ;
 int FUNC_1 (int const*,size_t) ;
 scalar_t__ FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*) ;

__attribute__((used)) static void FUNC_4(const u8 *VAR_0, size_t VAR_1)
{
 if (VAR_1 < sizeof(struct hdcp_srm_header))
  return;

 if (FUNC_2(VAR_0))
  FUNC_0(VAR_0, VAR_1);
 else if (FUNC_3(VAR_0))
  FUNC_1(VAR_0, VAR_1);
}
