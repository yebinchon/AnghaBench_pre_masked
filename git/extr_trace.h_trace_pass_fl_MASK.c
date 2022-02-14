
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_key {int initialized; scalar_t__ fd; } ;



__attribute__((used)) static inline int FUNC_0(struct trace_key *VAR_0)
{
 return VAR_0->fd || !VAR_0->initialized;
}
