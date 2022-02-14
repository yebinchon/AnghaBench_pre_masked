
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct npestats {int dummy; } ;
struct npestatfoo_p {int oid; int mib; } ;


 int FUNC_0 (int,char*,int ) ;
 scalar_t__ FUNC_1 (int ,int,struct npestats*,size_t*,int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct npestatfoo_p *VAR_0, struct npestats *VAR_1)
{
 size_t VAR_2 = sizeof(struct npestats);
 if (FUNC_1(VAR_0->mib, 4, VAR_1, &VAR_2, ((void*)0), 0) < 0)
  FUNC_0(1, "sysctl: %s", VAR_0->oid);
}
