
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct t4_tracer {int enabled; scalar_t__ valid; int idx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct t4_tracer*) ;

__attribute__((used)) static int
FUNC_1(uint8_t VAR_1, int VAR_2)
{
 struct t4_tracer VAR_3;

 VAR_3.idx = VAR_1;
 VAR_3.enabled = VAR_2;
 VAR_3.valid = 0;

 return FUNC_0(VAR_0, &VAR_3);
}
