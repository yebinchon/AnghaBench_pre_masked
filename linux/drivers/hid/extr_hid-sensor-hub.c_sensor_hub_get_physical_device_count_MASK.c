
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {int maxcollection; struct hid_collection* collection; } ;
struct hid_collection {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct hid_device *VAR_2)
{
 int VAR_3;
 int VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_2->maxcollection; ++VAR_3) {
  struct hid_collection *VAR_5 = &VAR_2->collection[VAR_3];
  if (VAR_5->type == VAR_1 ||
      VAR_5->type == VAR_0)
   ++VAR_4;
 }

 return VAR_4;
}
