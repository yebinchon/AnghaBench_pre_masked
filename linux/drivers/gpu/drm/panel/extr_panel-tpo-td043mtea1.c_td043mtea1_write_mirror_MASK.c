
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct td043mtea1_panel {scalar_t__ vmirror; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct td043mtea1_panel*,int,int) ;

__attribute__((used)) static int FUNC_1(struct td043mtea1_panel *VAR_4)
{
 u8 VAR_5 = VAR_1 | VAR_2 |
  VAR_0 | VAR_3;
 if (VAR_4->vmirror)
  VAR_5 &= ~VAR_2;

 return FUNC_0(VAR_4, 4, VAR_5);
}
