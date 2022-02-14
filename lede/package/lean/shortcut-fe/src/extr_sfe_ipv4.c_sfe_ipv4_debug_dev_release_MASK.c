
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfe_ipv4_debug_xml_write_state {int dummy; } ;
struct inode {int dummy; } ;
struct file {scalar_t__ private_data; } ;


 int FUNC_0 (struct sfe_ipv4_debug_xml_write_state*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, struct file *VAR_1)
{
 struct sfe_ipv4_debug_xml_write_state *VAR_2;

 VAR_2 = (struct sfe_ipv4_debug_xml_write_state *)VAR_1->private_data;
 if (VAR_2) {



  FUNC_0(VAR_2);
 }

 return 0;
}
