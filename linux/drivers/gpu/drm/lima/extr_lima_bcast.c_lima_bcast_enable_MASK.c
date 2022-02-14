
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lima_sched_pipe {struct lima_ip** processor; } ;
struct lima_ip {int id; } ;
struct lima_device {struct lima_ip* ip; struct lima_sched_pipe* pipe; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_2(struct lima_device *VAR_4, int VAR_5)
{
 struct lima_sched_pipe *VAR_6 = VAR_4->pipe + VAR_3;
 struct lima_ip *VAR_7 = VAR_4->ip + VAR_1;
 int VAR_8, VAR_9 = FUNC_0(VAR_0) & 0xffff0000;

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  struct lima_ip *VAR_10 = VAR_6->processor[VAR_8];

  VAR_9 |= 1 << (VAR_10->id - VAR_2);
 }

 FUNC_1(VAR_0, VAR_9);
}
