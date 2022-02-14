
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct intr_map_data_fdt {int ncells; int cells; int iparent; } ;
struct intr_map_data {int dummy; } ;
typedef int phandle_t ;
typedef int pcell_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,size_t,int) ;
 int FUNC_1 (int *,int ,struct intr_map_data*) ;
 int FUNC_2 (int ,int *,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3, device_t VAR_4, phandle_t VAR_5, int VAR_6,
    pcell_t *VAR_7)
{
 struct intr_map_data_fdt *VAR_8;
 size_t VAR_9;
 u_int VAR_10;

 VAR_9 = sizeof(*VAR_8) + VAR_6 * sizeof(pcell_t);
 VAR_8 = (struct intr_map_data_fdt *)FUNC_0(
     VAR_0, VAR_9, VAR_1 | VAR_2);
 VAR_8->iparent = VAR_5;
 VAR_8->ncells = VAR_6;
 FUNC_2(VAR_8->cells, VAR_7, VAR_6 * sizeof(pcell_t));
 VAR_10 = FUNC_1(((void*)0), VAR_5, (struct intr_map_data *)VAR_8);

 return (VAR_10);
}
