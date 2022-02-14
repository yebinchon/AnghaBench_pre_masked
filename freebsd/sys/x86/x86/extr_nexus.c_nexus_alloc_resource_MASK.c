
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct rman {int dummy; } ;
struct resource_list_entry {int start; int end; int count; } ;
struct resource {int dummy; } ;
struct nexus_device {int nx_resources; } ;
typedef int rman_res_t ;
typedef scalar_t__ device_t ;


 struct nexus_device* FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (scalar_t__,int,int,struct resource*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 struct rman* FUNC_4 (int) ;
 struct resource_list_entry* FUNC_5 (int *,int,int) ;
 int FUNC_6 (struct resource*) ;
 struct resource* FUNC_7 (struct rman*,int,int,int,int,scalar_t__) ;
 int FUNC_8 (struct resource*,int) ;

__attribute__((used)) static struct resource *
FUNC_9(device_t VAR_1, device_t VAR_2, int VAR_3, int *VAR_4,
       rman_res_t VAR_5, rman_res_t VAR_6, rman_res_t VAR_7,
       u_int VAR_8)
{
 struct nexus_device *VAR_9 = FUNC_0(VAR_2);
 struct resource *VAR_10;
 struct resource_list_entry *VAR_11;
 struct rman *VAR_12;
 int VAR_13 = VAR_8 & VAR_0;







 if (FUNC_1(VAR_5, VAR_6) && (VAR_7 == 1)) {
  if (FUNC_3(VAR_2) != VAR_1 || VAR_9 == ((void*)0))
   return(((void*)0));
  VAR_11 = FUNC_5(&VAR_9->nx_resources, VAR_3, *VAR_4);
  if (VAR_11 == ((void*)0))
   return(((void*)0));
  VAR_5 = VAR_11->start;
  VAR_6 = VAR_11->end;
  VAR_7 = VAR_11->count;
 }

 VAR_8 &= ~VAR_0;
 VAR_12 = FUNC_4(VAR_3);
 if (VAR_12 == ((void*)0))
  return (((void*)0));

 VAR_10 = FUNC_7(VAR_12, VAR_5, VAR_6, VAR_7, VAR_8, VAR_2);
 if (VAR_10 == ((void*)0))
  return 0;
 FUNC_8(VAR_10, *VAR_4);

 if (VAR_13) {
  if (FUNC_2(VAR_2, VAR_3, *VAR_4, VAR_10)) {
   FUNC_6(VAR_10);
   return 0;
  }
 }

 return VAR_10;
}
