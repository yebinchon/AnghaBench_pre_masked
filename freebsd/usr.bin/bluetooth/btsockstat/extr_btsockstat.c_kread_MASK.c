
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int kvm_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,char*,int) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int
FUNC_3(kvm_t *VAR_0, u_long VAR_1, char *VAR_2, int VAR_3)
{
 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0))
  return (-1);

 if (FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3) != VAR_3) {
  FUNC_2("kvm_read: %s", FUNC_0(VAR_0));
  return (-1);
 }

 return (0);
}
