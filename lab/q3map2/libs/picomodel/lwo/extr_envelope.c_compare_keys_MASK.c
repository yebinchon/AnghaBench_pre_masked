
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ time; } ;
typedef TYPE_1__ lwKey ;



__attribute__((used)) static int FUNC_0( lwKey *VAR_0, lwKey *VAR_1 ){
 return VAR_0->time > VAR_1->time ? 1 : VAR_0->time < VAR_1->time ? -1 : 0;
}
