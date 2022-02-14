
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hws_basic_entry {int dummy; } ;
struct hw_perf_event {int dummy; } ;
struct cpu_hw_sf {int sfb; int qsi; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 int VAR_1 ;
 int FUNC_1 (struct hw_perf_event*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int,char*,int ,unsigned long,unsigned long,int ,size_t,struct cpu_hw_sf*) ;
 unsigned long FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (struct cpu_hw_sf*) ;
 int FUNC_6 (unsigned long,struct hw_perf_event*) ;
 int FUNC_7 (struct hw_perf_event*) ;
 int FUNC_8 (int *,struct hw_perf_event*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_9(struct cpu_hw_sf *VAR_3, struct hw_perf_event *VAR_4)
{
 unsigned long VAR_5, VAR_6, VAR_7;
 size_t VAR_8;
 VAR_8 = sizeof(struct hws_basic_entry);
 VAR_6 = FUNC_4(&VAR_3->qsi, FUNC_1(VAR_4));
 VAR_7 = 1;
 VAR_5 = FUNC_0(VAR_6, VAR_7 * ((VAR_1-64) / VAR_8));
 if (VAR_5 < VAR_0)
  VAR_5 = VAR_0;
 FUNC_6(VAR_5, VAR_4);
 if (FUNC_5(VAR_3))
  return 0;

 FUNC_3(VAR_2, 3,
       "allocate_buffers: rate=%lu f=%lu sdb=%lu/%lu"
       " sample_size=%lu cpuhw=%p\n",
       FUNC_1(VAR_4), VAR_6, VAR_5, FUNC_7(VAR_4),
       VAR_8, VAR_3);

 return FUNC_2(&VAR_3->sfb,
         FUNC_8(&VAR_3->sfb, VAR_4));
}
