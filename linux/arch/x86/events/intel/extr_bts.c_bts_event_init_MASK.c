
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; scalar_t__ exclude_kernel; } ;
struct perf_event {int destroy; TYPE_1__ attr; } ;
struct TYPE_4__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct perf_event *VAR_7)
{
 int VAR_8;

 if (VAR_7->attr.type != VAR_5.type)
  return -VAR_3;
 if (VAR_7->attr.exclude_kernel && FUNC_1() &&
     !FUNC_0(VAR_0))
  return -VAR_1;

 if (FUNC_2(VAR_6))
  return -VAR_2;

 VAR_8 = FUNC_4();
 if (VAR_8) {
  FUNC_3(VAR_6);
  return VAR_8;
 }

 VAR_7->destroy = VAR_4;

 return 0;
}
