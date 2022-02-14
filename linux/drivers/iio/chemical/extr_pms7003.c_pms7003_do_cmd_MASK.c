
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pms7003_state {int frame_ready; int serdev; } ;
typedef enum pms7003_cmd { ____Placeholder_pms7003_cmd } pms7003_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct pms7003_state *VAR_5, enum pms7003_cmd VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_0(VAR_5->serdev, VAR_4[VAR_6],
      VAR_2, VAR_3);
 if (VAR_7 < VAR_2)
  return VAR_7 < 0 ? VAR_7 : -VAR_0;

 VAR_7 = FUNC_1(&VAR_5->frame_ready,
       VAR_3);
 if (!VAR_7)
  VAR_7 = -VAR_1;

 return VAR_7 < 0 ? VAR_7 : 0;
}
