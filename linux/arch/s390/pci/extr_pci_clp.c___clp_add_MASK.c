
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpci_dev {int dummy; } ;
struct clp_fh_list_entry {int config_state; int fh; int fid; int vendor_id; } ;


 int FUNC_0 (int ,int ,int ) ;
 struct zpci_dev* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct clp_fh_list_entry *VAR_0, void *VAR_1)
{
 struct zpci_dev *VAR_2;

 if (!VAR_0->vendor_id)
  return;

 VAR_2 = FUNC_1(VAR_0->fid);
 if (!VAR_2)
  FUNC_0(VAR_0->fid, VAR_0->fh, VAR_0->config_state);
}
