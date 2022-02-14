
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct scpi_opp {void* m_volt; void* freq; } ;
struct scpi_dvfs_info {int count; int latency; struct scpi_opp* opps; } ;
struct dvfs_info {int opp_count; TYPE_1__* opps; int latency; } ;
typedef int domain ;
typedef int buf ;
struct TYPE_4__ {struct scpi_dvfs_info** dvfs; } ;
struct TYPE_3__ {int m_volt; int freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct scpi_dvfs_info* FUNC_0 (int) ;
 int VAR_3 ;
 size_t VAR_4 ;
 struct scpi_opp* FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct scpi_dvfs_info*) ;
 struct scpi_dvfs_info* FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_6 (int ,size_t*,int,struct dvfs_info*,int) ;
 int FUNC_7 (struct scpi_opp*,int,int,int ,int *) ;

__attribute__((used)) static struct scpi_dvfs_info *FUNC_8(u8 VAR_7)
{
 struct scpi_dvfs_info *VAR_8;
 struct scpi_opp *VAR_9;
 struct dvfs_info VAR_10;
 int VAR_11, VAR_12;

 if (VAR_7 >= VAR_4)
  return FUNC_0(-VAR_1);

 if (VAR_6->dvfs[VAR_7])
  return VAR_6->dvfs[VAR_7];

 VAR_11 = FUNC_6(VAR_0, &VAR_7, sizeof(VAR_7),
    &VAR_10, sizeof(VAR_10));
 if (VAR_11)
  return FUNC_0(VAR_11);

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return FUNC_0(-VAR_2);

 VAR_8->count = VAR_10.opp_count;
 VAR_8->latency = FUNC_4(VAR_10.latency) * 1000;

 VAR_8->opps = FUNC_1(VAR_8->count, sizeof(*VAR_9), VAR_3);
 if (!VAR_8->opps) {
  FUNC_2(VAR_8);
  return FUNC_0(-VAR_2);
 }

 for (VAR_12 = 0, VAR_9 = VAR_8->opps; VAR_12 < VAR_8->count; VAR_12++, VAR_9++) {
  VAR_9->freq = FUNC_5(VAR_10.opps[VAR_12].freq);
  VAR_9->m_volt = FUNC_5(VAR_10.opps[VAR_12].m_volt);
 }

 FUNC_7(VAR_8->opps, VAR_8->count, sizeof(*VAR_9), VAR_5, ((void*)0));

 VAR_6->dvfs[VAR_7] = VAR_8;
 return VAR_8;
}
