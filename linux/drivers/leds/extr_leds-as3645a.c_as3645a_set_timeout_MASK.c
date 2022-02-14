
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int voltage_reference; } ;
struct as3645a {int timeout; int indicator_current; TYPE_1__ cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct as3645a*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct as3645a *VAR_4)
{
 u8 VAR_5;

 VAR_5 = VAR_4->timeout << VAR_2;

 VAR_5 |= (VAR_4->cfg.voltage_reference
  << VAR_3)
     | ((VAR_4->indicator_current ? VAR_4->indicator_current - 1 : 0)
   << VAR_0);

 return FUNC_0(VAR_4, VAR_1, VAR_5);
}
