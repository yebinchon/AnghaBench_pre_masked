
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elo {scalar_t__ expected_packet; int cmd_mutex; int response; int cmd_done; int serio; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,unsigned char) ;
 scalar_t__ FUNC_7 (unsigned char) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static int FUNC_9(struct elo *VAR_4, unsigned char *VAR_5)
{
 int VAR_6 = -1;
 int VAR_7;
 unsigned char VAR_8 = 0xaa + VAR_0;

 FUNC_2(&VAR_4->cmd_mutex);

 FUNC_5(VAR_4->serio);
 VAR_4->expected_packet = FUNC_7(VAR_5[0]);
 FUNC_0(&VAR_4->cmd_done);
 FUNC_4(VAR_4->serio);

 if (FUNC_6(VAR_4->serio, VAR_0))
  goto out;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_8 += VAR_5[VAR_7];
  if (FUNC_6(VAR_4->serio, VAR_5[VAR_7]))
   goto out;
 }

 if (FUNC_6(VAR_4->serio, VAR_8))
  goto out;

 FUNC_8(&VAR_4->cmd_done, VAR_3);

 if (VAR_4->expected_packet == VAR_2) {

  FUNC_1(VAR_5, VAR_4->response, VAR_1);
  VAR_6 = 0;
 }

 out:
 FUNC_3(&VAR_4->cmd_mutex);
 return VAR_6;
}
