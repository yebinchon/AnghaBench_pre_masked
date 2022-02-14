
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spanhash {scalar_t__ hashval; int cnt; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct spanhash *VAR_2 = VAR_0;
 const struct spanhash *VAR_3 = VAR_1;


 if (!VAR_2->cnt)
  return !VAR_3->cnt ? 0 : 1;
 if (!VAR_3->cnt)
  return -1;
 return VAR_2->hashval < VAR_3->hashval ? -1 :
  VAR_2->hashval > VAR_3->hashval ? 1 : 0;
}
