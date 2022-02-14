
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int Length; } ;
struct TYPE_6__ {TYPE_1__ Header; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 TYPE_2__* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int
FUNC_4(void)
{

 VAR_1 = FUNC_1(VAR_3, VAR_0);
 VAR_2 = VAR_1->Header.Length;
 FUNC_0(VAR_1 != ((void*)0), ("Unable to re-map MADT"));
 FUNC_3(VAR_4, ((void*)0));
 FUNC_2(VAR_1);
 VAR_1 = ((void*)0);
 return (0);
}
