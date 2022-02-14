
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct steam_device {int quirks; int client_opened; int mutex; int list; int * serial_no; int hdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct steam_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (struct steam_device*) ;
 int FUNC_6 (struct steam_device*) ;
 int FUNC_7 (struct steam_device*,int ) ;
 int FUNC_8 (int *,char*,int) ;

__attribute__((used)) static int FUNC_9(struct steam_device *VAR_4)
{
 int VAR_5;
 bool VAR_6;







 if (!VAR_4->serial_no[0]) {




  FUNC_2(&VAR_4->mutex);
  if (FUNC_5(VAR_4) < 0)
   FUNC_8(VAR_4->serial_no, "XXXXXXXXXX",
     sizeof(VAR_4->serial_no));
  FUNC_3(&VAR_4->mutex);

  FUNC_0(VAR_4->hdev, "Steam Controller '%s' connected",
    VAR_4->serial_no);


  if (VAR_4->quirks & VAR_0)
   FUNC_4(VAR_4);

  FUNC_2(&VAR_3);
  FUNC_1(&VAR_4->list, &VAR_2);
  FUNC_3(&VAR_3);
 }

 FUNC_2(&VAR_4->mutex);
 VAR_6 = VAR_4->client_opened;
 if (!VAR_6)
  FUNC_7(VAR_4, VAR_1);
 FUNC_3(&VAR_4->mutex);

 if (!VAR_6)
  VAR_5 = FUNC_6(VAR_4);
 else
  VAR_5 = 0;

 return VAR_5;
}
