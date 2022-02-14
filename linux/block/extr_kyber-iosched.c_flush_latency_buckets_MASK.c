
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kyber_queue_data {unsigned int*** latency_buckets; } ;
struct kyber_cpu_latency {int *** buckets; } ;
typedef int atomic_t ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct kyber_queue_data *VAR_1,
      struct kyber_cpu_latency *VAR_2,
      unsigned int VAR_3, unsigned int VAR_4)
{
 unsigned int *VAR_5 = VAR_1->latency_buckets[VAR_3][VAR_4];
 atomic_t *VAR_6 = VAR_2->buckets[VAR_3][VAR_4];
 unsigned int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  VAR_5[VAR_7] += FUNC_0(&VAR_6[VAR_7], 0);
}
