
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lima_sched_pipe {struct lima_ip* bcast_mmu; struct lima_ip* bcast_processor; int num_l2_cache; struct lima_ip** l2_cache; int num_processor; struct lima_ip** processor; int num_mmu; struct lima_ip** mmu; } ;
struct lima_ip {scalar_t__ present; } ;
struct lima_device {scalar_t__ id; struct lima_ip* ip; struct lima_sched_pipe* pipe; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct lima_device*) ;
 int FUNC_1 (struct lima_sched_pipe*) ;
 int FUNC_2 (struct lima_sched_pipe*,char*) ;

__attribute__((used)) static int FUNC_3(struct lima_device *VAR_10)
{
 struct lima_sched_pipe *VAR_11 = VAR_10->pipe + VAR_9;
 int VAR_12, VAR_13;

 VAR_12 = FUNC_2(VAR_11, "pp");
 if (VAR_12)
  return VAR_12;

 for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
  struct lima_ip *VAR_14 = VAR_10->ip + VAR_5 + VAR_13;
  struct lima_ip *VAR_15 = VAR_10->ip + VAR_7 + VAR_13;
  struct lima_ip *VAR_16;

  if (VAR_10->id == VAR_1)
   VAR_16 = VAR_10->ip + VAR_3;
  else
   VAR_16 = VAR_10->ip + VAR_4 + (VAR_13 >> 2);

  if (VAR_14->present && VAR_15->present && VAR_16->present) {
   VAR_11->mmu[VAR_11->num_mmu++] = VAR_15;
   VAR_11->processor[VAR_11->num_processor++] = VAR_14;
   if (!VAR_11->l2_cache[VAR_13 >> 2])
    VAR_11->l2_cache[VAR_11->num_l2_cache++] = VAR_16;
  }
 }

 if (VAR_10->ip[VAR_2].present) {
  VAR_11->bcast_processor = VAR_10->ip + VAR_6;
  VAR_11->bcast_mmu = VAR_10->ip + VAR_8;
 }

 VAR_12 = FUNC_0(VAR_10);
 if (VAR_12) {
  FUNC_1(VAR_11);
  return VAR_12;
 }

 return 0;
}
