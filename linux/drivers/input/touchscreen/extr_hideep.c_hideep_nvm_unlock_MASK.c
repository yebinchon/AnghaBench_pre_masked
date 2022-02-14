
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hideep_ts {int nvm_mask; TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int ,int ) ;
 int FUNC_4 (struct hideep_ts*,int,int *) ;
 int FUNC_5 (struct hideep_ts*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct hideep_ts *VAR_6)
{
 u32 VAR_7;

 FUNC_5(VAR_6, VAR_0, VAR_3);
 FUNC_4(VAR_6, 0x0000000C, &VAR_7);
 FUNC_5(VAR_6, VAR_0, VAR_1);


 VAR_7 &= ~VAR_5;


 if (VAR_7 != VAR_6->nvm_mask)
  FUNC_3(&VAR_6->client->dev,
    "read mask code different %#08x vs %#08x",
    VAR_7, VAR_6->nvm_mask);

 FUNC_5(VAR_6, VAR_0, VAR_4);
 FUNC_2(0);

 FUNC_0(VAR_2, VAR_6->nvm_mask);
 FUNC_1();
 FUNC_5(VAR_6, VAR_0, VAR_1);
}
