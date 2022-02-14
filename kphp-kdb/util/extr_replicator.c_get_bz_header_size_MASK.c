
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfs_file_info {int flags; } ;


 int FUNC_0 (int) ;
 long long FUNC_1 (struct kfs_file_info*) ;
 int FUNC_2 (long long) ;

__attribute__((used)) static int FUNC_3 (struct kfs_file_info *VAR_0) {
  FUNC_0 (VAR_0->flags & 16);
  long long VAR_1 = FUNC_1 (VAR_0);
  return FUNC_2 (VAR_1);
}
