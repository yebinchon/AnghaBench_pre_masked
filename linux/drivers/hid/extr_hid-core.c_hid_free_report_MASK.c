
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_report {unsigned int maxfield; struct hid_report** field; } ;


 int FUNC_0 (struct hid_report*) ;

__attribute__((used)) static void FUNC_1(struct hid_report *VAR_0)
{
 unsigned VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->maxfield; VAR_1++)
  FUNC_0(VAR_0->field[VAR_1]);
 FUNC_0(VAR_0);
}
