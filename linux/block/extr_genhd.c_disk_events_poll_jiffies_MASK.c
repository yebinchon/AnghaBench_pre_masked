
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {int event_flags; struct disk_events* ev; } ;
struct disk_events {long poll_msecs; } ;


 int VAR_0 ;
 long VAR_1 ;
 unsigned long FUNC_0 (long) ;

__attribute__((used)) static unsigned long FUNC_1(struct gendisk *VAR_2)
{
 struct disk_events *VAR_3 = VAR_2->ev;
 long VAR_4 = 0;





 if (VAR_3->poll_msecs >= 0)
  VAR_4 = VAR_3->poll_msecs;
 else if (VAR_2->event_flags & VAR_0)
  VAR_4 = VAR_1;

 return FUNC_0(VAR_4);
}
