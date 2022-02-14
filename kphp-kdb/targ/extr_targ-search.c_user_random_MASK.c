
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ uid; } ;
typedef TYPE_1__ user_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static int FUNC_0 (user_t *VAR_2) {
  return ((unsigned) VAR_2->uid * VAR_0 + VAR_1) % 1000;
}
