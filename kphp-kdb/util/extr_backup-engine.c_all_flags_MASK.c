
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_info {int flags; } ;



__attribute__((used)) static int FUNC_0 (struct file_info *VAR_0, int VAR_1) {
  return (VAR_0->flags & VAR_1) == VAR_1;
}
