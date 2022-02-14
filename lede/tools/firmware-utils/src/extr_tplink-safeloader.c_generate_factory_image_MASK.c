
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void uint8_t ;
struct image_partition_entry {scalar_t__ size; scalar_t__ name; } ;
struct device_info {int partitions; int vendor; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,char*) ;
 void* FUNC_1 (size_t) ;
 int FUNC_2 (void*,int ,size_t) ;
 int FUNC_3 (void*,int,size_t) ;
 int FUNC_4 (void*,size_t) ;
 int FUNC_5 (void*,void*,size_t) ;
 int FUNC_6 (void*,int ,struct image_partition_entry const*) ;
 size_t FUNC_7 (int ) ;

__attribute__((used)) static void * FUNC_8(struct device_info *VAR_1, const struct image_partition_entry *VAR_2, size_t *VAR_3) {
 *VAR_3 = 0x1814;

 size_t VAR_4;
 for (VAR_4 = 0; VAR_2[VAR_4].name; VAR_4++)
  *VAR_3 += VAR_2[VAR_4].size;

 uint8_t *VAR_5 = FUNC_1(*VAR_3);
 if (!VAR_5)
  FUNC_0(1, VAR_0, "malloc");

 FUNC_3(VAR_5, 0xff, *VAR_3);
 FUNC_4(VAR_5, *VAR_3);

 if (VAR_1->vendor) {
  size_t VAR_6 = FUNC_7(VAR_1->vendor);
  FUNC_4(VAR_5+0x14, VAR_6);
  FUNC_2(VAR_5+0x18, VAR_1->vendor, VAR_6);
 }

 FUNC_6(VAR_5 + 0x1014, VAR_1->partitions, VAR_2);
 FUNC_5(VAR_5+0x04, VAR_5+0x14, *VAR_3-0x14);

 return VAR_5;
}
