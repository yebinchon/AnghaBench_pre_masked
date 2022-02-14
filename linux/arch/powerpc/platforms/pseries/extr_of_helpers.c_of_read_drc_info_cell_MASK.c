
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {int dummy; } ;
struct of_drc_info {char* drc_type; char* drc_name_prefix; int drc_index_start; int drc_name_suffix_start; int num_sequential_elems; int sequential_inc; int drc_power_domain; scalar_t__ last_drc_index; } ;
typedef int __be32 ;


 int VAR_0 ;
 char* FUNC_0 (struct property*,char const*) ;
 int * FUNC_1 (struct property*,int const*,int*) ;

int FUNC_2(struct property **VAR_1, const __be32 **VAR_2,
   struct of_drc_info *VAR_3)
{
 const char *VAR_4;
 const __be32 *VAR_5;

 if (!VAR_3)
  return -VAR_0;


 VAR_4 = VAR_3->drc_type = (char*) (*VAR_2);
 VAR_4 = FUNC_0(*VAR_1, VAR_4);
 if (!VAR_4)
  return -VAR_0;


 VAR_3->drc_name_prefix = (char *)VAR_4;
 VAR_4 = FUNC_0(*VAR_1, VAR_4);
 if (!VAR_4)
  return -VAR_0;


 VAR_5 = (const __be32 *)VAR_4;
 VAR_5 = FUNC_1(*VAR_1, VAR_5, &VAR_3->drc_index_start);
 if (!VAR_5)
  return -VAR_0;


 VAR_5 = FUNC_1(*VAR_1, VAR_5, &VAR_3->drc_name_suffix_start);
 if (!VAR_5)
  return -VAR_0;


 VAR_5 = FUNC_1(*VAR_1, VAR_5, &VAR_3->num_sequential_elems);
 if (!VAR_5)
  return -VAR_0;


 VAR_5 = FUNC_1(*VAR_1, VAR_5, &VAR_3->sequential_inc);
 if (!VAR_5)
  return -VAR_0;


 VAR_5 = FUNC_1(*VAR_1, VAR_5, &VAR_3->drc_power_domain);
 if (!VAR_5)
  return -VAR_0;


 (*VAR_2) = (void *)VAR_5;
 VAR_3->last_drc_index = VAR_3->drc_index_start +
  ((VAR_3->num_sequential_elems - 1) * VAR_3->sequential_inc);

 return 0;
}
