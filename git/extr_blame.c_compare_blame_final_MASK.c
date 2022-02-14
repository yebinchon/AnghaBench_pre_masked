
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blame_entry {scalar_t__ lno; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 return ((struct blame_entry *)VAR_0)->lno > ((struct blame_entry *)VAR_1)->lno
  ? 1 : -1;
}
