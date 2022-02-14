
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (unsigned char*) ;

__attribute__((used)) static void
FUNC_6(uint32_t *VAR_3, uint32_t VAR_4)
{
 unsigned char *VAR_5 = (unsigned char *)VAR_3;
 const char *VAR_6;
 int VAR_7, VAR_8 = 8;

 while (VAR_4) {
  for (VAR_7 = 0; VAR_4 && VAR_7 < VAR_8; VAR_7++, VAR_3++, VAR_4 -= 4) {
   VAR_6 = VAR_7 ? " " : "";
   FUNC_2("%s%08x", VAR_6, FUNC_0(*VAR_3));
  }
  FUNC_2("\n");
 }
 FUNC_4(VAR_1, VAR_2);
 FUNC_3(VAR_0);
 FUNC_5(VAR_5);
 FUNC_1(VAR_5);
}
