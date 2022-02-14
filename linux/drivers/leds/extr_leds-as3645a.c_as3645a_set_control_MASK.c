
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int peak; } ;
struct as3645a {scalar_t__ strobe_source; TYPE_1__ cfg; } ;
typedef enum as_mode { ____Placeholder_as_mode } as_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct as3645a*,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct as3645a *VAR_7, enum as_mode VAR_8, bool VAR_9)
{
 u8 VAR_10;


 VAR_10 = (VAR_7->cfg.peak << VAR_0)
     | (VAR_9 ? VAR_1 : 0)
     | VAR_8;

 if (VAR_8 == VAR_5 &&
     VAR_7->strobe_source == VAR_6)
  VAR_10 |= VAR_4
      | VAR_3;

 return FUNC_0(VAR_7, VAR_2, VAR_10);
}
