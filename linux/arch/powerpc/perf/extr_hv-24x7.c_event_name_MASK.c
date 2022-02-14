
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hv_24x7_event_data {scalar_t__ remainder; int event_name_len; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static char *FUNC_1(struct hv_24x7_event_data *VAR_0, int *VAR_1)
{
 *VAR_1 = FUNC_0(VAR_0->event_name_len) - 2;
 return (char *)VAR_0->remainder;
}
