
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_info {scalar_t__ fsize; int filename; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline int FUNC_1 (struct file_info *VAR_0, struct file_info *VAR_1) {
  if (VAR_0->fsize > VAR_1->fsize) {
    return 1;
  }
  if (VAR_0->fsize < VAR_1->fsize) {
    return -1;
  }
  return FUNC_0 (VAR_0->filename, VAR_1->filename);
}
