
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ttm_mem_type_manager {void* default_caching; void* available_caching; void* flags; int * func; } ;
struct ttm_bo_device {int dummy; } ;


 int FUNC_0 (char*,unsigned int) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;


 int VAR_4 ;

__attribute__((used)) static int FUNC_1(struct ttm_bo_device *VAR_5, uint32_t VAR_6,
        struct ttm_mem_type_manager *VAR_7)
{
 switch (VAR_6) {
 case 129:

  VAR_7->flags = VAR_1;
  VAR_7->available_caching = VAR_3;
  VAR_7->default_caching = VAR_2;
  break;
 case 128:
  VAR_7->func = &VAR_4;
  VAR_7->flags = VAR_1;
  VAR_7->available_caching = VAR_3;
  VAR_7->default_caching = VAR_2;
  break;
 default:
  FUNC_0("Unsupported memory type %u\n", (unsigned int)VAR_6);
  return -VAR_0;
 }
 return 0;
}
