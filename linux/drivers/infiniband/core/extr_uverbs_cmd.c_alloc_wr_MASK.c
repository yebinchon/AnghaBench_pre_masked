
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_sge {int dummy; } ;
typedef int __u32 ;


 int FUNC_0 (size_t,int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int,int ) ;

__attribute__((used)) static void *FUNC_2(size_t VAR_2, __u32 VAR_3)
{
 if (VAR_3 >= (VAR_1 - FUNC_0(VAR_2, sizeof (struct ib_sge))) /
         sizeof (struct ib_sge))
  return ((void*)0);

 return FUNC_1(FUNC_0(VAR_2, sizeof (struct ib_sge)) +
    VAR_3 * sizeof (struct ib_sge), VAR_0);
}
