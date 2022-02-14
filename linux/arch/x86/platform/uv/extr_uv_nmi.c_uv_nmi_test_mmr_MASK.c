
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uv_hub_nmi_s {int nmi_value; int read_mmr_count; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct uv_hub_nmi_s *VAR_2)
{
 VAR_2->nmi_value = FUNC_1(VAR_0);
 FUNC_0(&VAR_2->read_mmr_count);
 return !!(VAR_2->nmi_value & VAR_1);
}
