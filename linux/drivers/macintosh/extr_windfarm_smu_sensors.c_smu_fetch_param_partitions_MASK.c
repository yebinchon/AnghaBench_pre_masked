
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct smu_sdbp_slotspow {int dummy; } ;
struct smu_sdbp_header {int version; } ;
struct smu_sdbp_cpuvcp {int dummy; } ;
struct smu_sdbp_cpudiode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct smu_sdbp_cpudiode* VAR_4 ;
 struct smu_sdbp_cpuvcp* VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 struct smu_sdbp_slotspow* VAR_8 ;
 struct smu_sdbp_header* FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(void)
{
 const struct smu_sdbp_header *VAR_9;


 VAR_9 = FUNC_0(VAR_1, ((void*)0));
 if (VAR_9 != ((void*)0)) {
  VAR_5 = (struct smu_sdbp_cpuvcp *)&VAR_9[1];

  VAR_6 = VAR_9->version;
 }


 VAR_9 = FUNC_0(VAR_0, ((void*)0));
 if (VAR_9 != ((void*)0))
  VAR_4 = (struct smu_sdbp_cpudiode *)&VAR_9[1];


 VAR_9 = FUNC_0(VAR_3, ((void*)0));
 if (VAR_9 != ((void*)0))
  VAR_8 = (struct smu_sdbp_slotspow *)&VAR_9[1];


 VAR_9 = FUNC_0(VAR_2, ((void*)0));
 if (VAR_9 != ((void*)0))
  VAR_7 = (u8 *)&VAR_9[1];
}
