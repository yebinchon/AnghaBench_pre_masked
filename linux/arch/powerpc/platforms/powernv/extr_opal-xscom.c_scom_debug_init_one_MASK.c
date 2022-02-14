
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct scom_debug_entry* data; int size; } ;
struct scom_debug_entry {int chip; TYPE_1__ path; int name; } ;
struct device_node {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,struct dentry*,TYPE_1__*) ;
 struct dentry* FUNC_1 (int ,struct dentry*) ;
 int FUNC_2 (char*,int,struct dentry*,struct scom_debug_entry*,int *) ;
 scalar_t__ FUNC_3 (int ,char*,struct device_node*) ;
 int FUNC_4 (struct scom_debug_entry*) ;
 struct scom_debug_entry* FUNC_5 (int,int ) ;
 int VAR_2 ;
 int FUNC_6 (int ,int,char*,int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(struct dentry *VAR_3, struct device_node *VAR_4,
          int VAR_5)
{
 struct scom_debug_entry *VAR_6;
 struct dentry *VAR_7;

 VAR_6 = FUNC_5(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->chip = VAR_5;
 FUNC_6(VAR_6->name, 16, "%08x", VAR_5);
 VAR_6->path.data = (void *)FUNC_3(VAR_1, "%pOF", VAR_4);
 VAR_6->path.size = FUNC_7((char *)VAR_6->path.data);

 VAR_7 = FUNC_1(VAR_6->name, VAR_3);
 if (!VAR_7) {
  FUNC_4(VAR_6->path.data);
  FUNC_4(VAR_6);
  return -1;
 }

 FUNC_0("devspec", 0400, VAR_7, &VAR_6->path);
 FUNC_2("access", 0600, VAR_7, VAR_6, &VAR_2);

 return 0;
}
