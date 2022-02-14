
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pidff_device {int hid; int * reports; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(struct pidff_device *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 <= VAR_0; VAR_2++) {
  if (!VAR_1->reports[VAR_2]) {
   FUNC_0(VAR_1->hid, "%d missing\n", VAR_2);
   return 0;
  }
 }

 return 1;
}
