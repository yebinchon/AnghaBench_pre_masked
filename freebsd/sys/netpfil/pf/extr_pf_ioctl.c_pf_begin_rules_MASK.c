
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct pf_ruleset {TYPE_2__* rules; } ;
struct pf_rule {int dummy; } ;
struct TYPE_3__ {int open; scalar_t__ ticket; int rcount; int ptr; } ;
struct TYPE_4__ {TYPE_1__ inactive; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 struct pf_rule* FUNC_1 (int ) ;
 struct pf_ruleset* FUNC_2 (char const*) ;
 int FUNC_3 (int ,struct pf_rule*) ;

__attribute__((used)) static int
FUNC_4(u_int32_t *VAR_2, int VAR_3, const char *VAR_4)
{
 struct pf_ruleset *VAR_5;
 struct pf_rule *VAR_6;

 FUNC_0();

 if (VAR_3 < 0 || VAR_3 >= VAR_1)
  return (VAR_0);
 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5 == ((void*)0))
  return (VAR_0);
 while ((VAR_6 = FUNC_1(VAR_5->rules[VAR_3].inactive.ptr)) != ((void*)0)) {
  FUNC_3(VAR_5->rules[VAR_3].inactive.ptr, VAR_6);
  VAR_5->rules[VAR_3].inactive.rcount--;
 }
 *VAR_2 = ++VAR_5->rules[VAR_3].inactive.ticket;
 VAR_5->rules[VAR_3].inactive.open = 1;
 return (0);
}
