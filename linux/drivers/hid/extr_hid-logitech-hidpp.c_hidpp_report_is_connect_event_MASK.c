
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sub_id; } ;
struct hidpp_report {scalar_t__ report_id; TYPE_1__ rap; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct hidpp_report *VAR_1)
{
 return (VAR_1->report_id == VAR_0) &&
  (VAR_1->rap.sub_id == 0x41);
}
