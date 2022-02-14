
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kinfo_vmobject {int dummy; } ;


 int FUNC_0 (struct kinfo_vmobject*) ;
 int FUNC_1 (struct kinfo_vmobject*) ;
 struct kinfo_vmobject* FUNC_2 (int*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(void)
{
 struct kinfo_vmobject *VAR_0;
 int VAR_1, VAR_2;

 VAR_0 = FUNC_2(&VAR_1);
 if (VAR_0 == ((void*)0)) {
  FUNC_6("Failed to fetch VM object list");
  return;
 }
 FUNC_4("{T:RES/%5s} {T:ACT/%5s} {T:INACT/%5s} {T:REF/%3s} {T:SHD/%3s} "
     "{T:CM/%3s} {T:TP/%2s} {T:PATH/%s}\n");
 FUNC_5("object");
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  FUNC_0(&VAR_0[VAR_2]);
 FUNC_1(VAR_0);
 FUNC_3("object");
}
