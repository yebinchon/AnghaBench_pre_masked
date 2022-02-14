
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ata_port {size_t target_lpm_policy; } ;
struct Scsi_Host {int dummy; } ;
typedef int ssize_t ;


 size_t FUNC_0 (char**) ;
 int VAR_0 ;
 int VAR_1 ;
 char** VAR_2 ;
 struct ata_port* FUNC_1 (struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_2 (struct device*) ;
 int FUNC_3 (char*,int ,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3,
     struct device_attribute *VAR_4, char *VAR_5)
{
 struct Scsi_Host *VAR_6 = FUNC_2(VAR_3);
 struct ata_port *VAR_7 = FUNC_1(VAR_6);

 if (VAR_7->target_lpm_policy >= FUNC_0(VAR_2))
  return -VAR_0;

 return FUNC_3(VAR_5, VAR_1, "%s\n",
   VAR_2[VAR_7->target_lpm_policy]);
}
