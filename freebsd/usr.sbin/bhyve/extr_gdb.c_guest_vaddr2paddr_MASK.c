
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vm_guest_paging {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct vm_guest_paging*) ;
 int FUNC_1 (int ,int,struct vm_guest_paging*,int ,int ,int *,int*) ;

__attribute__((used)) static int
FUNC_2(int VAR_2, uint64_t VAR_3, uint64_t *VAR_4)
{
 struct vm_guest_paging VAR_5;
 int VAR_6;

 if (FUNC_0(VAR_2, &VAR_5) == -1)
  return (-1);





 if (FUNC_1(VAR_1, VAR_2, &VAR_5, VAR_3, VAR_0, VAR_4,
     &VAR_6) == -1)
  return (-1);
 if (VAR_6)
  return (0);
 return (1);
}
