
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned int nlevels; int ngroups; TYPE_1__* levels; int nbits; } ;
typedef TYPE_2__ const bitmap_info_t ;
struct TYPE_6__ {int group_offset; } ;


 int FUNC_0 (unsigned int,unsigned int,char*,size_t) ;
 int FUNC_1 (int ,int ,char*,...) ;
 int FUNC_2 (TYPE_2__ const*,size_t) ;
 int FUNC_3 (TYPE_2__ const*) ;

__attribute__((used)) static void
FUNC_4(const bitmap_info_t *VAR_0, size_t VAR_1) {
 bitmap_info_t VAR_2;
 FUNC_2(&VAR_2, VAR_1);

 FUNC_1(FUNC_3(VAR_0), FUNC_3(&VAR_2),
     "Unexpected difference between static and dynamic initialization, "
     "nbits=%zu", VAR_1);
 FUNC_1(VAR_0->nbits, VAR_2.nbits,
     "Unexpected difference between static and dynamic initialization, "
     "nbits=%zu", VAR_1);
 FUNC_1(VAR_0->ngroups, VAR_2.ngroups,
     "Unexpected difference between static and dynamic initialization");

}
