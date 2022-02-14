
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zone_args ;
typedef int uint32_t ;
struct TYPE_3__ {int zone_mode; } ;
struct TYPE_4__ {TYPE_1__ disk_params; } ;
struct disk_zone_args {TYPE_2__ zone_params; int zone_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct disk_zone_args*,int) ;
 int FUNC_1 (int,int ,struct disk_zone_args*) ;
 int FUNC_2 (char*,size_t,char*,...) ;

__attribute__((used)) static int
FUNC_3(int VAR_2, uint32_t *VAR_3, char *VAR_4, size_t VAR_5)
{
 struct disk_zone_args VAR_6;
 int VAR_7;

 FUNC_0(&VAR_6, sizeof(VAR_6));

 VAR_6.zone_cmd = VAR_1;
 VAR_7 = FUNC_1(VAR_2, VAR_0, &VAR_6);

 if (VAR_7 == 0) {
  *VAR_3 = VAR_6.zone_params.disk_params.zone_mode;

  switch (*VAR_3) {
  case 128:
   FUNC_2(VAR_4, VAR_5, "Not_Zoned");
   break;
  case 130:
   FUNC_2(VAR_4, VAR_5, "Host_Aware");
   break;
  case 131:
   FUNC_2(VAR_4, VAR_5, "Drive_Managed");
   break;
  case 129:
   FUNC_2(VAR_4, VAR_5, "Host_Managed");
   break;
  default:
   FUNC_2(VAR_4, VAR_5, "Unknown_zone_mode_%u",
       *VAR_3);
   break;
  }
 }
 return (VAR_7);
}
