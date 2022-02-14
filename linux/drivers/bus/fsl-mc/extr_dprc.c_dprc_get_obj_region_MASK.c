
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {scalar_t__ params; void* header; int member_0; } ;
struct dprc_rsp_get_obj_region {int base_addr; int size; int base_offset; } ;
struct dprc_region_desc {void* base_address; int size; void* base_offset; } ;
struct dprc_cmd_get_obj_region {char* obj_type; int region_index; int obj_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct fsl_mc_io*,int ,int*,int*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct fsl_mc_io*,struct fsl_mc_command*) ;
 int FUNC_6 (char*,char*,int) ;

int FUNC_7(struct fsl_mc_io *VAR_2,
   u32 VAR_3,
   u16 VAR_4,
   char *VAR_5,
   int VAR_6,
   u8 VAR_7,
   struct dprc_region_desc *VAR_8)
{
 struct fsl_mc_command VAR_9 = { 0 };
 struct dprc_cmd_get_obj_region *VAR_10;
 struct dprc_rsp_get_obj_region *VAR_11;
 u16 VAR_12, VAR_13;
 int VAR_14;


 VAR_14 = FUNC_1(VAR_2, 0,
         &VAR_12,
         &VAR_13);
 if (VAR_14)
  return VAR_14;







 if (VAR_12 > 6 || (VAR_12 == 6 && VAR_13 >= 3))
  VAR_9.header =
   FUNC_4(VAR_1,
          VAR_3, VAR_4);
 else
  VAR_9.header =
   FUNC_4(VAR_0,
          VAR_3, VAR_4);

 VAR_10 = (struct dprc_cmd_get_obj_region *)VAR_9.params;
 VAR_10->obj_id = FUNC_0(VAR_6);
 VAR_10->region_index = VAR_7;
 FUNC_6(VAR_10->obj_type, VAR_5, 16);
 VAR_10->obj_type[15] = '\0';


 VAR_14 = FUNC_5(VAR_2, &VAR_9);
 if (VAR_14)
  return VAR_14;


 VAR_11 = (struct dprc_rsp_get_obj_region *)VAR_9.params;
 VAR_8->base_offset = FUNC_3(VAR_11->base_offset);
 VAR_8->size = FUNC_2(VAR_11->size);
 if (VAR_12 > 6 || (VAR_12 == 6 && VAR_13 >= 3))
  VAR_8->base_address = FUNC_3(VAR_11->base_addr);
 else
  VAR_8->base_address = 0;

 return 0;
}
