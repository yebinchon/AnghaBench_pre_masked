
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysinfo {scalar_t__ freeswap; scalar_t__ totalswap; scalar_t__ bufferram; scalar_t__ freehigh; scalar_t__ totalhigh; scalar_t__ freeram; scalar_t__ totalram; int sharedram; } ;
struct appldata_mem_data {unsigned long pgpgin; unsigned long pgpgout; unsigned long pswpin; unsigned long pswpout; unsigned long pgalloc; unsigned long pgfault; unsigned long pgmajfault; int sync_count_2; int timestamp; void* freeswap; void* totalswap; void* cached; void* bufferram; void* freehigh; void* totalhigh; void* freeram; void* totalram; int sharedram; int sync_count_1; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (scalar_t__) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_1 (unsigned long*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct sysinfo*) ;
 int FUNC_5 (struct sysinfo*) ;

__attribute__((used)) static void FUNC_6(void *VAR_10)
{




 static struct sysinfo VAR_11;
 unsigned long VAR_12[VAR_1];
 struct appldata_mem_data *VAR_13;

 VAR_13 = VAR_10;
 VAR_13->sync_count_1++;

 FUNC_1(VAR_12);
 VAR_13->pgpgin = VAR_12[VAR_6] >> 1;
 VAR_13->pgpgout = VAR_12[VAR_7] >> 1;
 VAR_13->pswpin = VAR_12[VAR_8];
 VAR_13->pswpout = VAR_12[VAR_9];
 VAR_13->pgalloc = VAR_12[VAR_3];
 VAR_13->pgalloc += VAR_12[VAR_2];
 VAR_13->pgfault = VAR_12[VAR_4];
 VAR_13->pgmajfault = VAR_12[VAR_5];

 FUNC_4(&VAR_11);
 VAR_13->sharedram = VAR_11.sharedram;
 VAR_13->totalram = FUNC_0(VAR_11.totalram);
 VAR_13->freeram = FUNC_0(VAR_11.freeram);
 VAR_13->totalhigh = FUNC_0(VAR_11.totalhigh);
 VAR_13->freehigh = FUNC_0(VAR_11.freehigh);
 VAR_13->bufferram = FUNC_0(VAR_11.bufferram);
 VAR_13->cached = FUNC_0(FUNC_3(VAR_0)
    - VAR_11.bufferram);

 FUNC_5(&VAR_11);
 VAR_13->totalswap = FUNC_0(VAR_11.totalswap);
 VAR_13->freeswap = FUNC_0(VAR_11.freeswap);

 VAR_13->timestamp = FUNC_2();
 VAR_13->sync_count_2++;
}
