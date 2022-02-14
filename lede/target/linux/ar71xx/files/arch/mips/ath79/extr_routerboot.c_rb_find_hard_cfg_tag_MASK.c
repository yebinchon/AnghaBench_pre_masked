
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int hard_cfg_size; int hard_cfg_data; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,int ,int ,int **,int *) ;

__attribute__((used)) static inline int
FUNC_1(u16 VAR_2, u8 **VAR_3, u16 *VAR_4)
{
 if (!VAR_1.hard_cfg_data ||
     !VAR_1.hard_cfg_size)
  return -VAR_0;

 return FUNC_0(VAR_1.hard_cfg_data,
       VAR_1.hard_cfg_size,
       VAR_2, VAR_3, VAR_4);
}
