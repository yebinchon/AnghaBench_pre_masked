
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcp_sock {int rcv_nxt; int copied_seq; int write_seq; int snd_una; } ;
struct seq_file {struct drbd_resource* private; } ;
struct drbd_resource {int dummy; } ;
struct TYPE_4__ {TYPE_1__* socket; } ;
struct drbd_connection {int kref; TYPE_2__ data; } ;
struct TYPE_3__ {int sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct drbd_connection* FUNC_0 (struct drbd_resource*) ;
 unsigned long VAR_2 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct seq_file*,struct drbd_resource*,unsigned long) ;
 int FUNC_7 (struct seq_file*,struct drbd_resource*,unsigned long) ;
 int FUNC_8 (struct seq_file*,struct drbd_resource*,unsigned long) ;
 int FUNC_9 (struct seq_file*,struct drbd_resource*,struct drbd_connection*,unsigned long) ;
 int FUNC_10 (struct seq_file*,struct drbd_resource*,unsigned long) ;
 int FUNC_11 (struct seq_file*,char*,int) ;
 int FUNC_12 (struct seq_file*,char) ;
 int FUNC_13 (struct seq_file*,char*) ;
 struct tcp_sock* FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(struct seq_file *VAR_3, void *VAR_4)
{
 struct drbd_resource *VAR_5 = VAR_3->private;
 struct drbd_connection *VAR_6;
 unsigned long VAR_7 = VAR_2;

 VAR_6 = FUNC_0(VAR_5);


 if (!VAR_6 || !FUNC_2(&VAR_6->kref))
  return -VAR_0;


 FUNC_11(VAR_3, "v: %u\n\n", 0);

 FUNC_13(VAR_3, "oldest bitmap IO\n");
 FUNC_6(VAR_3, VAR_5, VAR_7);
 FUNC_12(VAR_3, '\n');

 FUNC_13(VAR_3, "meta data IO\n");
 FUNC_7(VAR_3, VAR_5, VAR_7);
 FUNC_12(VAR_3, '\n');

 FUNC_13(VAR_3, "socket buffer stats\n");

 FUNC_4();
 if (VAR_6->data.socket) {

  struct tcp_sock *VAR_8 = FUNC_14(VAR_6->data.socket->sk);
  int VAR_9 = VAR_8->rcv_nxt - VAR_8->copied_seq;
  FUNC_11(VAR_3, "unread receive buffer: %u Byte\n", VAR_9);

  VAR_9 = VAR_8->write_seq - VAR_8->snd_una;
  FUNC_11(VAR_3, "unacked send buffer: %u Byte\n", VAR_9);
 }
 FUNC_5();
 FUNC_12(VAR_3, '\n');

 FUNC_13(VAR_3, "oldest peer requests\n");
 FUNC_8(VAR_3, VAR_5, VAR_7);
 FUNC_12(VAR_3, '\n');

 FUNC_13(VAR_3, "application requests waiting for activity log\n");
 FUNC_10(VAR_3, VAR_5, VAR_7);
 FUNC_12(VAR_3, '\n');

 FUNC_13(VAR_3, "oldest application requests\n");
 FUNC_9(VAR_3, VAR_5, VAR_6, VAR_7);
 FUNC_12(VAR_3, '\n');

 VAR_7 = VAR_2 - VAR_7;
 if (VAR_7)
  FUNC_11(VAR_3, "generated in %d ms\n", FUNC_1(VAR_7));
 FUNC_3(&VAR_6->kref, VAR_1);
 return 0;
}
