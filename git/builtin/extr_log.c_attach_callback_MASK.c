
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {char const* mime_boundary; int no_inline; } ;
struct option {scalar_t__ value; } ;


 char const* VAR_0 ;

__attribute__((used)) static int FUNC_0(const struct option *VAR_1, const char *VAR_2, int VAR_3)
{
 struct rev_info *VAR_4 = (struct rev_info *)VAR_1->value;
 if (VAR_3)
  VAR_4->mime_boundary = ((void*)0);
 else if (VAR_2)
  VAR_4->mime_boundary = VAR_2;
 else
  VAR_4->mime_boundary = VAR_0;
 VAR_4->no_inline = VAR_3 ? 0 : 1;
 return 0;
}
