
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct table_info {int lookup; void* state; } ;
struct ip_fw_chain {int dummy; } ;
struct iftable_cfg {int size; void* main_ptr; struct ip_fw_chain* ch; int ii; } ;
struct ifidx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int,int ,int) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_2(struct ip_fw_chain *VAR_5, void **VAR_6, struct table_info *VAR_7,
    char *VAR_8, uint8_t VAR_9)
{
 struct iftable_cfg *VAR_10;

 VAR_10 = FUNC_1(sizeof(struct iftable_cfg), VAR_1, VAR_2 | VAR_3);

 VAR_10->ii = FUNC_0(VAR_0);
 VAR_10->size = VAR_0;
 VAR_10->main_ptr = FUNC_1(sizeof(struct ifidx) * VAR_10->size, VAR_1,
     VAR_2 | VAR_3);
 VAR_10->ch = VAR_5;

 *VAR_6 = VAR_10;
 VAR_7->state = VAR_10->main_ptr;
 VAR_7->lookup = VAR_4;

 return (0);
}
