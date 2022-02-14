
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int config; } ;
struct perf_event {TYPE_1__ attr; } ;


 int VAR_0 ;

__attribute__((used)) static u8 FUNC_0(struct perf_event *VAR_1)
{
 return (VAR_1->attr.config >> VAR_0) & 0xff;
}
