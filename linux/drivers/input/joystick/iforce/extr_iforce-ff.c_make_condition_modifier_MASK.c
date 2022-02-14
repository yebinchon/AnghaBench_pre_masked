
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct resource {int start; } ;
struct TYPE_2__ {int end; int start; } ;
struct iforce {int mem_mutex; TYPE_1__ device_memory; } ;
typedef int __u16 ;
typedef int __s16 ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char FUNC_0 (int) ;
 unsigned char FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,struct resource*,int,int ,int ,long,int *,int *) ;
 int FUNC_3 (struct iforce*,char*,int ,unsigned char*) ;
 int FUNC_4 (struct iforce*,int ,unsigned char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct iforce* VAR_2,
 struct resource* VAR_3, int VAR_4,
 __u16 VAR_5, __u16 VAR_6, __s16 VAR_7, __s16 VAR_8, u16 VAR_9, __s16 VAR_10)
{
 unsigned char VAR_11[10];

 if (!VAR_4) {
  FUNC_5(&VAR_2->mem_mutex);
  if (FUNC_2(&(VAR_2->device_memory), VAR_3, 8,
   VAR_2->device_memory.start, VAR_2->device_memory.end, 2L,
   ((void*)0), ((void*)0))) {
   FUNC_6(&VAR_2->mem_mutex);
   return -VAR_0;
  }
  FUNC_6(&VAR_2->mem_mutex);
 }

 VAR_11[0] = FUNC_1(VAR_3->start);
 VAR_11[1] = FUNC_0(VAR_3->start);

 VAR_11[2] = (100 * VAR_7) >> 15;
 VAR_11[3] = (100 * VAR_8) >> 15;

 VAR_10 = (500 * VAR_10) >> 15;
 VAR_11[4] = FUNC_1(VAR_10);
 VAR_11[5] = FUNC_0(VAR_10);

 VAR_9 = (1000 * VAR_9) >> 16;
 VAR_11[6] = FUNC_1(VAR_9);
 VAR_11[7] = FUNC_0(VAR_9);

 VAR_11[8] = (100 * VAR_5) >> 16;
 VAR_11[9] = (100 * VAR_6) >> 16;

 FUNC_4(VAR_2, VAR_1, VAR_11);
 FUNC_3(VAR_2, "condition", VAR_1, VAR_11);

 return 0;
}
