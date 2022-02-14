
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cec_msg {int * msg; } ;
struct cec_adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cec_msg*,int ,int ) ;
 scalar_t__ FUNC_1 (struct cec_msg*) ;
 int FUNC_2 (struct cec_msg*,struct cec_msg*) ;
 int FUNC_3 (struct cec_adapter*,struct cec_msg*,int) ;

__attribute__((used)) static int FUNC_4(struct cec_adapter *VAR_2,
        struct cec_msg *VAR_3, u8 VAR_4)
{
 struct cec_msg VAR_5 = { };





 if (VAR_3->msg[1] == VAR_1)
  return 0;

 if (FUNC_1(VAR_3) == VAR_0)
  return 0;
 FUNC_2(&VAR_5, VAR_3);
 FUNC_0(&VAR_5, VAR_3->msg[1], VAR_4);
 return FUNC_3(VAR_2, &VAR_5, 0);
}
