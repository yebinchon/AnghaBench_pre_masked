
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_thread {struct drbd_connection* connection; } ;
struct drbd_connection {int receiver_plug; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (struct drbd_connection*) ;
 int FUNC_4 (struct drbd_connection*) ;
 int FUNC_5 (struct drbd_connection*,int ,int ) ;
 int FUNC_6 (struct drbd_connection*,char*) ;
 int FUNC_7 (struct drbd_connection*,char*) ;
 int FUNC_8 (struct drbd_connection*) ;
 int FUNC_9 (int ) ;

int FUNC_10(struct drbd_thread *VAR_4)
{
 struct drbd_connection *VAR_5 = VAR_4->connection;
 int VAR_6;

 FUNC_6(VAR_5, "receiver (re)started\n");

 do {
  VAR_6 = FUNC_3(VAR_5);
  if (VAR_6 == 0) {
   FUNC_4(VAR_5);
   FUNC_9(VAR_2);
  }
  if (VAR_6 == -1) {
   FUNC_7(VAR_5, "Discarding network configuration.\n");
   FUNC_5(VAR_5, FUNC_0(VAR_3, VAR_1), VAR_0);
  }
 } while (VAR_6 == 0);

 if (VAR_6 > 0) {
  FUNC_2(&VAR_5->receiver_plug);
  FUNC_8(VAR_5);
  FUNC_1(&VAR_5->receiver_plug);
 }

 FUNC_4(VAR_5);

 FUNC_6(VAR_5, "receiver terminated\n");
 return 0;
}
