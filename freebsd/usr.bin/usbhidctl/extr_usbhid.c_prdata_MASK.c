
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct hid_item {int pos; int report_count; scalar_t__ logical_minimum; scalar_t__ report_size; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct hid_item*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(u_char *VAR_1, struct hid_item *VAR_2)
{
 u_int VAR_3;
 int VAR_4, VAR_5;

 VAR_5 = VAR_2->pos;
 for (VAR_4 = 0; VAR_4 < VAR_2->report_count; VAR_4++) {
  VAR_3 = FUNC_0(VAR_1, VAR_2);
  if (VAR_4 > 0)
   FUNC_1(" ");
  if (VAR_2->logical_minimum < 0)
   FUNC_1("%d", (int)VAR_3);
  else
   FUNC_1("%u", VAR_3);
                if (VAR_0)
   FUNC_1(" [0x%x]", VAR_3);
  VAR_2->pos += VAR_2->report_size;
 }
 VAR_2->pos = VAR_5;
}
