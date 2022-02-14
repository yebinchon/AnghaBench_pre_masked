
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct temp_data {int is_pkg_data; unsigned int cpu; int update_lock; int attr_size; int cpu_core_id; int status_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 struct temp_data* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct temp_data *FUNC_3(unsigned int VAR_4, int VAR_5)
{
 struct temp_data *VAR_6;

 VAR_6 = FUNC_1(sizeof(struct temp_data), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->status_reg = VAR_5 ? VAR_2 :
       VAR_3;
 VAR_6->is_pkg_data = VAR_5;
 VAR_6->cpu = VAR_4;
 VAR_6->cpu_core_id = FUNC_0(VAR_4);
 VAR_6->attr_size = VAR_1;
 FUNC_2(&VAR_6->update_lock);
 return VAR_6;
}
