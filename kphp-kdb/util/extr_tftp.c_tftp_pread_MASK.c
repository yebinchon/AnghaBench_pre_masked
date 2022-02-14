
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ size; scalar_t__ data; } ;
typedef TYPE_1__ tftp_file_t ;
typedef int ssize_t ;
typedef scalar_t__ off_t ;


 int FUNC_0 (void*,scalar_t__,size_t) ;

ssize_t FUNC_1 (tftp_file_t *VAR_0, void *VAR_1, size_t VAR_2, off_t VAR_3) {
  if (VAR_3 < 0 || VAR_3 > VAR_0->size) {
    return -1;
  }
  if (VAR_2 > VAR_0->size - VAR_3) {
    VAR_2 = VAR_0->size - VAR_3;
  }
  FUNC_0 (VAR_1, VAR_0->data + VAR_3, VAR_2);
  return VAR_2;
}
