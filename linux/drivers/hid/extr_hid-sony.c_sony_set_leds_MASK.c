
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sony_sc {int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sony_sc*) ;
 int FUNC_1 (struct sony_sc*,int ) ;

__attribute__((used)) static void FUNC_2(struct sony_sc *VAR_2)
{
 if (!(VAR_2->quirks & VAR_0))
  FUNC_1(VAR_2, VAR_1);
 else
  FUNC_0(VAR_2);
}
