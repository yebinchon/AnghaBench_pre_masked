
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct npestatfoo_p {int oid; int mib; } ;
struct npestatfoo {int dummy; } ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int ,int,char*,char const*) ;
 scalar_t__ FUNC_2 (int ,int ,size_t*) ;

__attribute__((used)) static void
FUNC_3(struct npestatfoo *VAR_0, const char *VAR_1)
{
 struct npestatfoo_p *VAR_2 = (struct npestatfoo_p *) VAR_0;
 size_t VAR_3;

 FUNC_1(VAR_2->oid, sizeof(VAR_2->oid), "dev.npe.%s.stats", VAR_1+3);
 VAR_3 = 4;
 if (FUNC_2(VAR_2->oid, VAR_2->mib, &VAR_3) < 0)
  FUNC_0(1, "sysctlnametomib: %s", VAR_2->oid);
}
