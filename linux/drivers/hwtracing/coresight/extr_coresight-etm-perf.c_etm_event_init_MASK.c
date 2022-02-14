
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; } ;
struct perf_event {int destroy; TYPE_1__ attr; } ;
struct TYPE_4__ {scalar_t__ type; } ;


 int VAR_0 ;
 int FUNC_0 (struct perf_event*) ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static int FUNC_1(struct perf_event *VAR_3)
{
 int VAR_4 = 0;

 if (VAR_3->attr.type != VAR_2.type) {
  VAR_4 = -VAR_0;
  goto out;
 }

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4)
  goto out;

 VAR_3->destroy = VAR_1;
out:
 return VAR_4;
}
