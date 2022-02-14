
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct as3645a {int flash_current; int assist_current; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct as3645a*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct as3645a *VAR_4)
{
 u8 VAR_5;

 VAR_5 = (VAR_4->flash_current << VAR_1)
     | (VAR_4->assist_current << VAR_0)
     | VAR_2;

 return FUNC_0(VAR_4, VAR_3, VAR_5);
}
