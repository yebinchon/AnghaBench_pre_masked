
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmgt_pgfn {int hnode; int gfn; } ;
struct kvmgt_guest_info {int ptable; } ;
typedef int gfn_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int ,int *,int ) ;
 scalar_t__ FUNC_2 (struct kvmgt_guest_info*,int ) ;
 struct kvmgt_pgfn* FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct kvmgt_guest_info *VAR_1, gfn_t VAR_2)
{
 struct kvmgt_pgfn *VAR_3;

 if (FUNC_2(VAR_1, VAR_2))
  return;

 VAR_3 = FUNC_3(sizeof(struct kvmgt_pgfn), VAR_0);
 if (FUNC_0(!VAR_3, "gfn: 0x%llx\n", VAR_2))
  return;

 VAR_3->gfn = VAR_2;
 FUNC_1(VAR_1->ptable, &VAR_3->hnode, VAR_2);
}
