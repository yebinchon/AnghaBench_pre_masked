
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sg_table {int nents; int sgl; } ;
struct sg_mapping_iter {scalar_t__ length; char* addr; } ;
struct fpga_manager {TYPE_1__* mops; } ;
struct fpga_image_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ initial_header_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fpga_manager*,struct fpga_image_info*,char*,size_t) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (scalar_t__,int ) ;
 size_t FUNC_3 (int ,int ,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct sg_mapping_iter*) ;
 int FUNC_5 (struct sg_mapping_iter*,int ,int ,int ) ;
 int FUNC_6 (struct sg_mapping_iter*) ;

__attribute__((used)) static int FUNC_7(struct fpga_manager *VAR_3,
      struct fpga_image_info *VAR_4,
      struct sg_table *VAR_5)
{
 struct sg_mapping_iter VAR_6;
 size_t VAR_7;
 char *VAR_8;
 int VAR_9;

 if (!VAR_3->mops->initial_header_size)
  return FUNC_0(VAR_3, VAR_4, ((void*)0), 0);





 FUNC_5(&VAR_6, VAR_5->sgl, VAR_5->nents, VAR_2);
 if (FUNC_4(&VAR_6) &&
     VAR_6.length >= VAR_3->mops->initial_header_size) {
  VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_6.addr,
           VAR_6.length);
  FUNC_6(&VAR_6);
  return VAR_9;
 }
 FUNC_6(&VAR_6);


 VAR_8 = FUNC_2(VAR_3->mops->initial_header_size, VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_5->sgl, VAR_5->nents, VAR_8,
    VAR_3->mops->initial_header_size);
 VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_8, VAR_7);

 FUNC_1(VAR_8);

 return VAR_9;
}
