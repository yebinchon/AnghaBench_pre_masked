
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uci_package {int dummy; } ;
struct uci_context {int dummy; } ;
struct switch_dev {char* dev_name; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_0 ;
 int FUNC_2 (struct switch_dev*,struct uci_package*) ;
 struct uci_context* FUNC_3 () ;
 int FUNC_4 (struct uci_context*) ;
 int FUNC_5 (struct uci_context*,char const*,struct uci_package**) ;
 int FUNC_6 (struct uci_context*,char*) ;

__attribute__((used)) static void
FUNC_7(struct switch_dev *VAR_1, const char *VAR_2)
{
 struct uci_context *VAR_3;
 struct uci_package *VAR_4 = ((void*)0);
 int VAR_5 = -1;

 VAR_3 = FUNC_3();
 if (!VAR_3)
  return;

 FUNC_5(VAR_3, VAR_2, &VAR_4);
 if (!VAR_4) {
  FUNC_6(VAR_3, "Failed to load config file: ");
  goto out;
 }

 VAR_5 = FUNC_2(VAR_1, VAR_4);
 if (VAR_5 < 0)
  FUNC_1(VAR_0, "Failed to apply configuration for switch '%s'\n", VAR_1->dev_name);

out:
 FUNC_4(VAR_3);
 FUNC_0(VAR_5);
}
