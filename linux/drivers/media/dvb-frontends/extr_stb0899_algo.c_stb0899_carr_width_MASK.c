
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stb0899_internal {int srate; int rolloff; } ;
struct stb0899_state {struct stb0899_internal internal; } ;



long FUNC_0(struct stb0899_state *VAR_0)
{
 struct stb0899_internal *VAR_1 = &VAR_0->internal;

 return (VAR_1->srate + (VAR_1->srate * VAR_1->rolloff) / 100);
}
