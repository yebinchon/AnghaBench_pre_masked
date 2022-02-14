
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pd_unit {int dummy; } ;
typedef enum action { ____Placeholder_action } action ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pd_unit*,int,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct pd_unit*,int ,char*) ;

__attribute__((used)) static enum action FUNC_2(struct pd_unit *VAR_4)
{
 if (!(FUNC_1(VAR_4, VAR_3, "Lock") & VAR_2)) {
  FUNC_0(VAR_4, 1, 0, 0, 0, 0, VAR_0);
  FUNC_1(VAR_4, VAR_3, "Lock done");
 }
 return VAR_1;
}
