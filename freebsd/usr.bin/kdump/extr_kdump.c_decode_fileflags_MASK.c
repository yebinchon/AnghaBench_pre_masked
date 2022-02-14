
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ fflags_t ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int ,scalar_t__,scalar_t__*) ;

__attribute__((used)) static void
FUNC_2(fflags_t VAR_1)
{
 bool VAR_2;
 fflags_t VAR_3;

 if (VAR_1 == 0) {
  FUNC_0("0");
  return;
 }
 FUNC_0("%#x<", VAR_1);
 VAR_2 = !FUNC_1(VAR_0, VAR_1, &VAR_3);
 FUNC_0(">");
 if (VAR_2)
  FUNC_0("<invalid>%u", VAR_3);
}
