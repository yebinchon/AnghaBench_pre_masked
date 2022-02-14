
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfax_hw {scalar_t__ cfg; int aux_data; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void
FUNC_3(struct sfax_hw *VAR_6)
{

 FUNC_2("%s: resetting card\n", VAR_6->name);
 FUNC_1(VAR_4, VAR_6->cfg + VAR_5);
 FUNC_1(VAR_1, VAR_6->cfg + VAR_2);
 FUNC_0(1);
 FUNC_1(VAR_3, VAR_6->cfg + VAR_5);
 VAR_6->aux_data = VAR_0;
 FUNC_1(VAR_6->aux_data, VAR_6->cfg + VAR_2);
 FUNC_0(1);
}
