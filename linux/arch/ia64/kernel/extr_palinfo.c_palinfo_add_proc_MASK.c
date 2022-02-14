
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct proc_dir_entry {int dummy; } ;
struct TYPE_3__ {unsigned int req_cpu; int func_id; scalar_t__ value; } ;
typedef TYPE_1__ pal_func_cpu_u_t ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (int ,int ,struct proc_dir_entry*,int ,void*) ;
 struct proc_dir_entry* FUNC_1 (char*,int ) ;
 int VAR_4 ;
 int FUNC_2 (char*,char*,unsigned int) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_5)
{
 pal_func_cpu_u_t VAR_6;
 struct proc_dir_entry *VAR_7;
 int VAR_8;
 char VAR_9[3+4+1];
 FUNC_2(VAR_9, "cpu%d", VAR_5);

 VAR_7 = FUNC_1(VAR_9, VAR_2);
 if (!VAR_7)
  return -VAR_0;

 VAR_6.req_cpu = VAR_5;

 for (VAR_8=0; VAR_8 < VAR_1; VAR_8++) {
  VAR_6.func_id = VAR_8;
  FUNC_0(VAR_3[VAR_8].name, 0, VAR_7,
    VAR_4, (void *)VAR_6.value);
 }
 return 0;
}
