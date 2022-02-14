
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pf_state_scrub {int dummy; } ;
struct pf_frent {int dummy; } ;
struct pf_fragment {int dummy; } ;
struct TYPE_2__ {int limit; void* zone; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 TYPE_1__* VAR_6 ;
 void* VAR_7 ;
 void* FUNC_1 (char*,int,int *,int *,int *,int *,int ,int ) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (void*,char*) ;

void
FUNC_4(void)
{

 VAR_3 = FUNC_1("pf frags", sizeof(struct pf_fragment),
     ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_2, 0);
 VAR_5 = FUNC_1("pf frag entries", sizeof(struct pf_frent),
     ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_2, 0);
 VAR_7 = FUNC_1("pf state scrubs",
     sizeof(struct pf_state_scrub), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
     VAR_2, 0);

 VAR_6[VAR_1].zone = VAR_5;
 VAR_6[VAR_1].limit = VAR_0;
 FUNC_2(VAR_5, VAR_0);
 FUNC_3(VAR_5, "PF frag entries limit reached");

 FUNC_0(&VAR_4);
}
