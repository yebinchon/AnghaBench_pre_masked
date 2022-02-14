
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_3__ {scalar_t__ config; scalar_t__ type; scalar_t__ sample_period; } ;
struct perf_event {TYPE_1__ attr; } ;
struct TYPE_4__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;

__attribute__((used)) static int FUNC_0(struct perf_event *VAR_5)
{
 u64 VAR_6 = VAR_5->attr.config & VAR_1;


 if (VAR_5->attr.type != VAR_4.type)
  return -VAR_3;


 if (VAR_5->attr.sample_period)
  return -VAR_2;

 if (VAR_6 != VAR_0)
  return -VAR_2;

 return 0;
}
