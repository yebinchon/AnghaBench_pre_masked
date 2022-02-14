
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w8001 {scalar_t__ response_type; int cmd_done; int serio; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,unsigned char) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(struct w8001 *VAR_3, unsigned char VAR_4,
    bool VAR_5)
{
 int VAR_6;

 VAR_3->response_type = 0;
 FUNC_0(&VAR_3->cmd_done);

 VAR_6 = FUNC_1(VAR_3->serio, VAR_4);
 if (VAR_6 == 0 && VAR_5) {

  FUNC_2(&VAR_3->cmd_done, VAR_1);
  if (VAR_3->response_type != VAR_2)
   VAR_6 = -VAR_0;
 }

 return VAR_6;
}
