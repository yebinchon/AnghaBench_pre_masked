
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; int tv_sec; } ;
struct evbuffer {int dummy; } ;
typedef int ev_uint8_t ;
typedef int ev_uint32_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct evbuffer*,int ,int *,int) ;

void
FUNC_2(struct evbuffer *VAR_0, ev_uint32_t VAR_1, struct timeval *VAR_2)
{
 ev_uint8_t VAR_3[10];
 int VAR_4 = FUNC_0(VAR_3, VAR_2->tv_sec);
 VAR_4 += FUNC_0(VAR_3 + VAR_4, VAR_2->tv_usec);
 FUNC_1(VAR_0, VAR_1, VAR_3, VAR_4);
}
