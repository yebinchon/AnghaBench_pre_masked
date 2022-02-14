
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mipc_infohdr {int mem2_boundary; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct mipc_infohdr* FUNC_1 () ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(u32 *VAR_1)
{
 struct mipc_infohdr *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1();
 if (!VAR_2) {
  VAR_3 = -1;
  goto out;
 }

 if (FUNC_0(VAR_2->mem2_boundary)) {
  FUNC_2("mini: invalid mem2_boundary %08X\n",
         VAR_2->mem2_boundary);
  VAR_3 = -VAR_0;
  goto out;
 }
 *VAR_1 = VAR_2->mem2_boundary;
 VAR_3 = 0;
out:
 return VAR_3;

}
