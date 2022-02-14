
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ distance; } ;
typedef TYPE_1__ sorthelper ;



__attribute__((used)) static int FUNC_0(const void * VAR_0, const void * VAR_1) {
 sorthelper * VAR_2 = (sorthelper * ) VAR_0;
 sorthelper * VAR_3 = (sorthelper * ) VAR_1;
 if (VAR_2->distance > VAR_3->distance) {
  return 1;
 } else if (VAR_2->distance == VAR_3->distance) {
  return 0;
 } else {
  return -1;
 }
}
