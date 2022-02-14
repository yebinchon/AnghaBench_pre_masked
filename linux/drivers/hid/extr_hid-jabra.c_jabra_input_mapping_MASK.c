
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_usage {int hid; int usage_index; int collection_index; } ;
struct hid_input {int dummy; } ;
struct hid_field {int application; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int ,int ,int ,char*) ;

__attribute__((used)) static int FUNC_1(struct hid_device *VAR_3,
          struct hid_input *VAR_4,
          struct hid_field *VAR_5,
          struct hid_usage *VAR_6,
          unsigned long **VAR_7, int *VAR_8)
{
 int VAR_9 =
  ((VAR_6->hid & VAR_2) >= VAR_1 &&
   (VAR_6->hid & VAR_2) <= VAR_0);

 FUNC_0("hid=0x%08x appl=0x%08x coll_idx=0x%02x usage_idx=0x%02x: %s\n",
  VAR_6->hid,
  VAR_5->application,
  VAR_6->collection_index,
  VAR_6->usage_index,
  VAR_9 ? "ignored" : "defaulted");


 return VAR_9 ? -1 : 0;
}
