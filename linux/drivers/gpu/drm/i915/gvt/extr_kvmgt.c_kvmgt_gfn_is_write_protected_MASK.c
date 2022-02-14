
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmgt_pgfn {int dummy; } ;
struct kvmgt_guest_info {int dummy; } ;
typedef int gfn_t ;


 struct kvmgt_pgfn* FUNC_0 (struct kvmgt_guest_info*,int ) ;

__attribute__((used)) static bool FUNC_1(struct kvmgt_guest_info *VAR_0,
    gfn_t VAR_1)
{
 struct kvmgt_pgfn *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 return !!VAR_2;
}
