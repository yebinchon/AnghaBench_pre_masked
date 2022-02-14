
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct ia64_sal_os_state {int dummy; } ;
struct TYPE_6__ {int proc_err; } ;
typedef TYPE_1__ slidx_table_t ;
typedef int sal_log_processor_info_t ;
typedef int peidx_table_t ;
typedef int pal_bus_check_info_t ;
struct TYPE_7__ {scalar_t__ hdr; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int *,struct ia64_sal_os_state*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (void*,TYPE_1__*) ;
 int FUNC_4 (int *,int ,int ) ;
 int VAR_1 ;
 int FUNC_5 (int,TYPE_1__*,int *,int *,struct ia64_sal_os_state*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 TYPE_2__* FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(void *VAR_2, struct ia64_sal_os_state *VAR_3)
{
 int VAR_4;
 int VAR_5;
 slidx_table_t VAR_6;
 peidx_table_t VAR_7;
 pal_bus_check_info_t VAR_8;


 VAR_4 = FUNC_3(VAR_2, &VAR_6);


 VAR_5 = FUNC_6(&VAR_6, VAR_1);


 if (VAR_5 > 1)
  return FUNC_0("Too Many Errors");
 else if (VAR_5 == 0)

  return FUNC_0("Weird SAL record");


 FUNC_2((sal_log_processor_info_t*)
  FUNC_7(&VAR_6.proc_err)->hdr, &VAR_7);


 *((u64*)&VAR_8) = FUNC_4(&VAR_7, VAR_0, 0);


 if (FUNC_1(&VAR_7, &VAR_8, VAR_3))
  return FUNC_0("global MCA");


 return FUNC_5(VAR_4, &VAR_6, &VAR_7,
         &VAR_8, VAR_3);
}
