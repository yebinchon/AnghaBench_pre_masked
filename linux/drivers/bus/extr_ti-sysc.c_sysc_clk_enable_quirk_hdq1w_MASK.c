
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sysc {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct sysc*,int) ;
 int FUNC_2 (struct sysc*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct sysc *VAR_0)
{
 int VAR_1 = 0x0c;
 u16 VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 VAR_2 |= FUNC_0(5);
 FUNC_2(VAR_0, VAR_1, VAR_2);
}
