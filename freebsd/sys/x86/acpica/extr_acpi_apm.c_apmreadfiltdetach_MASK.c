
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct knote {struct apm_clone_data* kn_hook; } ;
struct TYPE_2__ {int si_note; } ;
struct apm_clone_data {TYPE_1__ sel_read; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,struct knote*,int ) ;

__attribute__((used)) static void
FUNC_3(struct knote *VAR_1)
{
 struct apm_clone_data *VAR_2;

 FUNC_0(VAR_0);
 VAR_2 = VAR_1->kn_hook;
 FUNC_2(&VAR_2->sel_read.si_note, VAR_1, 0);
 FUNC_1(VAR_0);
}
