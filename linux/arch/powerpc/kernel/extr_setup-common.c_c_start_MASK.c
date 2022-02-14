
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void *FUNC_2(struct seq_file *VAR_2, loff_t *VAR_3)
{
 if (*VAR_3 == 0)
  *VAR_3 = FUNC_0(VAR_0);
 else
  *VAR_3 = FUNC_1(*VAR_3 - 1, VAR_0);
 if ((*VAR_3) < VAR_1)
  return (void *)(unsigned long)(*VAR_3 + 1);
 return ((void*)0);
}
