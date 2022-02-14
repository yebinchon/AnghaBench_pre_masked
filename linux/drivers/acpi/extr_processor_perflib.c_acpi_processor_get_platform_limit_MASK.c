
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct acpi_processor {int performance_platform_limit; int id; TYPE_2__* performance; int perflib_req; int handle; } ;
typedef scalar_t__ acpi_status ;
struct TYPE_4__ {unsigned long long state_count; TYPE_1__* states; } ;
struct TYPE_3__ {int core_frequency; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,char*,int *,unsigned long long*) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (char*,int ,int,char*) ;
 int FUNC_6 (char*,int ,int) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct acpi_processor *VAR_5)
{
 acpi_status VAR_6 = 0;
 unsigned long long VAR_7 = 0;
 int VAR_8;

 if (!VAR_5)
  return -VAR_2;





 VAR_6 = FUNC_2(VAR_5->handle, "_PPC", ((void*)0), &VAR_7);

 if (VAR_6 != VAR_1)
  VAR_4 = 1;

 if (FUNC_1(VAR_6) && VAR_6 != VAR_1) {
  FUNC_0((VAR_0, VAR_6, "Evaluating _PPC"));
  return -VAR_3;
 }

 FUNC_5("CPU %d: _PPC is %d - frequency %s limited\n", VAR_5->id,
         (int)VAR_7, VAR_7 ? "" : "not");

 VAR_5->performance_platform_limit = (int)VAR_7;

 if (VAR_7 >= VAR_5->performance->state_count ||
     FUNC_7(!FUNC_3(&VAR_5->perflib_req)))
  return 0;

 VAR_8 = FUNC_4(&VAR_5->perflib_req,
   VAR_5->performance->states[VAR_7].core_frequency * 1000);
 if (VAR_8 < 0) {
  FUNC_6("Failed to update perflib freq constraint: CPU%d (%d)\n",
   VAR_5->id, VAR_8);
 }

 return 0;
}
