
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {scalar_t__ last; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline int
FUNC_1(struct evbuffer *VAR_0)
{
 return (VAR_0->last && FUNC_0(VAR_0->last));
}
