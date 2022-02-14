
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scpi_opp {int m_volt; int freq; } ;
struct scpi_dvfs_info {int count; struct scpi_opp* opps; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct scpi_dvfs_info*) ;
 int FUNC_1 (struct scpi_dvfs_info*) ;
 int FUNC_2 (struct device*,int ,int) ;
 int FUNC_3 (struct device*,int ) ;
 int FUNC_4 (struct device*,char*,int ,int) ;
 struct scpi_dvfs_info* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_1)
{
 int VAR_2, VAR_3;
 struct scpi_opp *VAR_4;
 struct scpi_dvfs_info *VAR_5 = FUNC_5(VAR_1);

 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 if (!VAR_5->opps)
  return -VAR_0;

 for (VAR_4 = VAR_5->opps, VAR_2 = 0; VAR_2 < VAR_5->count; VAR_2++, VAR_4++) {
  VAR_3 = FUNC_2(VAR_1, VAR_4->freq, VAR_4->m_volt * 1000);
  if (VAR_3) {
   FUNC_4(VAR_1, "failed to add opp %uHz %umV\n",
     VAR_4->freq, VAR_4->m_volt);
   while (VAR_2-- > 0)
    FUNC_3(VAR_1, (--VAR_4)->freq);
   return VAR_3;
  }
 }
 return 0;
}
