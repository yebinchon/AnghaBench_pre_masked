
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ counter; } ;
struct qib_pportdata {TYPE_1__ cong_stats; int ibport_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,struct qib_pportdata*,int ) ;

__attribute__((used)) static u64 FUNC_1(struct qib_pportdata *VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_0(&VAR_1->ibport_data, VAR_1,
       VAR_0);
 return VAR_1->cong_stats.counter + VAR_2;
}
