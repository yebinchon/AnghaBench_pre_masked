
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hv_dynmem_device {int dummy; } ;
struct dm_info_msg {scalar_t__ info; } ;
struct dm_info_header {int type; int data_size; } ;
typedef int __u64 ;



 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void FUNC_2(struct hv_dynmem_device *VAR_1, struct dm_info_msg *VAR_2)
{
 struct dm_info_header *VAR_3;

 VAR_3 = (struct dm_info_header *)VAR_2->info;

 switch (VAR_3->type) {
 case 128:
  if (VAR_3->data_size == sizeof(__u64)) {
   __u64 *VAR_4 = (__u64 *)&VAR_3[1];

   FUNC_0("Max. dynamic memory size: %llu MB\n",
    (*VAR_4) >> (20 - VAR_0));
  }

  break;
 default:
  FUNC_1("Received Unknown type: %d\n", VAR_3->type);
 }
}
