
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sf_buffer {unsigned long num_sdb; } ;
struct hw_perf_event {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char*,unsigned long,...) ;
 int FUNC_1 (struct sf_buffer*,unsigned long,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct sf_buffer*,struct hw_perf_event*) ;
 unsigned long FUNC_4 (struct sf_buffer*,struct hw_perf_event*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(struct sf_buffer *VAR_2,
       struct hw_perf_event *VAR_3)
{
 unsigned long VAR_4, VAR_5;
 int VAR_6;

 VAR_4 = FUNC_4(VAR_2, VAR_3);
 if (!VAR_4)
  return;
 VAR_5 = VAR_2->num_sdb;




 FUNC_2();






 VAR_6 = FUNC_1(VAR_2, VAR_4, VAR_0);
 if (VAR_6)
  FUNC_0(VAR_1, 5, "sfb: extend: realloc "
        "failed with rc=%i\n", VAR_6);

 if (FUNC_3(VAR_2, VAR_3))
  FUNC_0(VAR_1, 5, "sfb: extend: "
        "req=%lu alloc=%lu remaining=%lu\n",
        VAR_4, VAR_2->num_sdb - VAR_5,
        FUNC_4(VAR_2, VAR_3));
}
