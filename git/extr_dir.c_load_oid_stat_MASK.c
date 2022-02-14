
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hash; } ;
struct oid_stat {int valid; TYPE_1__ oid; int stat; } ;


 int FUNC_0 (int ,unsigned char const*) ;
 int FUNC_1 (int *,unsigned char const*) ;

__attribute__((used)) static void FUNC_2(struct oid_stat *VAR_0, const unsigned char *VAR_1,
     const unsigned char *VAR_2)
{
 FUNC_1(&VAR_0->stat, VAR_1);
 FUNC_0(VAR_0->oid.hash, VAR_2);
 VAR_0->valid = 1;
}
