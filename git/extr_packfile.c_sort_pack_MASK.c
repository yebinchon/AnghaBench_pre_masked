
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packed_git {int pack_local; scalar_t__ mtime; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct packed_git *VAR_2 = VAR_0;
 const struct packed_git *VAR_3 = VAR_1;
 int VAR_4;







 VAR_4 = VAR_2->pack_local - VAR_3->pack_local;
 if (VAR_4)
  return -VAR_4;






 if (VAR_2->mtime < VAR_3->mtime)
  return 1;
 else if (VAR_2->mtime == VAR_3->mtime)
  return 0;
 return -1;
}
