
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct cacheinfo {int priv; scalar_t__ physical_line_partition; scalar_t__ number_of_sets; int size; scalar_t__ ways_of_associativity; scalar_t__ coherency_line_size; int type; int level; int attributes; int id; } ;
struct TYPE_11__ {scalar_t__ physical_line_partition; scalar_t__ ways_of_associativity; scalar_t__ coherency_line_size; } ;
struct TYPE_12__ {TYPE_5__ split; } ;
struct TYPE_9__ {scalar_t__ number_of_sets; } ;
struct TYPE_10__ {TYPE_3__ split; } ;
struct TYPE_7__ {size_t type; int level; } ;
struct TYPE_8__ {TYPE_1__ split; } ;
struct _cpuid4_info_regs {int nb; TYPE_6__ ebx; TYPE_4__ ecx; int size; TYPE_2__ eax; int id; } ;


 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_0(struct cacheinfo *VAR_2,
    struct _cpuid4_info_regs *VAR_3)
{
 VAR_2->id = VAR_3->id;
 VAR_2->attributes = VAR_0;
 VAR_2->level = VAR_3->eax.split.level;
 VAR_2->type = VAR_1[VAR_3->eax.split.type];
 VAR_2->coherency_line_size =
    VAR_3->ebx.split.coherency_line_size + 1;
 VAR_2->ways_of_associativity =
    VAR_3->ebx.split.ways_of_associativity + 1;
 VAR_2->size = VAR_3->size;
 VAR_2->number_of_sets = VAR_3->ecx.split.number_of_sets + 1;
 VAR_2->physical_line_partition =
    VAR_3->ebx.split.physical_line_partition + 1;
 VAR_2->priv = VAR_3->nb;
}
