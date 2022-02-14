
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int*) ;

__attribute__((used)) static void
FUNC_2(int VAR_1)
{
 bool VAR_2;
 int VAR_3;

 if (VAR_1 == 0) {
  FUNC_0("0");
  return;
 }
 FUNC_0("%#o<", VAR_1);
 VAR_2 = !FUNC_1(VAR_0, VAR_1, &VAR_3);
 FUNC_0(">");
 if (VAR_2)
  FUNC_0("<invalid>%u", VAR_3);
}
