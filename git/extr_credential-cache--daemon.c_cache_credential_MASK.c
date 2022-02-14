
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct credential_cache_entry {scalar_t__ expiration; int item; } ;
struct credential {int dummy; } ;


 int FUNC_0 (struct credential_cache_entry*,scalar_t__,int ) ;
 struct credential_cache_entry* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,struct credential*,int) ;
 int FUNC_2 (struct credential*,int ,int) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct credential *VAR_3, int VAR_4)
{
 struct credential_cache_entry *VAR_5;

 FUNC_0(VAR_0, VAR_2 + 1, VAR_1);
 VAR_5 = &VAR_0[VAR_2++];


 FUNC_1(&VAR_5->item, VAR_3, sizeof(*VAR_3));
 FUNC_2(VAR_3, 0, sizeof(*VAR_3));
 VAR_5->expiration = FUNC_3(((void*)0)) + VAR_4;
}
