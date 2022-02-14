
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_win {int offset; int res; } ;
struct resource_entry {int offset; int * res; } ;
struct res_proc_context {int count; int list; int error; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct resource_entry*,int ) ;
 struct resource_entry* FUNC_1 (int *,int ) ;

__attribute__((used)) static acpi_status FUNC_2(struct resource_win *VAR_3,
            struct res_proc_context *VAR_4)
{
 struct resource_entry *VAR_5;

 VAR_5 = FUNC_1(((void*)0), 0);
 if (!VAR_5) {
  VAR_4->error = -VAR_2;
  return VAR_0;
 }
 *VAR_5->res = VAR_3->res;
 VAR_5->offset = VAR_3->offset;
 FUNC_0(VAR_5, VAR_4->list);
 VAR_4->count++;
 return VAR_1;
}
