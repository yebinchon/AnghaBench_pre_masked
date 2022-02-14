
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {scalar_t__ sample_period; scalar_t__ exclude_hv; scalar_t__ exclude_kernel; scalar_t__ exclude_user; } ;
struct perf_event {TYPE_1__ attr; } ;
struct TYPE_4__ {int (* get_alternatives ) (int ,unsigned int,int *) ;scalar_t__ (* limited_pmc_event ) (int ) ;} ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 TYPE_2__* VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int,int *) ;

__attribute__((used)) static int FUNC_2(struct perf_event *VAR_4, u64 VAR_5,
     unsigned int VAR_6)
{
 int VAR_7;
 u64 VAR_8[VAR_0];

 if (VAR_4->attr.exclude_user
     || VAR_4->attr.exclude_kernel
     || VAR_4->attr.exclude_hv
     || VAR_4->attr.sample_period)
  return 0;

 if (VAR_3->limited_pmc_event(VAR_5))
  return 1;





 if (!VAR_3->get_alternatives)
  return 0;

 VAR_6 |= VAR_1 | VAR_2;
 VAR_7 = VAR_3->get_alternatives(VAR_5, VAR_6, VAR_8);

 return VAR_7 > 0;
}
