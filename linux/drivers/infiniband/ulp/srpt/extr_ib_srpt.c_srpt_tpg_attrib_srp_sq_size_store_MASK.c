
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long srp_sq_size; } ;
struct srpt_port {TYPE_1__ port_attrib; } ;
struct se_portal_group {int dummy; } ;
struct config_item {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 struct se_portal_group* FUNC_0 (struct config_item*) ;
 int FUNC_1 (char const*,int ,unsigned long*) ;
 int FUNC_2 (char*,unsigned long,...) ;
 struct srpt_port* FUNC_3 (struct se_portal_group*) ;

__attribute__((used)) static ssize_t FUNC_4(struct config_item *VAR_3,
  const char *VAR_4, size_t VAR_5)
{
 struct se_portal_group *VAR_6 = FUNC_0(VAR_3);
 struct srpt_port *VAR_7 = FUNC_3(VAR_6);
 unsigned long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_4, 0, &VAR_8);
 if (VAR_9 < 0) {
  FUNC_2("kstrtoul() failed with ret: %d\n", VAR_9);
  return -VAR_0;
 }
 if (VAR_8 > VAR_1) {
  FUNC_2("val: %lu exceeds MAX_SRPT_SRQ_SIZE: %d\n", VAR_8,
   VAR_1);
  return -VAR_0;
 }
 if (VAR_8 < VAR_2) {
  FUNC_2("val: %lu smaller than MIN_SRPT_SRQ_SIZE: %d\n", VAR_8,
   VAR_2);
  return -VAR_0;
 }
 VAR_7->port_attrib.srp_sq_size = VAR_8;

 return VAR_5;
}
