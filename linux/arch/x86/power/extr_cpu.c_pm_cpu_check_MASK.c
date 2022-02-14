
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x86_cpu_id {scalar_t__ driver_data; } ;
typedef int (* pm_cpu_match_t ) (struct x86_cpu_id const*) ;


 int VAR_0 ;
 struct x86_cpu_id* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(const struct x86_cpu_id *VAR_1)
{
 const struct x86_cpu_id *VAR_2;
 int VAR_3 = 0;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2) {
  pm_cpu_match_t VAR_4;

  VAR_4 = (pm_cpu_match_t)VAR_2->driver_data;
  VAR_3 = VAR_4(VAR_2);
 }

 return VAR_3;
}
