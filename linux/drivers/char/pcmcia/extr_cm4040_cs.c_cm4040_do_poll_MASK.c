
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct reader_dev {int poll_timer; int poll_wait; scalar_t__ buffer_status; int write_wait; int read_wait; TYPE_2__* p_dev; } ;
struct TYPE_4__ {TYPE_1__** resource; } ;
struct TYPE_3__ {scalar_t__ start; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,struct reader_dev*,char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,scalar_t__*) ;
 struct reader_dev* VAR_6 ;
 struct reader_dev* FUNC_2 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int *,scalar_t__) ;
 int VAR_8 ;
 int FUNC_4 (int ,scalar_t__*) ;
 int FUNC_5 (int *) ;
 unsigned int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_9)
{
 struct reader_dev *VAR_10 = FUNC_2(VAR_10, VAR_9, VAR_8);
 unsigned int VAR_11 = FUNC_6(VAR_10->p_dev->resource[0]->start
    + VAR_5);

 if ((VAR_11 & VAR_0)) {
  FUNC_4(VAR_2, &VAR_10->buffer_status);
  FUNC_0(4, VAR_10, "waking up read_wait\n");
  FUNC_5(&VAR_10->read_wait);
 } else
  FUNC_1(VAR_2, &VAR_10->buffer_status);

 if (!(VAR_11 & VAR_1)) {
  FUNC_4(VAR_3, &VAR_10->buffer_status);
  FUNC_0(4, VAR_10, "waking up write_wait\n");
  FUNC_5(&VAR_10->write_wait);
 } else
  FUNC_1(VAR_3, &VAR_10->buffer_status);

 if (VAR_10->buffer_status)
  FUNC_5(&VAR_10->poll_wait);

 FUNC_3(&VAR_10->poll_timer, VAR_7 + VAR_4);
}
