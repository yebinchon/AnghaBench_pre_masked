
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mqd_manager {int mqd_size; void* debugfs_show_mqd; void* is_occupied; void* destroy_mqd; void* update_mqd; void* load_mqd; void* free_mqd; void* init_mqd; void* allocate_mqd; struct kfd_dev* dev; } ;
struct kfd_dev {int dummy; } ;
struct cik_sdma_rlc_registers {int dummy; } ;
struct cik_mqd {int dummy; } ;
typedef enum KFD_MQD_TYPE { ____Placeholder_KFD_MQD_TYPE } KFD_MQD_TYPE ;


 int VAR_0 ;




 int VAR_1 ;

 scalar_t__ FUNC_0 (int) ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 int FUNC_1 (struct mqd_manager*) ;
 struct mqd_manager* FUNC_2 (int,int ) ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;

struct mqd_manager *FUNC_3(enum KFD_MQD_TYPE VAR_21,
  struct kfd_dev *VAR_22)
{
 struct mqd_manager *VAR_23;

 if (FUNC_0(VAR_21 >= VAR_1))
  return ((void*)0);

 VAR_23 = FUNC_2(sizeof(*VAR_23), VAR_0);
 if (!VAR_23)
  return ((void*)0);

 VAR_23->dev = VAR_22;

 switch (VAR_21) {
 case 131:
 case 132:
  VAR_23->allocate_mqd = VAR_3;
  VAR_23->init_mqd = VAR_11;
  VAR_23->free_mqd = VAR_9;
  VAR_23->load_mqd = VAR_16;
  VAR_23->update_mqd = VAR_18;
  VAR_23->destroy_mqd = VAR_7;
  VAR_23->is_occupied = VAR_14;
  VAR_23->mqd_size = sizeof(struct cik_mqd);



  break;
 case 129:
  VAR_23->allocate_mqd = VAR_2;
  VAR_23->init_mqd = VAR_12;
  VAR_23->free_mqd = VAR_10;
  VAR_23->load_mqd = VAR_16;
  VAR_23->update_mqd = VAR_19;
  VAR_23->destroy_mqd = VAR_7;
  VAR_23->is_occupied = VAR_14;
  VAR_23->mqd_size = sizeof(struct cik_mqd);



  break;
 case 130:
  VAR_23->allocate_mqd = VAR_2;
  VAR_23->init_mqd = VAR_12;
  VAR_23->free_mqd = VAR_9;
  VAR_23->load_mqd = VAR_16;
  VAR_23->update_mqd = VAR_19;
  VAR_23->destroy_mqd = VAR_7;
  VAR_23->is_occupied = VAR_14;
  VAR_23->mqd_size = sizeof(struct cik_mqd);



  break;
 case 128:
  VAR_23->allocate_mqd = VAR_4;
  VAR_23->init_mqd = VAR_13;
  VAR_23->free_mqd = VAR_10;
  VAR_23->load_mqd = VAR_17;
  VAR_23->update_mqd = VAR_20;
  VAR_23->destroy_mqd = VAR_8;
  VAR_23->is_occupied = VAR_15;
  VAR_23->mqd_size = sizeof(struct cik_sdma_rlc_registers);



  break;
 default:
  FUNC_1(VAR_23);
  return ((void*)0);
 }

 return VAR_23;
}
