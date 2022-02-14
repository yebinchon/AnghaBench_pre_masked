
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct reader_dev {int timeout; int buffer_status; int read_wait; TYPE_1__* p_dev; } ;
struct TYPE_4__ {int start; } ;
struct TYPE_3__ {TYPE_2__** resource; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct reader_dev*,char*,...) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct reader_dev *VAR_4)
{
 int VAR_5, VAR_6;
 int VAR_7 = VAR_4->p_dev->resource[0]->start;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if ((FUNC_3(VAR_7 + VAR_3)
      & VAR_0) == VAR_0) {
   FUNC_0(3, VAR_4, "BulkIn full (i=%d)\n", VAR_5);
   return 1;
  }
 }

 FUNC_0(4, VAR_4, "wait_event_interruptible_timeout(timeout=%ld\n",
  VAR_4->timeout);
 VAR_6 = FUNC_2(VAR_4->read_wait,
           FUNC_1(VAR_1,
        &VAR_4->buffer_status),
           VAR_4->timeout);
 if (VAR_6 > 0)
  FUNC_0(4, VAR_4, "woke up: BulkIn full\n");
 else if (VAR_6 == 0)
  FUNC_0(4, VAR_4, "woke up: BulkIn not full, returning 0 :(\n");
 else if (VAR_6 < 0)
  FUNC_0(4, VAR_4, "woke up: signal arrived\n");

 return VAR_6;
}
