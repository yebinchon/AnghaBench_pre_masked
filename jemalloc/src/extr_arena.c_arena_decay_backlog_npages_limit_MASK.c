
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int* backlog; } ;
typedef TYPE_1__ arena_decay_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static size_t
FUNC_0(const arena_decay_t *VAR_3) {
 uint64_t VAR_4;
 size_t VAR_5;
 unsigned VAR_6;






 VAR_4 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_4 += VAR_3->backlog[VAR_6] * VAR_2[VAR_6];
 }
 VAR_5 = (size_t)(VAR_4 >> VAR_0);

 return VAR_5;
}
