
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int report_count; int report_size; } ;
struct hid_parser {int scan_flags; TYPE_1__ global; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct hid_parser *VAR_1, u32 VAR_2)
{
 if (VAR_2 == 0xff0000c5 && VAR_1->global.report_count == 256 &&
     VAR_1->global.report_size == 8)
  VAR_1->scan_flags |= VAR_0;
}
