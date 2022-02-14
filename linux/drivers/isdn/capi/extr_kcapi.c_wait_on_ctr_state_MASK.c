
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct capi_ctr {unsigned int state; int state_wait_queue; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct capi_ctr* FUNC_1 (struct capi_ctr*) ;
 int FUNC_2 (struct capi_ctr*) ;
 int VAR_5 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_9(struct capi_ctr *VAR_7, unsigned int VAR_8)
{
 FUNC_0(VAR_6);
 int VAR_9 = 0;

 VAR_7 = FUNC_1(VAR_7);
 if (!VAR_7)
  return -VAR_2;

 for (;;) {
  FUNC_6(&VAR_7->state_wait_queue, &VAR_6,
    VAR_3);

  if (VAR_7->state == VAR_8)
   break;
  if (VAR_7->state == VAR_0) {
   VAR_9 = -VAR_2;
   break;
  }
  if (FUNC_8(VAR_5)) {
   VAR_9 = -VAR_1;
   break;
  }

  FUNC_5(&VAR_4);
  FUNC_7();
  FUNC_4(&VAR_4);
 }
 FUNC_3(&VAR_7->state_wait_queue, &VAR_6);

 FUNC_2(VAR_7);

 return VAR_9;
}
