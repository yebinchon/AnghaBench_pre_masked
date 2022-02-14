
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct partition_entry {scalar_t__* index; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(const struct partition_entry *VAR_0,
    const struct partition_entry *VAR_1)
{
 FUNC_0(VAR_0 != ((void*)0));
 FUNC_0(VAR_1 != ((void*)0));

 if (VAR_0->index[0] < VAR_1->index[0])
  return (-1);

 if (VAR_0->index[0] > VAR_1->index[0])
  return (+1);

 if (VAR_0->index[1] < VAR_1->index[1])
  return (-1);

 if (VAR_0->index[1] > VAR_1->index[1])
  return (+1);

 return (0);
}
