
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w6692_hw {int name; } ;


 int FUNC_0 (struct w6692_hw*,int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct w6692_hw *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_1);
 FUNC_1("%s: Winbond W6692 version: %s\n", VAR_2->name,
    VAR_0[(VAR_3 >> 6) & 3]);
}
