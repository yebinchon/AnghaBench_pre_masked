
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uintmax_t ;
struct numa_mem_region {scalar_t__ mr_domain; scalar_t__ mr_size; scalar_t__ mr_start; } ;
typedef scalar_t__ phandle_t ;
typedef int name ;
typedef scalar_t__ cell_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,char*,scalar_t__*,int) ;
 scalar_t__ FUNC_3 (scalar_t__,char*,char*,int) ;
 int FUNC_4 (scalar_t__,char*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_6 (scalar_t__,char*,struct numa_mem_region*) ;
 int FUNC_7 (char*,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*,char*,int ) ;

void
FUNC_10(struct numa_mem_region *VAR_1, int *VAR_2)
{
 phandle_t VAR_3;
 int VAR_4, VAR_5, VAR_6;
 char VAR_7[31];
 cell_t VAR_8[5];
 struct numa_mem_region *VAR_9;

 VAR_6 = 0;



 for (VAR_3 = FUNC_1(FUNC_5(0)); VAR_3 != 0;
     VAR_3 = FUNC_5(VAR_3)) {
  if (FUNC_3(VAR_3, "name", VAR_7, sizeof(VAR_7)) <= 0)
   continue;
  if (FUNC_9(VAR_7, "memory@", FUNC_8("memory@")) != 0)
   continue;

  VAR_5 = FUNC_6(VAR_3, "reg", &VAR_1[VAR_6]);
  if (VAR_5 == 0)
   continue;
  VAR_9 = &VAR_1[VAR_6];
  VAR_4 = FUNC_4(VAR_3, "ibm,associativity");
  if (VAR_4 <= 0)
   continue;
  FUNC_0(VAR_5 == 1);
  FUNC_2(VAR_3, "ibm,associativity",
   VAR_8, VAR_4);
  VAR_9->mr_domain = VAR_8[3];
  if (VAR_0)
   FUNC_7("%s %#jx-%#jx domain(%ju)\n",
       VAR_7, (uintmax_t)VAR_9->mr_start,
       (uintmax_t)VAR_9->mr_start + VAR_9->mr_size,
       (uintmax_t)VAR_9->mr_domain);
  VAR_6 += VAR_5;
 }
 *VAR_2 = VAR_6;
}
