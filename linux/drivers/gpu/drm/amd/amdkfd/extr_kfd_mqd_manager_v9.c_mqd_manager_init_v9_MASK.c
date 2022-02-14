
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9_sdma_mqd {int dummy; } ;
struct v9_mqd {int dummy; } ;
struct mqd_manager {int mqd_size; void* debugfs_show_mqd; void* is_occupied; void* destroy_mqd; void* update_mqd; void* load_mqd; void* free_mqd; void* init_mqd; void* allocate_mqd; int get_wave_state; struct kfd_dev* dev; } ;
struct kfd_dev {int dummy; } ;
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
 int VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 int FUNC_1 (struct mqd_manager*) ;
 struct mqd_manager* FUNC_2 (int,int ) ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;

struct mqd_manager *FUNC_3(enum KFD_MQD_TYPE VAR_22,
  struct kfd_dev *VAR_23)
{
 struct mqd_manager *VAR_24;

 if (FUNC_0(VAR_22 >= VAR_1))
  return ((void*)0);

 VAR_24 = FUNC_2(sizeof(*VAR_24), VAR_0);
 if (!VAR_24)
  return ((void*)0);

 VAR_24->dev = VAR_23;

 switch (VAR_22) {
 case 131:
 case 132:
  VAR_24->allocate_mqd = VAR_3;
  VAR_24->init_mqd = VAR_12;
  VAR_24->free_mqd = VAR_9;
  VAR_24->load_mqd = VAR_17;
  VAR_24->update_mqd = VAR_19;
  VAR_24->destroy_mqd = VAR_7;
  VAR_24->is_occupied = VAR_15;
  VAR_24->get_wave_state = VAR_11;
  VAR_24->mqd_size = sizeof(struct v9_mqd);



  break;
 case 129:
  VAR_24->allocate_mqd = VAR_2;
  VAR_24->init_mqd = VAR_13;
  VAR_24->free_mqd = VAR_10;
  VAR_24->load_mqd = VAR_17;
  VAR_24->update_mqd = VAR_20;
  VAR_24->destroy_mqd = VAR_7;
  VAR_24->is_occupied = VAR_15;
  VAR_24->mqd_size = sizeof(struct v9_mqd);



  break;
 case 130:
  VAR_24->allocate_mqd = VAR_2;
  VAR_24->init_mqd = VAR_13;
  VAR_24->free_mqd = VAR_9;
  VAR_24->load_mqd = VAR_17;
  VAR_24->update_mqd = VAR_20;
  VAR_24->destroy_mqd = VAR_7;
  VAR_24->is_occupied = VAR_15;
  VAR_24->mqd_size = sizeof(struct v9_mqd);



  break;
 case 128:
  VAR_24->allocate_mqd = VAR_4;
  VAR_24->init_mqd = VAR_14;
  VAR_24->free_mqd = VAR_10;
  VAR_24->load_mqd = VAR_18;
  VAR_24->update_mqd = VAR_21;
  VAR_24->destroy_mqd = VAR_8;
  VAR_24->is_occupied = VAR_16;
  VAR_24->mqd_size = sizeof(struct v9_sdma_mqd);



  break;
 default:
  FUNC_1(VAR_24);
  return ((void*)0);
 }

 return VAR_24;
}
