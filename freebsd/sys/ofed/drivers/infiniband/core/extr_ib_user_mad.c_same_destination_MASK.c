
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_user_mad_hdr {scalar_t__ lid; int gid; scalar_t__ grh_present; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct ib_user_mad_hdr *VAR_0,
       struct ib_user_mad_hdr *VAR_1)
{
 if (!VAR_0->grh_present && !VAR_1->grh_present)
    return (VAR_0->lid == VAR_1->lid);

 if (VAR_0->grh_present && VAR_1->grh_present)
    return !FUNC_0(VAR_0->gid, VAR_1->gid, 16);

 return 0;
}
