
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int vmexit_ctrl; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static inline u32 FUNC_0(void)
{
 u32 VAR_7 = VAR_6.vmexit_ctrl;
 if (VAR_5 == VAR_0)
  VAR_7 &= ~(VAR_4 |
     VAR_1);

 return VAR_7 &
  ~(VAR_3 | VAR_2);
}
