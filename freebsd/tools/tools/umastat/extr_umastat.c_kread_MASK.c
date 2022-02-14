
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int kvm_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,unsigned long,void*,size_t) ;

__attribute__((used)) static int
FUNC_1(kvm_t *VAR_2, void *VAR_3, void *VAR_4, size_t VAR_5,
    size_t VAR_6)
{
 ssize_t VAR_7;

 VAR_7 = FUNC_0(VAR_2, (unsigned long)VAR_3 + VAR_6, VAR_4,
     VAR_5);
 if (VAR_7 < 0)
  return (VAR_0);
 if ((size_t)VAR_7 != VAR_5)
  return (VAR_1);
 return (0);
}
