
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct pf_tagset {int mask; int seed; } ;


 int FUNC_0 (char const*,int ,int ) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static uint16_t
FUNC_2(const struct pf_tagset *VAR_0, const char *VAR_1)
{

 return (FUNC_0(VAR_1, FUNC_1(VAR_1), VAR_0->seed) & VAR_0->mask);
}
