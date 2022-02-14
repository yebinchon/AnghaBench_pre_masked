
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfe_ipv6_debug_xml_write_state {int state; } ;
struct inode {int dummy; } ;
struct file {struct sfe_ipv6_debug_xml_write_state* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sfe_ipv6_debug_xml_write_state* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_3, struct file *VAR_4)
{
 struct sfe_ipv6_debug_xml_write_state *VAR_5;

 VAR_5 = (struct sfe_ipv6_debug_xml_write_state *)VAR_4->private_data;
 if (VAR_5) {
  return 0;
 }

 VAR_5 = FUNC_0(sizeof(struct sfe_ipv6_debug_xml_write_state), VAR_1);
 if (!VAR_5) {
  return -VAR_0;
 }

 VAR_5->state = VAR_2;
 VAR_4->private_data = VAR_5;

 return 0;
}
