
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_prot_t ;
typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,scalar_t__,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

int
FUNC_7(void *VAR_4, int VAR_5, int VAR_6)
{
 boolean_t VAR_7;
 vm_offset_t VAR_8, VAR_9;
 vm_prot_t VAR_10;

 FUNC_0((VAR_6 & ~VAR_2) == 0,
     ("illegal ``rw'' argument to kernacc (%x)\n", VAR_6));

 if ((vm_offset_t)VAR_4 + VAR_5 > FUNC_5(VAR_3) ||
     (vm_offset_t)VAR_4 + VAR_5 < (vm_offset_t)VAR_4)
  return (VAR_0);

 VAR_10 = VAR_6;
 VAR_8 = FUNC_2((vm_offset_t)VAR_4);
 VAR_9 = FUNC_1((vm_offset_t)VAR_4 + VAR_5);
 FUNC_4(VAR_3);
 VAR_7 = FUNC_3(VAR_3, VAR_8, VAR_9, VAR_10);
 FUNC_6(VAR_3);
 return (VAR_7 == VAR_1);
}
