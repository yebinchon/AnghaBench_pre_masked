
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct ev_token_bucket_cfg {int msec_per_tick; } ;
typedef int ev_uint64_t ;
typedef unsigned int ev_uint32_t ;



ev_uint32_t
FUNC_0(const struct timeval *VAR_0,
    const struct ev_token_bucket_cfg *VAR_1)
{
 ev_uint64_t VAR_2 = (ev_uint64_t)VAR_0->tv_sec * 1000 + VAR_0->tv_usec / 1000;
 return (unsigned)(VAR_2 / VAR_1->msec_per_tick);
}
