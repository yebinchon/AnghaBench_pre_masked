
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int dummy; } ;
struct attr_stack {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 struct attr_stack* FUNC_1 (char const*,int) ;
 struct attr_stack* FUNC_2 (struct index_state const*,char const*,int) ;
 struct attr_stack* FUNC_3 (int,int) ;

__attribute__((used)) static struct attr_stack *FUNC_4(const struct index_state *VAR_4,
        const char *VAR_5, int VAR_6)
{
 struct attr_stack *VAR_7 = ((void*)0);

 if (VAR_3 == VAR_2) {
  VAR_7 = FUNC_2(VAR_4, VAR_5, VAR_6);
 } else if (!FUNC_0()) {
  if (VAR_3 == VAR_1) {
   VAR_7 = FUNC_2(VAR_4, VAR_5, VAR_6);
   if (!VAR_7)
    VAR_7 = FUNC_1(VAR_5, VAR_6);
  } else if (VAR_3 == VAR_0) {
   VAR_7 = FUNC_1(VAR_5, VAR_6);
   if (!VAR_7)






    VAR_7 = FUNC_2(VAR_4, VAR_5, VAR_6);
  }
 }

 if (!VAR_7)
  VAR_7 = FUNC_3(1, sizeof(*VAR_7));
 return VAR_7;
}
