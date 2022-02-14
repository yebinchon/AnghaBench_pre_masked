
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt_device {int dummy; } ;
struct mt_application {int quirks; int have_contact_count; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct mt_device *VAR_1, struct mt_application *VAR_2)
{
 if (!VAR_2->have_contact_count)
  VAR_2->quirks &= ~VAR_0;
}
