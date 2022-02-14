
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pd_unit {int dummy; } ;
typedef enum action { ____Placeholder_action } action ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct pd_unit*,int,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct pd_unit*,int ,int ) ;

__attribute__((used)) static enum action FUNC_3(struct pd_unit *VAR_3)
{
 FUNC_2(VAR_3, 0, FUNC_0("before unlock on eject"));
 FUNC_1(VAR_3, 1, 0, 0, 0, 0, VAR_0);
 FUNC_2(VAR_3, 0, FUNC_0("after unlock on eject"));
 FUNC_2(VAR_3, 0, FUNC_0("before eject"));
 FUNC_1(VAR_3, 0, 0, 0, 0, 0, VAR_1);
 FUNC_2(VAR_3, 0, FUNC_0("after eject"));
 return VAR_2;
}
