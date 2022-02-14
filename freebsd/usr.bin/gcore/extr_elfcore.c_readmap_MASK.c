
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* vm_offset_t ;
typedef TYPE_1__* vm_map_entry_t ;
struct kinfo_vmentry {int kve_protection; int kve_flags; scalar_t__ kve_type; scalar_t__ kve_end; scalar_t__ kve_start; } ;
typedef int pid_t ;
struct TYPE_4__ {int protection; struct TYPE_4__* next; void* end; void* start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct kinfo_vmentry*) ;
 struct kinfo_vmentry* FUNC_4 (int ,int*) ;
 int VAR_13 ;

__attribute__((used)) static vm_map_entry_t
FUNC_5(pid_t VAR_14)
{
 vm_map_entry_t VAR_15, *VAR_16, VAR_17;
 struct kinfo_vmentry *VAR_18, *VAR_19;
 int VAR_20, VAR_21;

 VAR_18 = FUNC_4(VAR_14, &VAR_21);
 if (VAR_18 == ((void*)0))
  FUNC_1(1, "cannot retrieve mappings for %u process", VAR_14);

 VAR_17 = ((void*)0);
 VAR_16 = &VAR_17;
 for (VAR_20 = 0; VAR_20 < VAR_21; VAR_20++) {
  VAR_19 = &VAR_18[VAR_20];







  if ((VAR_19->kve_protection & VAR_2) == 0 ||
      (VAR_19->kve_flags & VAR_0) != 0 ||
      VAR_19->kve_type == VAR_3 ||
      VAR_19->kve_type == VAR_7 ||
      ((VAR_13 & VAR_9) == 0 &&
      VAR_19->kve_type != VAR_4 &&
      VAR_19->kve_type != VAR_8 &&
      VAR_19->kve_type != VAR_6 &&
      VAR_19->kve_type != VAR_5))
   continue;

  VAR_15 = FUNC_0(1, sizeof(*VAR_15));
  if (VAR_15 == ((void*)0))
   FUNC_2(1, "out of memory");
  VAR_15->start = (vm_offset_t)VAR_19->kve_start;
  VAR_15->end = (vm_offset_t)VAR_19->kve_end;
  VAR_15->protection = VAR_11 | VAR_12;
  if ((VAR_19->kve_protection & VAR_1) != 0)
   VAR_15->protection |= VAR_10;

  *VAR_16 = VAR_15;
  VAR_16 = &VAR_15->next;
 }
 FUNC_3(VAR_18);
 return (VAR_17);
}
