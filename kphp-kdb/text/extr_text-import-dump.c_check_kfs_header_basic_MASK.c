
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfs_file_header {scalar_t__ magic; scalar_t__ header_crc32; scalar_t__ kfs_version; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct kfs_file_header*,int) ;

int FUNC_2 (struct kfs_file_header *VAR_2) {
  FUNC_0 (VAR_2->magic == VAR_0);
  if (FUNC_1 (VAR_2, 4092) != VAR_2->header_crc32) {
    return -1;
  }
  if (VAR_2->kfs_version != VAR_1) {
    return -1;
  }
  return 0;
}
