
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_2__ {void* raw_entry; scalar_t__ n_events; void* attrs; void* attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 void* FUNC_0 (struct device*,scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_4)
{
 VAR_3->attr = FUNC_0(VAR_4, VAR_3->n_events + 1,
  sizeof(*VAR_3->attr), VAR_1 | VAR_2);
 if (!VAR_3->attr)
  return -VAR_0;

 VAR_3->attrs = FUNC_0(VAR_4, VAR_3->n_events + 1,
  sizeof(*VAR_3->attrs), VAR_1 | VAR_2);
 if (!VAR_3->attrs)
  return -VAR_0;

 VAR_3->raw_entry = FUNC_0(VAR_4, VAR_3->n_events,
  sizeof(*VAR_3->raw_entry), VAR_1 | VAR_2);
 if (!VAR_3->raw_entry)
  return -VAR_0;

 return 0;
}
