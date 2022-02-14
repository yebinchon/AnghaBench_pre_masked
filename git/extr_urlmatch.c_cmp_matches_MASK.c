
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urlmatch_item {scalar_t__ hostmatch_len; scalar_t__ pathmatch_len; scalar_t__ user_matched; } ;



__attribute__((used)) static int FUNC_0(const struct urlmatch_item *VAR_0,
         const struct urlmatch_item *VAR_1)
{
 if (VAR_0->hostmatch_len != VAR_1->hostmatch_len)
  return VAR_0->hostmatch_len < VAR_1->hostmatch_len ? -1 : 1;
 if (VAR_0->pathmatch_len != VAR_1->pathmatch_len)
  return VAR_0->pathmatch_len < VAR_1->pathmatch_len ? -1 : 1;
 if (VAR_0->user_matched != VAR_1->user_matched)
  return VAR_1->user_matched ? -1 : 1;
 return 0;
}
