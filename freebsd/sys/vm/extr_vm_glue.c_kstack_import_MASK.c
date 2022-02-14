
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_object_t ;
struct domainset {int dummy; } ;


 struct domainset* FUNC_0 (int) ;
 struct domainset* FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct domainset*,int *,int ) ;

__attribute__((used)) static int
FUNC_3(void *VAR_2, void **VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 struct domainset *VAR_7;
 vm_object_t VAR_8;
 int VAR_9;

 if (VAR_5 == VAR_0)
  VAR_7 = FUNC_1();
 else
  VAR_7 = FUNC_0(VAR_5);

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  VAR_3[VAR_9] = (void *)FUNC_2(VAR_7, &VAR_8,
      VAR_1);
  if (VAR_3[VAR_9] == ((void*)0))
   break;
 }
 return (VAR_9);
}
