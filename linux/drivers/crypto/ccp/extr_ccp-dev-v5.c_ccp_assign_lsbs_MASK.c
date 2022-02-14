
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccp_device {int cmd_q_count; int lsbmap; TYPE_1__* cmd_q; } ;
struct TYPE_2__ {int lsbmask; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct ccp_device*,int,int,int ) ;
 int FUNC_7 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(struct ccp_device *VAR_5)
{
 FUNC_0(VAR_3, VAR_2);
 FUNC_0(VAR_4, VAR_2);
 int VAR_6 = 0;
 int VAR_7;
 int VAR_8, VAR_9;
 int VAR_10 = 0;

 FUNC_5(VAR_3, VAR_2);


 for (VAR_8 = 0; VAR_8 < VAR_5->cmd_q_count; VAR_8++)
  FUNC_2(VAR_3,
     VAR_3, VAR_5->cmd_q[VAR_8].lsbmask,
     VAR_2);

 VAR_6 = FUNC_4(VAR_3, VAR_2);

 if (VAR_6 >= VAR_5->cmd_q_count) {






  for (VAR_9 = 1;
       VAR_6 && (VAR_9 <= VAR_2);
       VAR_9++) {
   VAR_10 = FUNC_6(VAR_5, VAR_9, VAR_6,
         VAR_3);
   if (VAR_10 < 0)
    return -VAR_0;
   VAR_6 = VAR_10;
  }
 }

 VAR_10 = 0;





 FUNC_1(VAR_4, VAR_3, VAR_2);

 VAR_7 = FUNC_7(VAR_4, VAR_2);
 while (VAR_7 < VAR_2) {
  FUNC_3(VAR_5->lsbmap, VAR_7 * VAR_1, VAR_1);
  FUNC_3(VAR_4, VAR_7, 1);
  VAR_7 = FUNC_7(VAR_4, VAR_2);
 }

 return VAR_10;
}
