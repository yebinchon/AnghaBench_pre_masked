
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_field {int logical_maximum; int logical_minimum; } ;



__attribute__((used)) static int FUNC_0(int VAR_0, struct hid_field *VAR_1)
{
 return VAR_0 == 0 ? 0 : VAR_0 >
     0 ? VAR_0 * VAR_1->logical_maximum / 0x7fff : VAR_0 *
     VAR_1->logical_minimum / -0x8000;
}
