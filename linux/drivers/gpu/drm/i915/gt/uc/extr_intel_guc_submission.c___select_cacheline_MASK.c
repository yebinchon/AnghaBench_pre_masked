
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_guc {int db_cacheline; } ;


 int FUNC_0 (char*,unsigned long,int ,scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 unsigned long FUNC_2 (int ) ;

__attribute__((used)) static unsigned long FUNC_3(struct intel_guc *VAR_0)
{
 unsigned long VAR_1;


 VAR_1 = FUNC_2(VAR_0->db_cacheline);


 VAR_0->db_cacheline += FUNC_1();

 FUNC_0("reserved cacheline 0x%lx, next 0x%x, linesize %u\n",
    VAR_1, VAR_0->db_cacheline, FUNC_1());
 return VAR_1;
}
