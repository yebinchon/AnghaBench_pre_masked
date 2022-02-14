
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_overlay_notify_data {int dummy; } ;
struct fpga_region {int * info; int bridge_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct fpga_region *VAR_0,
           struct of_overlay_notify_data *VAR_1)
{
 FUNC_0(&VAR_0->bridge_list);
 FUNC_1(&VAR_0->bridge_list);
 FUNC_2(VAR_0->info);
 VAR_0->info = ((void*)0);
}
