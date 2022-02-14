
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct match_attr {int dummy; } ;
struct attr_stack {scalar_t__ num_matches; struct match_attr** attrs; int alloc; } ;


 int FUNC_0 (struct match_attr**,scalar_t__,int ) ;
 struct match_attr* FUNC_1 (char const*,char const*,int,int) ;

__attribute__((used)) static void FUNC_2(struct attr_stack *VAR_0,
        const char *VAR_1,
        const char *VAR_2,
        int VAR_3,
        int VAR_4)
{
 struct match_attr *VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 if (!VAR_5)
  return;
 FUNC_0(VAR_0->attrs, VAR_0->num_matches + 1, VAR_0->alloc);
 VAR_0->attrs[VAR_0->num_matches++] = VAR_5;
}
