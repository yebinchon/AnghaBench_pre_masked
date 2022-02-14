
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_guc_ct {int worker; int lock; int incoming_requests; } ;
struct ct_incoming_request {int link; int msg; } ;


 int FUNC_0 (char*,int,int const*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 struct ct_incoming_request* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,int const*,int) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int VAR_1 ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct intel_guc_ct *VAR_2, const u32 *VAR_3)
{
 u32 VAR_4 = VAR_3[0];
 u32 VAR_5 = FUNC_2(VAR_4);
 u32 VAR_6 = VAR_5 + 1;
 struct ct_incoming_request *VAR_7;
 unsigned long VAR_8;

 FUNC_1(FUNC_3(VAR_4));

 VAR_7 = FUNC_4(sizeof(*VAR_7) + 4 * VAR_6, VAR_0);
 if (FUNC_10(!VAR_7)) {
  FUNC_0("CT: dropping request %*ph\n", 4 * VAR_6, VAR_3);
  return 0;
 }
 FUNC_6(VAR_7->msg, VAR_3, 4 * VAR_6);

 FUNC_8(&VAR_2->lock, VAR_8);
 FUNC_5(&VAR_7->link, &VAR_2->incoming_requests);
 FUNC_9(&VAR_2->lock, VAR_8);

 FUNC_7(VAR_1, &VAR_2->worker);
 return 0;
}
