
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opal_msg {int params; } ;
struct opal_hmi_event {int severity; int type; scalar_t__ disposition; int pir; int hmer; } ;
typedef int evt ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct opal_hmi_event*,int *,int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int,int,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1, struct opal_msg *VAR_2)
{
 struct opal_hmi_event VAR_3;

 FUNC_0(&VAR_3, &VAR_2->params, sizeof(VAR_3));
 FUNC_2("Hypervisor Maintenance Event received"
     "(Severity %d, type %d, HMER: %016lx).\n",
     VAR_3.severity, VAR_3.type, VAR_3.hmer);

 if (VAR_3.disposition == VAR_0)
  FUNC_1("Unrecoverable hypervisor maintenance exception on CPU %d",
      VAR_3.pir);

 return;
}
