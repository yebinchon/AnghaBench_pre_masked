
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_7__ {scalar_t__ w_q; int max_p; int min_th; int max_th; int flags; } ;
struct dn_fsk {scalar_t__ w_q; int max_p; int lookup_step; int lookup_weight; int min_th; int max_th; int c_1; int c_3; int c_4; int* w_q_lookup; int lookup_depth; int avg_pkt_size; int max_pkt_size; TYPE_3__ fs; void* c_2; TYPE_2__* sched; } ;
typedef int int64_t ;
struct TYPE_8__ {int red_avg_pkt_size; scalar_t__ red_lookup_depth; int red_max_pkt_size; } ;
struct TYPE_5__ {int bandwidth; } ;
struct TYPE_6__ {TYPE_1__ link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int,int) ;
 void* FUNC_3 (int,scalar_t__) ;
 TYPE_4__ VAR_6 ;
 int FUNC_4 (int*,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (int,int ,int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7(struct dn_fsk *VAR_8)
{
 int64_t VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14;

 VAR_8->w_q = VAR_8->fs.w_q;
 VAR_8->max_p = VAR_8->fs.max_p;
 FUNC_0("called");

 VAR_14 = VAR_8->sched->link.bandwidth;
 VAR_9 = (VAR_14 <= 0) ? 0 :
  VAR_7 * VAR_6.red_avg_pkt_size * 8 * FUNC_1(1) / VAR_14;

 VAR_10 = FUNC_3((VAR_9 * 3) , VAR_8->w_q);
 VAR_8->lookup_step = FUNC_3(VAR_10 , VAR_6.red_lookup_depth);

 if (!VAR_8->lookup_step)
  VAR_8->lookup_step = 1;
 VAR_12 = VAR_11 = FUNC_1(1) - VAR_8->w_q;

 for (VAR_13 = VAR_8->lookup_step; VAR_13 > 1; --VAR_13)
  VAR_11 = FUNC_2(VAR_11, VAR_12);
 VAR_8->lookup_weight = (int)(VAR_11);


 VAR_8->min_th = FUNC_1(VAR_8->fs.min_th);
 VAR_8->max_th = FUNC_1(VAR_8->fs.max_th);

 if (VAR_8->fs.max_th == VAR_8->fs.min_th)
  VAR_8->c_1 = VAR_8->max_p;
 else
  VAR_8->c_1 = FUNC_1((int64_t)(VAR_8->max_p)) / (VAR_8->fs.max_th - VAR_8->fs.min_th);
 VAR_8->c_2 = FUNC_2(VAR_8->c_1, FUNC_1(VAR_8->fs.min_th));

 if (VAR_8->fs.flags & VAR_0) {
  VAR_8->c_3 = (FUNC_1(1) - VAR_8->max_p) / VAR_8->fs.max_th;
  VAR_8->c_4 = FUNC_1(1) - 2 * VAR_8->max_p;
 }


 if (VAR_8->w_q_lookup) {
  FUNC_4(VAR_8->w_q_lookup, VAR_4);
  VAR_8->w_q_lookup = ((void*)0);
 }
 if (VAR_6.red_lookup_depth == 0) {
  FUNC_6("\ndummynet: net.inet.ip.dummynet.red_lookup_depth"
      "must be > 0\n");
  VAR_8->fs.flags &= ~VAR_1;
  VAR_8->fs.flags &= ~VAR_0;
  return (VAR_2);
 }
 VAR_8->lookup_depth = VAR_6.red_lookup_depth;
 VAR_8->w_q_lookup = (u_int *)FUNC_5(VAR_8->lookup_depth * sizeof(int),
     VAR_4, VAR_5);
 if (VAR_8->w_q_lookup == ((void*)0)) {
  FUNC_6("dummynet: sorry, cannot allocate red lookup table\n");
  VAR_8->fs.flags &= ~VAR_1;
  VAR_8->fs.flags &= ~VAR_0;
  return(VAR_3);
 }


 VAR_8->w_q_lookup[0] = FUNC_1(1) - VAR_8->w_q;

 for (VAR_14 = 1; VAR_14 < VAR_8->lookup_depth; VAR_14++)
  VAR_8->w_q_lookup[VAR_14] =
      FUNC_2(VAR_8->w_q_lookup[VAR_14 - 1], VAR_8->lookup_weight);

 if (VAR_6.red_avg_pkt_size < 1)
  VAR_6.red_avg_pkt_size = 512;
 VAR_8->avg_pkt_size = VAR_6.red_avg_pkt_size;
 if (VAR_6.red_max_pkt_size < 1)
  VAR_6.red_max_pkt_size = 1500;
 VAR_8->max_pkt_size = VAR_6.red_max_pkt_size;
 FUNC_0("exit");
 return 0;
}
