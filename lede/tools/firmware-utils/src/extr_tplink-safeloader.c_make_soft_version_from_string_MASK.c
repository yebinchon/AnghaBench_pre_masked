
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct image_partition_entry {scalar_t__* data; } ;


 struct image_partition_entry FUNC_0 (char*,size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,char const*,int) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static struct image_partition_entry FUNC_4(const char *VAR_0) {

 uint32_t VAR_1 = FUNC_3(VAR_0) + 1;

 size_t VAR_2 = 2*sizeof(uint32_t) + VAR_1 + 1;
 struct image_partition_entry VAR_3 = FUNC_0("soft-version", VAR_2);

 uint32_t *VAR_4 = (uint32_t *)VAR_3.data;
 VAR_4[0] = FUNC_1(VAR_1);
 VAR_4[1] = 0;
 FUNC_2(&VAR_4[2], VAR_0, VAR_1);

 VAR_3.data[VAR_2 - 1] = 0;

 return VAR_3;
}
