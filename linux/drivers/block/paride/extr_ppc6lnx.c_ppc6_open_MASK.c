
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ppc_flags; } ;
typedef TYPE_1__ Interface ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_4(Interface *VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_1(VAR_7);

 if (VAR_8 == 0)
  return(VAR_8);

 VAR_7->ppc_flags &= ~VAR_6;

 FUNC_2(VAR_7, (VAR_1 | VAR_2 | VAR_4));
 FUNC_3(VAR_7, VAR_3);

 FUNC_2(VAR_7, (VAR_1 | VAR_0 | VAR_5));

 if ((FUNC_0(VAR_7) & 0x3F) == 0x0C)
  VAR_7->ppc_flags |= VAR_6;

 return(VAR_8);
}
