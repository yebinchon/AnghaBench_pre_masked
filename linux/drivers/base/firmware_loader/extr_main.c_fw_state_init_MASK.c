
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_state {int status; int completion; } ;
struct fw_priv {struct fw_state fw_st; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct fw_priv *VAR_1)
{
 struct fw_state *VAR_2 = &VAR_1->fw_st;

 FUNC_0(&VAR_2->completion);
 VAR_2->status = VAR_0;
}
