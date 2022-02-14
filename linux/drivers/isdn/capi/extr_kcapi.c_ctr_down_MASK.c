
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct capi_ctr {int state; int state_wait_queue; int * serial; int profile; int version; int * manu; } ;
struct capi20_appl {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct capi20_appl* FUNC_0 (int) ;
 int FUNC_1 (struct capi_ctr*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct capi_ctr *VAR_3, int VAR_4)
{
 struct capi20_appl *VAR_5;
 u16 VAR_6;

 if (VAR_3->state == VAR_1 || VAR_3->state == VAR_0)
  return;

 VAR_3->state = VAR_4;

 FUNC_2(VAR_3->manu, 0, sizeof(VAR_3->manu));
 FUNC_2(&VAR_3->version, 0, sizeof(VAR_3->version));
 FUNC_2(&VAR_3->profile, 0, sizeof(VAR_3->profile));
 FUNC_2(VAR_3->serial, 0, sizeof(VAR_3->serial));

 for (VAR_6 = 1; VAR_6 <= VAR_2; VAR_6++) {
  VAR_5 = FUNC_0(VAR_6);
  if (VAR_5)
   FUNC_1(VAR_3);
 }

 FUNC_3(&VAR_3->state_wait_queue);
}
