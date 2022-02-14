
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct debug_view {int dummy; } ;
typedef int debug_info_t ;
struct TYPE_5__ {unsigned int level; int cpuid; scalar_t__ exception; } ;
struct TYPE_6__ {int stck; TYPE_1__ fields; } ;
struct TYPE_7__ {TYPE_2__ id; scalar_t__ caller; } ;
typedef TYPE_3__ debug_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (unsigned long,int ) ;
 scalar_t__ FUNC_1 (char*,char*,int,unsigned long,unsigned long,unsigned int,char*,int ,void*) ;
 int * VAR_2 ;

int FUNC_2(debug_info_t *VAR_3, struct debug_view *VAR_4,
    int VAR_5, debug_entry_t *VAR_6, char *VAR_7)
{
 unsigned long VAR_8, VAR_9, VAR_10;
 unsigned long VAR_11;
 unsigned int VAR_12;
 char *VAR_13;
 int VAR_14 = 0;

 VAR_12 = VAR_6->id.fields.level;
 VAR_8 = (*(unsigned long *) &VAR_2[0]) >> 4;
 VAR_9 = (VAR_6->id.stck >> 12) + VAR_8 - (VAR_0 >> 12);
 VAR_10 = FUNC_0(VAR_9, VAR_1);

 if (VAR_6->id.fields.exception)
  VAR_13 = "*";
 else
  VAR_13 = "-";
 VAR_11 = (unsigned long) VAR_6->caller;
 VAR_14 += FUNC_1(VAR_7, "%02i %011ld:%06lu %1u %1s %02i %pK  ",
        VAR_5, VAR_9, VAR_10, VAR_12, VAR_13,
        VAR_6->id.fields.cpuid, (void *)VAR_11);
 return VAR_14;
}
