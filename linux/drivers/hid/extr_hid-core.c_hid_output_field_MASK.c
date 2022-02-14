
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_field {unsigned int report_count; unsigned int report_offset; unsigned int report_size; scalar_t__ logical_minimum; int * value; } ;
struct hid_device {int dummy; } ;
typedef int __u8 ;


 int FUNC_0 (struct hid_device const*,int *,unsigned int,unsigned int,int ) ;
 int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(const struct hid_device *VAR_0,
        struct hid_field *VAR_1, __u8 *VAR_2)
{
 unsigned VAR_3 = VAR_1->report_count;
 unsigned VAR_4 = VAR_1->report_offset;
 unsigned VAR_5 = VAR_1->report_size;
 unsigned VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  if (VAR_1->logical_minimum < 0)
   FUNC_0(VAR_0, VAR_2, VAR_4 + VAR_6 * VAR_5, VAR_5,
      FUNC_1(VAR_1->value[VAR_6], VAR_5));
  else
   FUNC_0(VAR_0, VAR_2, VAR_4 + VAR_6 * VAR_5, VAR_5,
      VAR_1->value[VAR_6]);
 }
}
