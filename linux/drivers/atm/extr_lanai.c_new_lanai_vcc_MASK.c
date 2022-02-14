
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int backlog; } ;
struct lanai_vcc {int vci; TYPE_1__ tx; } ;


 int VAR_0 ;
 struct lanai_vcc* FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline struct lanai_vcc *FUNC_3(void)
{
 struct lanai_vcc *VAR_1;
 VAR_1 = FUNC_0(sizeof(*VAR_1), VAR_0);
 if (FUNC_1(VAR_1 != ((void*)0))) {
  FUNC_2(&VAR_1->tx.backlog);



 }
 return VAR_1;
}
