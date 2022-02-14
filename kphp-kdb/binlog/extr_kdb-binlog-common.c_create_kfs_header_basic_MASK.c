
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfs_file_header {int finished; int kfs_version; int magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kfs_file_header*,int ,int) ;

void FUNC_1 (struct kfs_file_header *VAR_2) {
  FUNC_0 (VAR_2, 0, 4096);
  VAR_2->magic = VAR_0;
  VAR_2->kfs_version = VAR_1;
  VAR_2->finished = -1;
}
