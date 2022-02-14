
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * is_pic; } ;
struct xenisrc {int xi_vector; int xi_type; TYPE_1__ xi_intsrc; } ;
typedef enum evtchn_type { ____Placeholder_evtchn_type } evtchn_type ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 struct xenisrc* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static struct xenisrc *
FUNC_8(enum evtchn_type VAR_10, int VAR_11)
{
 static int VAR_12;
 struct xenisrc *VAR_13;

 FUNC_0(FUNC_5(&VAR_7), ("Evtchn alloc lock not held"));

 if (VAR_6 > VAR_4) {
  if (!VAR_12) {
   VAR_12 = 1;
   FUNC_7("xen_intr_alloc: Event channels exhausted.\n");
  }
  return (((void*)0));
 }

 if (VAR_10 != VAR_0) {
  VAR_11 = VAR_5 + VAR_6;
  VAR_6++;
 }

 FUNC_0((FUNC_1(VAR_11) == ((void*)0)),
     ("Trying to use an already allocated vector"));

 FUNC_6(&VAR_7);
 VAR_13 = FUNC_3(sizeof(*VAR_13), VAR_2, VAR_1 | VAR_3);
 VAR_13->xi_intsrc.is_pic =
     (VAR_10 == VAR_0) ? &VAR_9 : &VAR_8;
 VAR_13->xi_vector = VAR_11;
 VAR_13->xi_type = VAR_10;
 FUNC_2(&VAR_13->xi_intsrc);
 FUNC_4(&VAR_7);

 return (VAR_13);
}
