
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * xen_intr_handle_t ;
struct xenisrc {size_t xi_port; int xi_intsrc; int xi_vector; int xi_refcount; } ;
typedef size_t evtchn_port_t ;
typedef enum intr_type { ____Placeholder_intr_type } intr_type ;
typedef enum evtchn_type { ____Placeholder_evtchn_type } evtchn_type ;
typedef int * driver_intr_t ;
typedef int * driver_filter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (char const*,int *,int *,void*,int,int *) ;
 struct xenisrc* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int ) ;
 struct xenisrc* FUNC_8 (int) ;
 int VAR_4 ;
 struct xenisrc** VAR_5 ;
 int FUNC_9 (struct xenisrc*) ;

__attribute__((used)) static int
FUNC_10(struct xenisrc **VAR_6, evtchn_port_t VAR_7,
    enum evtchn_type VAR_8, const char *VAR_9, driver_filter_t VAR_10,
    driver_intr_t VAR_11, void *VAR_12, enum intr_type VAR_13,
    xen_intr_handle_t *VAR_14)
{
 struct xenisrc *VAR_15;
 int VAR_16;

 *VAR_6 = ((void*)0);
 if (VAR_14 == ((void*)0)) {
  FUNC_3("%s: xen_intr_bind_isrc: Bad event handle\n",
      VAR_9);
  return (VAR_0);
 }

 FUNC_1(&VAR_4);
 VAR_15 = FUNC_8(VAR_8);
 if (VAR_15 == ((void*)0)) {
  VAR_15 = FUNC_6(VAR_8, VAR_3);
  if (VAR_15 == ((void*)0)) {
   FUNC_2(&VAR_4);
   return (VAR_1);
  }
 }
 VAR_15->xi_port = VAR_7;
 VAR_5[VAR_7] = VAR_15;
 FUNC_4(&VAR_15->xi_refcount, 1);
 FUNC_2(&VAR_4);


 *VAR_14 = &VAR_15->xi_vector;
 if (VAR_10 == ((void*)0) && VAR_11 == ((void*)0)) {





  *VAR_6 = VAR_15;
  return (0);
 }

 VAR_16 = FUNC_5(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13,
     *VAR_14);
 if (VAR_16 != 0) {
  FUNC_9(VAR_15);
  return (VAR_16);
 }
 *VAR_6 = VAR_15;
 return (0);
}
