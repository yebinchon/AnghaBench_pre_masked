
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_sge {int dummy; } ;
typedef int __u32 ;


 scalar_t__ FUNC_0 (size_t,int) ;
 int VAR_0 ;
 void* FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static void *FUNC_2(size_t VAR_1, __u32 VAR_2)
{
 return FUNC_1(FUNC_0(VAR_1, sizeof (struct ib_sge)) +
    VAR_2 * sizeof (struct ib_sge), VAR_0);
}
