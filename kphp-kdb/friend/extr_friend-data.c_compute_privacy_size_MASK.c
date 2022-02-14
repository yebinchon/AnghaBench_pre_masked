
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int y; int* List; } ;
typedef TYPE_1__ privacy_t ;



__attribute__((used)) static int FUNC_0 (privacy_t *VAR_0) {
  int VAR_1 = VAR_0->y & 255;
  return sizeof(privacy_t) + 4*(VAR_1 == 255 ? VAR_0->List[0]+1 : VAR_1) + 4;
}
