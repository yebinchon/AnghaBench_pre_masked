
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uv_hub_nmi_s {int nmi_value; int read_mmr_count; } ;


 int VAR_0 ;
 int* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct uv_hub_nmi_s *VAR_2)
{
 int *VAR_3 = FUNC_0(VAR_0);
 int VAR_4 = *VAR_3;

 VAR_2->nmi_value = VAR_4;
 FUNC_1(&VAR_2->read_mmr_count);

 if (!(VAR_4 & VAR_1))
  return 0;

 *VAR_3 = VAR_1;
 (void)*VAR_3;

 return 1;
}
