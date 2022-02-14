
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {long tv_sec; int tv_usec; } ;
struct active_request_slot {int* finished; int curl; int curl_result; scalar_t__ in_use; } ;
typedef int fd_set ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int *,int *,int*) ;
 int FUNC_3 (int ,long*) ;
 int VAR_0 ;
 int FUNC_4 (struct active_request_slot*) ;
 int FUNC_5 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_6 () ;

void FUNC_7(struct active_request_slot *VAR_1)
{
 while (VAR_1->in_use) {
  VAR_1->curl_result = FUNC_1(VAR_1->curl);
  FUNC_4(VAR_1);
 }

}
