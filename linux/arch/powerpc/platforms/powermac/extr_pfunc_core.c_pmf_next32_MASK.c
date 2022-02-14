
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pmf_cmd {int cmdend; int cmdptr; int error; } ;



__attribute__((used)) static u32 FUNC_0(struct pmf_cmd *VAR_0)
{
 u32 VAR_1;
 if ((VAR_0->cmdend - VAR_0->cmdptr) < 4) {
  VAR_0->error = 1;
  return 0;
 }
 VAR_1 = *((u32 *)VAR_0->cmdptr);
 VAR_0->cmdptr += 4;
 return VAR_1;
}
