
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int8_t ;


 int FUNC_0 (char*,void const*,size_t) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void
FUNC_2(const void *VAR_0, size_t VAR_1, const void *VAR_2, size_t VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  if (((const u_int8_t *)VAR_0)[VAR_4] != ((const u_int8_t *)VAR_2)[VAR_4]) {
   FUNC_1("first difference at byte %u\n", VAR_4);
   break;
  }
 FUNC_0("Generated", VAR_0, VAR_1);
 FUNC_0("Reference", VAR_2, VAR_3);
}
