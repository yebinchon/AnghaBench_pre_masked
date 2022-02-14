
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pack_idx_option {int off32_limit; int anomaly_nr; int anomaly; } ;
typedef int ofsval ;
typedef int off_t ;


 int FUNC_0 (int*,int ,int ,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(off_t VAR_1, const struct pack_idx_option *VAR_2)
{
 uint32_t VAR_3;

 if ((VAR_1 >> 31) || (VAR_2->off32_limit < VAR_1))
  return 1;
 if (!VAR_2->anomaly_nr)
  return 0;
 VAR_3 = VAR_1;
 return !!FUNC_0(&VAR_3, VAR_2->anomaly, VAR_2->anomaly_nr,
    sizeof(VAR_3), VAR_0);
}
