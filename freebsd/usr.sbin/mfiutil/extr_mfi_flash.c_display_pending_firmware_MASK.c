
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct mfi_info_component {int build_time; int build_date; int version; int name; } ;
struct mfi_ctrl_info {int pending_image_component_count; struct mfi_info_component* pending_image_component; } ;


 int FUNC_0 (struct mfi_info_component*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,struct mfi_ctrl_info*,int *) ;
 int VAR_1 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct mfi_info_component*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(int VAR_2)
{
 struct mfi_ctrl_info VAR_3;
 struct mfi_info_component VAR_4;
 int VAR_5;
 u_int VAR_6;

 if (FUNC_1(VAR_2, &VAR_3, ((void*)0)) < 0) {
  VAR_5 = VAR_0;
  FUNC_5("Failed to get controller info");
  return (VAR_5);
 }

 FUNC_2("mfi%d Pending Firmware Images:\n", VAR_1);
 FUNC_4(VAR_4.name, "Name");
 FUNC_4(VAR_4.version, "Version");
 FUNC_4(VAR_4.build_date, "Date");
 FUNC_4(VAR_4.build_time, "Time");
 FUNC_3(&VAR_4);
 if (VAR_3.pending_image_component_count > 8)
  VAR_3.pending_image_component_count = 8;
 for (VAR_6 = 0; VAR_6 < VAR_3.pending_image_component_count; VAR_6++)
  FUNC_3(&VAR_3.pending_image_component[VAR_6]);
 FUNC_0(&VAR_4, "");
 for (VAR_6 = 0; VAR_6 < VAR_3.pending_image_component_count; VAR_6++)
  FUNC_0(&VAR_3.pending_image_component[VAR_6], "");

 return (0);
}
