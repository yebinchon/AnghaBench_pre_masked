
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kyber_queue_data {unsigned int*** latency_buckets; int q; scalar_t__* latency_timeout; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__,unsigned long) ;
 int FUNC_2 (unsigned int*,int ,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ,int ,unsigned int,unsigned int,int,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct kyber_queue_data *VAR_6,
    unsigned int VAR_7, unsigned int VAR_8,
    unsigned int VAR_9)
{
 unsigned int *VAR_10 = VAR_6->latency_buckets[VAR_7][VAR_8];
 unsigned int VAR_11, VAR_12 = 0, VAR_13;

 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++)
  VAR_12 += VAR_10[VAR_11];

 if (!VAR_12)
  return -1;





 if (!VAR_6->latency_timeout[VAR_7])
  VAR_6->latency_timeout[VAR_7] = FUNC_1(VAR_3 + VAR_0, 1UL);
 if (VAR_12 < 500 &&
     FUNC_3(VAR_6->latency_timeout[VAR_7])) {
  return -1;
 }
 VAR_6->latency_timeout[VAR_7] = 0;

 VAR_13 = FUNC_0(VAR_12 * VAR_9, 100);
 for (VAR_11 = 0; VAR_11 < VAR_1 - 1; VAR_11++) {
  if (VAR_10[VAR_11] >= VAR_13)
   break;
  VAR_13 -= VAR_10[VAR_11];
 }
 FUNC_2(VAR_10, 0, sizeof(VAR_6->latency_buckets[VAR_7][VAR_8]));

 FUNC_4(VAR_6->q, VAR_4[VAR_7],
       VAR_5[VAR_8], VAR_9,
       VAR_11 + 1, 1 << VAR_2, VAR_12);

 return VAR_11;
}
