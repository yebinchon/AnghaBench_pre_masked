
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct qxl_device {long io_base; int last_sent_io_cmd; int async_io_mutex; int irq_received_io_cmd; int io_cmd_event; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,long) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int,int) ;

__attribute__((used)) static int FUNC_6(struct qxl_device *VAR_1, uint8_t VAR_2, long VAR_3, bool VAR_4)
{
 int VAR_5;
 long VAR_6 = VAR_1->io_base + VAR_3;
 int VAR_7;

 FUNC_1(&VAR_1->async_io_mutex);
 VAR_5 = FUNC_0(&VAR_1->irq_received_io_cmd);
 if (VAR_1->last_sent_io_cmd > VAR_5) {
  if (VAR_4)
   VAR_7 = FUNC_4(VAR_1->io_cmd_event,
              FUNC_0(&VAR_1->irq_received_io_cmd) > VAR_5, 5*VAR_0);
  else
   VAR_7 = FUNC_5(VAR_1->io_cmd_event,
       FUNC_0(&VAR_1->irq_received_io_cmd) > VAR_5, 5*VAR_0);

  if (VAR_7 <= 0)
   goto out;
  VAR_5 = FUNC_0(&VAR_1->irq_received_io_cmd);
 }
 FUNC_3(VAR_2, VAR_6);
 VAR_1->last_sent_io_cmd = VAR_5 + 1;
 if (VAR_4)
  VAR_7 = FUNC_4(VAR_1->io_cmd_event,
             FUNC_0(&VAR_1->irq_received_io_cmd) > VAR_5, 5*VAR_0);
 else
  VAR_7 = FUNC_5(VAR_1->io_cmd_event,
      FUNC_0(&VAR_1->irq_received_io_cmd) > VAR_5, 5*VAR_0);
out:
 if (VAR_7 > 0)
  VAR_7 = 0;
 FUNC_2(&VAR_1->async_io_mutex);
 return VAR_7;
}
