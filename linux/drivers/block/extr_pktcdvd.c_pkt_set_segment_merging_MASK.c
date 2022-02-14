
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct TYPE_2__ {int size; } ;
struct pktcdvd_device {int flags; TYPE_1__ settings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct pktcdvd_device*,char*) ;
 int FUNC_2 (struct request_queue*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct pktcdvd_device *VAR_4, struct request_queue *VAR_5)
{
 if ((VAR_4->settings.size << 9) / VAR_0
     <= FUNC_2(VAR_5)) {



  FUNC_0(VAR_2, &VAR_4->flags);
  return 0;
 } else if ((VAR_4->settings.size << 9) / VAR_3
     <= FUNC_2(VAR_5)) {




  FUNC_3(VAR_2, &VAR_4->flags);
  return 0;
 } else {
  FUNC_1(VAR_4, "cdrom max_phys_segments too small\n");
  return -VAR_1;
 }
}
