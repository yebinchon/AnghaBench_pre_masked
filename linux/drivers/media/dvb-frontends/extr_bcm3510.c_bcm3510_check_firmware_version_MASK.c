
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ver ;
typedef int u8 ;
struct bcm3510_state {int dummy; } ;
struct bcm3510_hab_cmd_get_version_info {scalar_t__ script_version; scalar_t__ config_version; scalar_t__ demod_version; int microcode_version; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bcm3510_state*,int ,int ,int *,int ,int *,int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int FUNC_2(struct bcm3510_state *VAR_6)
{
 struct bcm3510_hab_cmd_get_version_info VAR_7;
 FUNC_0(VAR_6,VAR_3,VAR_5,((void*)0),0,(u8*)&VAR_7,sizeof(VAR_7));

 FUNC_1("Version information: 0x%02x 0x%02x 0x%02x 0x%02x\n",
  VAR_7.microcode_version, VAR_7.script_version, VAR_7.config_version, VAR_7.demod_version);

 if (VAR_7.script_version == VAR_2 &&
  VAR_7.config_version == VAR_0 &&
  VAR_7.demod_version == VAR_1)
  return 0;

 FUNC_1("version check failed\n");
 return -VAR_4;
}
