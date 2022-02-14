
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_sn_bridge {int debugfs; int dev; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,int,int ,struct ti_sn_bridge*,int *) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct ti_sn_bridge *VAR_1)
{
 VAR_1->debugfs = FUNC_0(FUNC_2(VAR_1->dev), ((void*)0));

 FUNC_1("status", 0600, VAR_1->debugfs, VAR_1,
   &VAR_0);
}
