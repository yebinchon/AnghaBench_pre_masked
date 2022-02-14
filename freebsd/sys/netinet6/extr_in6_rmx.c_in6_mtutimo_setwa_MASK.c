
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rib_head {int dummy; } ;
struct mtuex_arg {struct rib_head* rnh; } ;



__attribute__((used)) static void
FUNC_0(struct rib_head *VAR_0, uint32_t VAR_1, int VAR_2,
    void *VAR_3)
{
 struct mtuex_arg *VAR_4;

 VAR_4 = (struct mtuex_arg *)VAR_3;

 VAR_4->rnh = VAR_0;
}
