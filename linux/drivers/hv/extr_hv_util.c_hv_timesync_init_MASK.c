
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hv_util_service {int dummy; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*,int ) ;
 int * FUNC_4 (int *,int *) ;
 int VAR_6 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct hv_util_service *VAR_7)
{

 if (!VAR_5)
  return -VAR_0;

 FUNC_5(&VAR_2.lock);

 FUNC_0(&VAR_1, VAR_4);






 VAR_3 = FUNC_4(&VAR_6, ((void*)0));
 if (FUNC_1(VAR_3)) {
  FUNC_3("cannot register PTP clock: %ld\n",
         FUNC_2(VAR_3));
  VAR_3 = ((void*)0);
 }

 return 0;
}
