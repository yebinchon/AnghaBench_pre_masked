
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blame_entry {scalar_t__ suspect; scalar_t__ s_lno; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct blame_entry *VAR_2 = VAR_0, *VAR_3 = VAR_1;







 if (VAR_2->suspect != VAR_3->suspect)
  return (intptr_t)VAR_2->suspect > (intptr_t)VAR_3->suspect ? 1 : -1;
 if (VAR_2->s_lno == VAR_3->s_lno)
  return 0;
 return VAR_2->s_lno > VAR_3->s_lno ? 1 : -1;
}
