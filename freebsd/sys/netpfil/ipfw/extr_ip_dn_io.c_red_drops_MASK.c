
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef size_t u_int ;
struct TYPE_4__ {scalar_t__ len_bytes; scalar_t__ length; } ;
struct dn_queue {int avg; int q_time; int count; int random; TYPE_1__ ni; struct dn_fsk* fs; } ;
struct TYPE_5__ {int flags; } ;
struct dn_fsk {size_t lookup_depth; int* w_q_lookup; scalar_t__ min_th; scalar_t__ max_th; void* c_4; void* c_2; int max_pkt_size; TYPE_2__ fs; scalar_t__ c_1; scalar_t__ c_3; int lookup_step; scalar_t__ w_q; } ;
typedef int int64_t ;
struct TYPE_6__ {int curr_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int,int) ;
 void* FUNC_2 (int,int ) ;
 TYPE_3__ VAR_3 ;
 int FUNC_3 () ;

__attribute__((used)) static int
FUNC_4 (struct dn_queue *VAR_4, int VAR_5)
{
 struct dn_fsk *VAR_6 = VAR_4->fs;
 int64_t VAR_7 = 0;


 uint32_t VAR_8 = (VAR_6->fs.flags & VAR_2) ?
     VAR_4->ni.len_bytes : VAR_4->ni.length;


 if (VAR_8 != 0) {

  int VAR_9 = FUNC_0(VAR_8) - VAR_4->avg;
  int64_t VAR_10 = FUNC_1((int64_t)VAR_9, (int64_t)VAR_6->w_q);

  VAR_4->avg += (int)VAR_10;
 } else {







  if (VAR_4->avg) {
   u_int VAR_11 = FUNC_2((VAR_3.curr_time - VAR_4->q_time), VAR_6->lookup_step);

   VAR_4->avg = (VAR_11 < VAR_6->lookup_depth) ?
       FUNC_1(VAR_4->avg, VAR_6->w_q_lookup[VAR_11]) : 0;
  }
 }


 if (VAR_4->avg < VAR_6->min_th) {
  VAR_4->count = -1;
  return (0);
 }
 if (VAR_4->avg >= VAR_6->max_th) {
  if (VAR_6->fs.flags & VAR_0)
   return (1);
  if (VAR_6->fs.flags & VAR_1) {







   VAR_7 = FUNC_1((int64_t)VAR_6->c_3, (int64_t)VAR_4->avg) -
       VAR_6->c_4;
  } else {
   VAR_4->count = -1;
   return (1);
  }
 } else if (VAR_4->avg > VAR_6->min_th) {
  if (VAR_6->fs.flags & VAR_0)
   return (1);






  VAR_7 = FUNC_1((int64_t)VAR_6->c_1, (int64_t)VAR_4->avg) - VAR_6->c_2;
 }

 if (VAR_6->fs.flags & VAR_2)
  VAR_7 = FUNC_2((VAR_7 * VAR_5) , VAR_6->max_pkt_size);
 if (++VAR_4->count == 0)
  VAR_4->random = FUNC_3() & 0xffff;
 else {




  if (FUNC_1(VAR_7, FUNC_0((int64_t)VAR_4->count)) > VAR_4->random) {
   VAR_4->count = 0;

   VAR_4->random = FUNC_3() & 0xffff;
   return (1);
  }
 }


 return (0);

}
