
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct table_info {int lookup; void* state; } ;
struct numarray_cfg {int size; void* main_ptr; } ;
struct numarray {int dummy; } ;
struct ip_fw_chain {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_1(struct ip_fw_chain *VAR_4, void **VAR_5, struct table_info *VAR_6,
    char *VAR_7, uint8_t VAR_8)
{
 struct numarray_cfg *VAR_9;

 VAR_9 = FUNC_0(sizeof(*VAR_9), VAR_0, VAR_1 | VAR_2);

 VAR_9->size = 16;
 VAR_9->main_ptr = FUNC_0(sizeof(struct numarray) * VAR_9->size, VAR_0,
     VAR_1 | VAR_2);

 *VAR_5 = VAR_9;
 VAR_6->state = VAR_9->main_ptr;
 VAR_6->lookup = VAR_3;

 return (0);
}
