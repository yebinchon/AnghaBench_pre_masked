
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eeh_pe {int config_addr; int addr; TYPE_1__* phb; } ;
struct TYPE_2__ {int buid; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int,int *,int,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct eeh_pe *VAR_5, int VAR_6)
{
 int VAR_7;
 int VAR_8;


 VAR_7 = VAR_5->config_addr;
 if (VAR_5->addr)
  VAR_7 = VAR_5->addr;


 VAR_8 = FUNC_3(VAR_4, 4, 1, ((void*)0),
   VAR_7, FUNC_0(VAR_5->phb->buid),
   FUNC_1(VAR_5->phb->buid), VAR_6);


 if (VAR_6 == VAR_2 &&
     VAR_8 == -8) {
  VAR_6 = VAR_3;
  VAR_8 = FUNC_3(VAR_4, 4, 1, ((void*)0),
    VAR_7, FUNC_0(VAR_5->phb->buid),
    FUNC_1(VAR_5->phb->buid), VAR_6);
 }


 if (VAR_6 == VAR_2 ||
     VAR_6 == VAR_3)
  FUNC_2(VAR_0);
 else
  FUNC_2(VAR_1);

 return VAR_8;
}
