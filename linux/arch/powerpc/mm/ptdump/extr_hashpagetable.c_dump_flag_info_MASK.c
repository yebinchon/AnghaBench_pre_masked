
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pg_state {int seq; } ;
struct flag_info {int mask; int val; int shift; char* set; char* clear; scalar_t__ is_val; } ;


 int FUNC_0 (int ,char*,char const*,...) ;

__attribute__((used)) static void FUNC_1(struct pg_state *VAR_0, const struct flag_info
  *VAR_1, u64 VAR_2, int VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++, VAR_1++) {
  const char *VAR_5 = ((void*)0);
  u64 VAR_6;


  if (VAR_1->mask == 0)
   continue;

  if (VAR_1->is_val) {
   VAR_6 = VAR_2 & VAR_1->val;
   if (VAR_1->shift)
    VAR_6 = VAR_6 >> VAR_1->shift;
   FUNC_0(VAR_0->seq, "  %s:%llx", VAR_1->set, VAR_6);
  } else {
   if ((VAR_2 & VAR_1->mask) == VAR_1->val)
    VAR_5 = VAR_1->set;
   else
    VAR_5 = VAR_1->clear;
   if (VAR_5)
    FUNC_0(VAR_0->seq, "  %s", VAR_5);
  }
 }
}
