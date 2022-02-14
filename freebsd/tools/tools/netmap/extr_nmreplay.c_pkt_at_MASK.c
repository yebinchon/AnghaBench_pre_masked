
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct q_pkt {int dummy; } ;
struct _qs {scalar_t__ buf; } ;



__attribute__((used)) static inline struct q_pkt *
FUNC_0(struct _qs *VAR_0, uint64_t VAR_1)
{
    return (struct q_pkt *)(VAR_0->buf + VAR_1);
}
