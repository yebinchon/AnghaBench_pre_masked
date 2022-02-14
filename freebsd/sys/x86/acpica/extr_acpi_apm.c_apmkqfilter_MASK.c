
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct knote {int * kn_fop; struct apm_clone_data* kn_hook; } ;
struct cdev {int dummy; } ;
struct TYPE_2__ {int si_note; } ;
struct apm_clone_data {TYPE_1__ sel_read; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (void**) ;
 int FUNC_3 (int *,struct knote*,int ) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_2, struct knote *VAR_3)
{
 struct apm_clone_data *VAR_4;

 FUNC_2((void **)&VAR_4);
 FUNC_0(VAR_0);
 VAR_3->kn_hook = VAR_4;
 VAR_3->kn_fop = &VAR_1;
 FUNC_3(&VAR_4->sel_read.si_note, VAR_3, 0);
 FUNC_1(VAR_0);
 return (0);
}
