
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct memcons {int magic; } ;
struct device_node {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct device_node*,char const*,int *) ;
 struct memcons* FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;

struct memcons *FUNC_4(struct device_node *VAR_1, const char *VAR_2)
{
 u64 VAR_3;
 struct memcons *VAR_4;

 if (FUNC_1(VAR_1, VAR_2, &VAR_3)) {
  FUNC_3("%s property not found, no message log\n",
   VAR_2);
  goto out_err;
 }

 VAR_4 = FUNC_2(VAR_3);
 if (!VAR_4) {
  FUNC_3("memory console address is invalid\n");
  goto out_err;
 }

 if (FUNC_0(VAR_4->magic) != VAR_0) {
  FUNC_3("memory console version is invalid\n");
  goto out_err;
 }

 return VAR_4;

out_err:
 return ((void*)0);
}
