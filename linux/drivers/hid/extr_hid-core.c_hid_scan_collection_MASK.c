
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int usage_page; } ;
struct TYPE_3__ {int usage_index; scalar_t__* usage; } ;
struct hid_parser {int scan_flags; TYPE_2__ global; TYPE_1__ local; struct hid_device* device; } ;
struct hid_device {scalar_t__ group; scalar_t__ vendor; scalar_t__ product; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static void FUNC_0(struct hid_parser *VAR_12, unsigned VAR_13)
{
 struct hid_device *VAR_14 = VAR_12->device;
 int VAR_15;

 if (((VAR_12->global.usage_page << 16) == VAR_9) &&
     VAR_13 == VAR_0)
  VAR_14->group = VAR_4;

 if (VAR_14->vendor == VAR_11 &&
     VAR_14->product == VAR_10 &&
     VAR_14->group == VAR_3)
  VAR_14->group = VAR_2;

 if ((VAR_12->global.usage_page << 16) == VAR_7)
  for (VAR_15 = 0; VAR_15 < VAR_12->local.usage_index; VAR_15++)
   if (VAR_12->local.usage[VAR_15] == VAR_1)
    VAR_12->scan_flags |= VAR_5;

 if ((VAR_12->global.usage_page << 16) >= VAR_8)
  VAR_12->scan_flags |= VAR_6;
}
