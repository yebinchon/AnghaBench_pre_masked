
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfs_file_info {scalar_t__ refcnt; struct kfs_file_info* filename; struct kfs_file_info* iv; struct kfs_file_info* start; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct kfs_file_info*) ;

__attribute__((used)) static void FUNC_2 (struct kfs_file_info *VAR_0) {
  --VAR_0->refcnt;
  FUNC_0 (VAR_0->refcnt >= 0);
  if (VAR_0->refcnt) {
    return;
  }
  if (VAR_0->start) {
    FUNC_1 (VAR_0->start);
  }
  if (VAR_0->iv) {
    FUNC_1 (VAR_0->iv);
  }
  if (VAR_0->filename) {
    FUNC_1 (VAR_0->filename);
  }
  FUNC_1 (VAR_0);
}
