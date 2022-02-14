
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysinfo {int totalram; int freeram; int totalhigh; int freehigh; int sharedram; } ;
struct pglist_data {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int id; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct pglist_data* FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ FUNC_2 (int,char*) ;
 int FUNC_3 (struct pglist_data*,int ) ;
 int FUNC_4 (struct sysinfo*,int) ;
 int FUNC_5 (char*,char*,int,int,int,int,int,int,int,int,...) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_25,
   struct device_attribute *VAR_26, char *VAR_27)
{
 int VAR_28;
 int VAR_29 = VAR_25->id;
 struct pglist_data *VAR_30 = FUNC_1(VAR_29);
 struct sysinfo VAR_31;
 unsigned long VAR_32, VAR_33;

 FUNC_4(&VAR_31, VAR_29);
 VAR_32 = FUNC_3(VAR_30, VAR_19);
 VAR_33 = FUNC_3(VAR_30, VAR_20);
 VAR_28 = FUNC_5(VAR_27,
         "Node %d MemTotal:       %8lu kB\n"
         "Node %d MemFree:        %8lu kB\n"
         "Node %d MemUsed:        %8lu kB\n"
         "Node %d Active:         %8lu kB\n"
         "Node %d Inactive:       %8lu kB\n"
         "Node %d Active(anon):   %8lu kB\n"
         "Node %d Inactive(anon): %8lu kB\n"
         "Node %d Active(file):   %8lu kB\n"
         "Node %d Inactive(file): %8lu kB\n"
         "Node %d Unevictable:    %8lu kB\n"
         "Node %d Mlocked:        %8lu kB\n",
         VAR_29, FUNC_0(VAR_31.totalram),
         VAR_29, FUNC_0(VAR_31.freeram),
         VAR_29, FUNC_0(VAR_31.totalram - VAR_31.freeram),
         VAR_29, FUNC_0(FUNC_3(VAR_30, VAR_1) +
    FUNC_3(VAR_30, VAR_2)),
         VAR_29, FUNC_0(FUNC_3(VAR_30, VAR_11) +
    FUNC_3(VAR_30, VAR_12)),
         VAR_29, FUNC_0(FUNC_3(VAR_30, VAR_1)),
         VAR_29, FUNC_0(FUNC_3(VAR_30, VAR_11)),
         VAR_29, FUNC_0(FUNC_3(VAR_30, VAR_2)),
         VAR_29, FUNC_0(FUNC_3(VAR_30, VAR_12)),
         VAR_29, FUNC_0(FUNC_3(VAR_30, VAR_21)),
         VAR_29, FUNC_0(FUNC_6(VAR_29, VAR_15)));
 VAR_28 += FUNC_5(VAR_27 + VAR_28,
         "Node %d Dirty:          %8lu kB\n"
         "Node %d Writeback:      %8lu kB\n"
         "Node %d FilePages:      %8lu kB\n"
         "Node %d Mapped:         %8lu kB\n"
         "Node %d AnonPages:      %8lu kB\n"
         "Node %d Shmem:          %8lu kB\n"
         "Node %d KernelStack:    %8lu kB\n"
         "Node %d PageTables:     %8lu kB\n"
         "Node %d NFS_Unstable:   %8lu kB\n"
         "Node %d Bounce:         %8lu kB\n"
         "Node %d WritebackTmp:   %8lu kB\n"
         "Node %d KReclaimable:   %8lu kB\n"
         "Node %d Slab:           %8lu kB\n"
         "Node %d SReclaimable:   %8lu kB\n"
         "Node %d SUnreclaim:     %8lu kB\n"







   ,
         VAR_29, FUNC_0(FUNC_3(VAR_30, VAR_6)),
         VAR_29, FUNC_0(FUNC_3(VAR_30, VAR_23)),
         VAR_29, FUNC_0(FUNC_3(VAR_30, VAR_8)),
         VAR_29, FUNC_0(FUNC_3(VAR_30, VAR_7)),
         VAR_29, FUNC_0(FUNC_3(VAR_30, VAR_3)),
         VAR_29, FUNC_0(VAR_31.sharedram),
         VAR_29, FUNC_6(VAR_29, VAR_14),
         VAR_29, FUNC_0(FUNC_6(VAR_29, VAR_16)),
         VAR_29, FUNC_0(FUNC_3(VAR_30, VAR_22)),
         VAR_29, FUNC_0(FUNC_6(VAR_29, VAR_5)),
         VAR_29, FUNC_0(FUNC_3(VAR_30, VAR_24)),
         VAR_29, FUNC_0(VAR_32 +
         FUNC_3(VAR_30, VAR_13)),
         VAR_29, FUNC_0(VAR_32 + VAR_33),
         VAR_29, FUNC_0(VAR_32),
         VAR_29, FUNC_0(VAR_33)
         );
 VAR_28 += FUNC_2(VAR_29, VAR_27 + VAR_28);
 return VAR_28;
}
