
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmi_system_event_log {int access_method; } ;
struct dmi_sysfs_entry {int dummy; } ;
struct dmi_read_state {int count; int pos; int buf; } ;
struct dmi_header {int dummy; } ;
typedef int ssize_t ;
typedef int sel ;







 int VAR_0 ;
 int FUNC_0 (struct dmi_header const*) ;
 int FUNC_1 (struct dmi_sysfs_entry*,struct dmi_system_event_log*,int ,int ,int ) ;
 int FUNC_2 (struct dmi_sysfs_entry*,struct dmi_system_event_log*,int ,int ,int ) ;
 int FUNC_3 (struct dmi_system_event_log*,struct dmi_header const*,int) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static ssize_t FUNC_5(struct dmi_sysfs_entry *VAR_1,
           const struct dmi_header *VAR_2,
           void *VAR_3)
{
 struct dmi_read_state *VAR_4 = VAR_3;
 struct dmi_system_event_log VAR_5;

 if (sizeof(VAR_5) > FUNC_0(VAR_2))
  return -VAR_0;

 FUNC_3(&VAR_5, VAR_2, sizeof(VAR_5));

 switch (VAR_5.access_method) {
 case 129:
 case 130:
 case 131:
  return FUNC_1(VAR_1, &VAR_5, VAR_4->buf,
        VAR_4->pos, VAR_4->count);
 case 128:
  return FUNC_2(VAR_1, &VAR_5, VAR_4->buf,
            VAR_4->pos, VAR_4->count);
 case 132:
  FUNC_4("dmi-sysfs: GPNV support missing.\n");
  return -VAR_0;
 default:
  FUNC_4("dmi-sysfs: Unknown access method %02x\n",
   VAR_5.access_method);
  return -VAR_0;
 }
}
