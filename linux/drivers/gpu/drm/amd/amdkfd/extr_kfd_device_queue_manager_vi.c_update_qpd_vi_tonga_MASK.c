
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcm_process_device {int sh_mem_config; int sh_mem_bases; scalar_t__ sh_mem_ape1_base; scalar_t__ sh_mem_ape1_limit; } ;
struct kfd_process_device {int dummy; } ;
struct device_queue_manager {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (struct kfd_process_device*) ;
 int FUNC_2 (char*,unsigned int,int ) ;
 struct kfd_process_device* FUNC_3 (struct qcm_process_device*) ;

__attribute__((used)) static int FUNC_4(struct device_queue_manager *VAR_5,
   struct qcm_process_device *VAR_6)
{
 struct kfd_process_device *VAR_7;
 unsigned int VAR_8;

 VAR_7 = FUNC_3(VAR_6);


 if (VAR_6->sh_mem_config == 0) {
  VAR_6->sh_mem_config =
    VAR_1 <<
     VAR_2 |
    VAR_0 <<
     VAR_4 |
    VAR_0 <<
     VAR_3;

  VAR_6->sh_mem_ape1_limit = 0;
  VAR_6->sh_mem_ape1_base = 0;
 }




 VAR_8 = FUNC_1(VAR_7);
 VAR_6->sh_mem_bases = FUNC_0(VAR_8);

 FUNC_2("sh_mem_bases nybble: 0x%X and register 0x%X\n",
  VAR_8, VAR_6->sh_mem_bases);

 return 0;
}
