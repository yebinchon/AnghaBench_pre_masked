
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_report {scalar_t__ id; int size; unsigned int maxfield; int * field; int device; } ;
typedef int __u8 ;


 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int *,int ,int) ;

void FUNC_2(struct hid_report *VAR_0, __u8 *VAR_1)
{
 unsigned VAR_2;

 if (VAR_0->id > 0)
  *VAR_1++ = VAR_0->id;

 FUNC_1(VAR_1, 0, ((VAR_0->size - 1) >> 3) + 1);
 for (VAR_2 = 0; VAR_2 < VAR_0->maxfield; VAR_2++)
  FUNC_0(VAR_0->device, VAR_0->field[VAR_2], VAR_1);
}
