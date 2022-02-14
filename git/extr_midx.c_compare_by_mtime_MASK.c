
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repack_info {scalar_t__ mtime; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct repack_info *VAR_2, *VAR_3;

 VAR_2 = (const struct repack_info *)VAR_0;
 VAR_3 = (const struct repack_info *)VAR_1;

 if (VAR_2->mtime < VAR_3->mtime)
  return -1;
 if (VAR_2->mtime > VAR_3->mtime)
  return 1;
 return 0;
}
