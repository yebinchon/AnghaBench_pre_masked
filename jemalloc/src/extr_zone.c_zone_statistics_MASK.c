
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int malloc_zone_t ;
struct TYPE_3__ {scalar_t__ size_allocated; scalar_t__ max_size_in_use; scalar_t__ size_in_use; scalar_t__ blocks_in_use; } ;
typedef TYPE_1__ malloc_statistics_t ;



__attribute__((used)) static void
FUNC_0(malloc_zone_t *VAR_0, malloc_statistics_t *VAR_1) {

 VAR_1->blocks_in_use = 0;
 VAR_1->size_in_use = 0;
 VAR_1->max_size_in_use = 0;
 VAR_1->size_allocated = 0;
}
