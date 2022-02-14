
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct image_partition_entry {char const* member_0; size_t member_1; int data; int member_2; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (size_t) ;

__attribute__((used)) static struct image_partition_entry FUNC_2(const char *VAR_1, size_t VAR_2) {
 struct image_partition_entry VAR_3 = {VAR_1, VAR_2, FUNC_1(VAR_2)};
 if (!VAR_3.data)
  FUNC_0(1, VAR_0, "malloc");

 return VAR_3;
}
