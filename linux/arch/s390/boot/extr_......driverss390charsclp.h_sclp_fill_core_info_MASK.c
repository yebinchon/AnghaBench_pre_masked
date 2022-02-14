
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sclp_core_info {int configured; int standby; int combined; int core; } ;
struct sclp_core_entry {int dummy; } ;
struct read_cpu_info_sccb {int nr_configured; int nr_standby; int offset_configured; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct sclp_core_info*,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct sclp_core_info *VAR_0,
           struct read_cpu_info_sccb *VAR_1)
{
 char *VAR_2 = (char *) VAR_1;

 FUNC_1(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->configured = VAR_1->nr_configured;
 VAR_0->standby = VAR_1->nr_standby;
 VAR_0->combined = VAR_1->nr_configured + VAR_1->nr_standby;
 FUNC_0(&VAR_0->core, VAR_2 + VAR_1->offset_configured,
        VAR_0->combined * sizeof(struct sclp_core_entry));
}
