
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct update_sd_entry {int data; int cmd; } ;
typedef enum i40iw_sd_entry_type { ____Placeholder_i40iw_sd_entry_type } i40iw_sd_entry_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline void FUNC_0(u32 VAR_5, enum i40iw_sd_entry_type VAR_6,
          struct update_sd_entry *VAR_7)
{
 VAR_7->data = (VAR_3 <<
   VAR_1) |
   (((VAR_6 == VAR_4) ? 0 : 1) <<
    VAR_2);
 VAR_7->cmd = (VAR_5 | (1 << VAR_0) | (1 << 15));
}
