
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct pf_ruleset {TYPE_3__* rules; } ;
struct pf_rulequeue {int dummy; } ;
struct pf_rule {int dummy; } ;
struct TYPE_5__ {scalar_t__ ticket; scalar_t__ rcount; scalar_t__ open; struct pf_rule** ptr_array; struct pf_rulequeue* ptr; } ;
struct TYPE_4__ {scalar_t__ rcount; scalar_t__ ticket; struct pf_rulequeue* ptr; struct pf_rule** ptr_array; } ;
struct TYPE_6__ {TYPE_2__ inactive; TYPE_1__ active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 struct pf_rule* FUNC_1 (struct pf_rulequeue*) ;
 int FUNC_2 (struct pf_rule**,int ) ;
 int FUNC_3 (struct pf_rulequeue*) ;
 struct pf_ruleset* FUNC_4 (char*) ;
 struct pf_ruleset VAR_4 ;
 int FUNC_5 (struct pf_ruleset*) ;
 int FUNC_6 (struct pf_ruleset*) ;
 int FUNC_7 (struct pf_rulequeue*,struct pf_rule*) ;

__attribute__((used)) static int
FUNC_8(u_int32_t VAR_5, int VAR_6, char *VAR_7)
{
 struct pf_ruleset *VAR_8;
 struct pf_rule *VAR_9, **VAR_10;
 struct pf_rulequeue *VAR_11;
 int VAR_12;
 u_int32_t VAR_13;

 FUNC_0();

 if (VAR_6 < 0 || VAR_6 >= VAR_3)
  return (VAR_1);
 VAR_8 = FUNC_4(VAR_7);
 if (VAR_8 == ((void*)0) || !VAR_8->rules[VAR_6].inactive.open ||
     VAR_5 != VAR_8->rules[VAR_6].inactive.ticket)
  return (VAR_0);


 if (VAR_8 == &VAR_4) {
  VAR_12 = FUNC_6(VAR_8);
  if (VAR_12 != 0)
   return (VAR_12);
 }


 VAR_11 = VAR_8->rules[VAR_6].active.ptr;
 VAR_13 = VAR_8->rules[VAR_6].active.rcount;
 VAR_10 = VAR_8->rules[VAR_6].active.ptr_array;

 VAR_8->rules[VAR_6].active.ptr =
     VAR_8->rules[VAR_6].inactive.ptr;
 VAR_8->rules[VAR_6].active.ptr_array =
     VAR_8->rules[VAR_6].inactive.ptr_array;
 VAR_8->rules[VAR_6].active.rcount =
     VAR_8->rules[VAR_6].inactive.rcount;
 VAR_8->rules[VAR_6].inactive.ptr = VAR_11;
 VAR_8->rules[VAR_6].inactive.ptr_array = VAR_10;
 VAR_8->rules[VAR_6].inactive.rcount = VAR_13;

 VAR_8->rules[VAR_6].active.ticket =
     VAR_8->rules[VAR_6].inactive.ticket;
 FUNC_3(VAR_8->rules[VAR_6].active.ptr);



 while ((VAR_9 = FUNC_1(VAR_11)) != ((void*)0))
  FUNC_7(VAR_11, VAR_9);
 if (VAR_8->rules[VAR_6].inactive.ptr_array)
  FUNC_2(VAR_8->rules[VAR_6].inactive.ptr_array, VAR_2);
 VAR_8->rules[VAR_6].inactive.ptr_array = ((void*)0);
 VAR_8->rules[VAR_6].inactive.rcount = 0;
 VAR_8->rules[VAR_6].inactive.open = 0;
 FUNC_5(VAR_8);

 return (0);
}
