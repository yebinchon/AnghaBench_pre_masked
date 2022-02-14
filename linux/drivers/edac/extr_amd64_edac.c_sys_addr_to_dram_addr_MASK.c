
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct mem_ctl_info {struct amd64_pvt* pvt_info; } ;
struct amd64_pvt {int mc_node_id; } ;


 unsigned long long FUNC_0 (int,int ) ;
 int FUNC_1 (struct mem_ctl_info*,unsigned long long*,unsigned long long*,unsigned long long*) ;
 int FUNC_2 (int,char*,unsigned long,unsigned long) ;
 unsigned long long FUNC_3 (struct amd64_pvt*,int ) ;

__attribute__((used)) static u64 FUNC_4(struct mem_ctl_info *VAR_0, u64 VAR_1)
{
 struct amd64_pvt *VAR_2 = VAR_0->pvt_info;
 u64 VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
 int VAR_8;

 VAR_3 = FUNC_3(VAR_2, VAR_2->mc_node_id);

 VAR_8 = FUNC_1(VAR_0, &VAR_4, &VAR_5,
          &VAR_6);
 if (!VAR_8) {
  if ((VAR_1 >= (1ULL << 32)) &&
      (VAR_1 < ((1ULL << 32) + VAR_6))) {

   VAR_7 = VAR_1 - VAR_5;

   FUNC_2(2, "using DHAR to translate SysAddr 0x%lx to DramAddr 0x%lx\n",
     (unsigned long)VAR_1,
     (unsigned long)VAR_7);

   return VAR_7;
  }
 }
 VAR_7 = (VAR_1 & FUNC_0(39, 0)) - VAR_3;

 FUNC_2(2, "using DRAM Base register to translate SysAddr 0x%lx to DramAddr 0x%lx\n",
   (unsigned long)VAR_1, (unsigned long)VAR_7);
 return VAR_7;
}
