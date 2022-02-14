
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct gss_resource {int gr_id; void* gr_res; } ;


 int FUNC_0 (int *,struct gss_resource*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct gss_resource* FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static uint64_t
FUNC_3(void *VAR_6)
{
 struct gss_resource *VAR_7;

 if (!VAR_6)
  return (0);

 VAR_7 = FUNC_1(sizeof(struct gss_resource));
 if (!VAR_7)
  return (0);
 VAR_7->gr_id = (VAR_2++) + ((uint64_t) VAR_5 << 32);
 VAR_7->gr_res = VAR_6;
 FUNC_0(&VAR_4, VAR_7, VAR_1);
 VAR_3++;
 if (VAR_0 > 1)
  FUNC_2("%d resources allocated\n", VAR_3);

 return (VAR_7->gr_id);
}
