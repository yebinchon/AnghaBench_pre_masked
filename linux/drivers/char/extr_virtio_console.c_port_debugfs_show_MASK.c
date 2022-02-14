
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {struct port* private; } ;
struct TYPE_4__ {char* vtermno; } ;
struct TYPE_3__ {char* bytes_sent; char* bytes_received; char* bytes_discarded; } ;
struct port {char* name; char* guest_connected; char* host_connected; char* outvq_full; TYPE_2__ cons; TYPE_1__ stats; } ;


 scalar_t__ FUNC_0 (struct port*) ;
 int FUNC_1 (struct seq_file*,char*,char*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct port *VAR_2 = VAR_0->private;

 FUNC_1(VAR_0, "name: %s\n", VAR_2->name ? VAR_2->name : "");
 FUNC_1(VAR_0, "guest_connected: %d\n", VAR_2->guest_connected);
 FUNC_1(VAR_0, "host_connected: %d\n", VAR_2->host_connected);
 FUNC_1(VAR_0, "outvq_full: %d\n", VAR_2->outvq_full);
 FUNC_1(VAR_0, "bytes_sent: %lu\n", VAR_2->stats.bytes_sent);
 FUNC_1(VAR_0, "bytes_received: %lu\n", VAR_2->stats.bytes_received);
 FUNC_1(VAR_0, "bytes_discarded: %lu\n", VAR_2->stats.bytes_discarded);
 FUNC_1(VAR_0, "is_console: %s\n",
     FUNC_0(VAR_2) ? "yes" : "no");
 FUNC_1(VAR_0, "console_vtermno: %u\n", VAR_2->cons.vtermno);

 return 0;
}
