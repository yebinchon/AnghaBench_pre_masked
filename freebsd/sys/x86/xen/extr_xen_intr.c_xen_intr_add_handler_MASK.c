
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xen_intr_handle_t ;
struct xenisrc {int * xi_cookie; int xi_vector; } ;
typedef enum intr_type { ____Placeholder_intr_type } intr_type ;
typedef int driver_intr_t ;
typedef int driver_filter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int ,int ,int ,void*,int,int **,int ) ;
 int FUNC_1 (char*,char const*,int) ;
 struct xenisrc* FUNC_2 (int ) ;

int
FUNC_3(const char *VAR_2, driver_filter_t VAR_3,
    driver_intr_t VAR_4, void *VAR_5, enum intr_type VAR_6,
    xen_intr_handle_t VAR_7)
{
 struct xenisrc *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(VAR_7);
 if (VAR_8 == ((void*)0) || VAR_8->xi_cookie != ((void*)0))
  return (VAR_0);

 VAR_9 = FUNC_0(VAR_2, VAR_8->xi_vector,VAR_3, VAR_4, VAR_5,
     VAR_6|VAR_1, &VAR_8->xi_cookie, 0);
 if (VAR_9 != 0) {
  FUNC_1(
      "%s: xen_intr_add_handler: intr_add_handler failed: %d\n",
      VAR_2, VAR_9);
 }

 return (VAR_9);
}
