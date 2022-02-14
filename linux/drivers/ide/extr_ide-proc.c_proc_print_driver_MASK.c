
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct ide_driver {int version; } ;
struct device_driver {int name; } ;


 int FUNC_0 (struct seq_file*,char*,int ,int ) ;
 struct ide_driver* FUNC_1 (struct device_driver*) ;

__attribute__((used)) static int FUNC_2(struct device_driver *VAR_0, void *VAR_1)
{
 struct ide_driver *VAR_2 = FUNC_1(VAR_0);
 struct seq_file *VAR_3 = VAR_1;

 FUNC_0(VAR_3, "%s version %s\n", VAR_0->name, VAR_2->version);

 return 0;
}
