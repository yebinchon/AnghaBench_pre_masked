
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __lock_msg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct __lock_msg*,int ) ;
 int FUNC_1 (struct __lock_msg*,int ) ;
 int VAR_3 ;
 struct __lock_msg* FUNC_2 (int,int ,int ) ;
 int FUNC_3 (struct __lock_msg*,struct __lock_msg*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct __lock_msg *VAR_7)
{
 struct __lock_msg *VAR_8;
 int VAR_9;

 VAR_9 = 0;
 VAR_8 = FUNC_2(sizeof *VAR_8, VAR_1, VAR_2);
 FUNC_4(&VAR_6);
 if (VAR_4) {
  FUNC_3(VAR_8, VAR_7, sizeof *VAR_8);
  FUNC_0(&VAR_5, VAR_8, VAR_3);
  FUNC_6(&VAR_5);
 } else {
  VAR_9 = VAR_0;
 }
 FUNC_5(&VAR_6);
 if (VAR_9)
  FUNC_1(VAR_8, VAR_1);
 return (VAR_9);
}
