
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unit ;
struct super_block {struct dentry* s_root; } ;
struct qib_devdata {int unit; int num_pports; int flags; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_0 (char*,int,struct dentry*,struct dentry**,int *,struct qib_devdata*) ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_1 (char*,char*,...) ;
 int * VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (char*,int,char*,int) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct super_block *VAR_11, struct qib_devdata *VAR_12)
{
 struct dentry *VAR_13, *VAR_14;
 char VAR_15[10];
 int VAR_16, VAR_17;


 FUNC_2(VAR_15, sizeof(VAR_15), "%u", VAR_12->unit);
 VAR_16 = FUNC_0(VAR_15, VAR_1|VAR_3|VAR_5, VAR_11->s_root, &VAR_13,
     &VAR_10, VAR_12);
 if (VAR_16) {
  FUNC_1("create_file(%s) failed: %d\n", VAR_15, VAR_16);
  goto bail;
 }


 VAR_16 = FUNC_0("counters", VAR_2|VAR_3, VAR_13, &VAR_14,
     &VAR_6[0], VAR_12);
 if (VAR_16) {
  FUNC_1("create_file(%s/counters) failed: %d\n",
         VAR_15, VAR_16);
  goto bail;
 }
 VAR_16 = FUNC_0("counter_names", VAR_2|VAR_3, VAR_13, &VAR_14,
     &VAR_6[1], VAR_12);
 if (VAR_16) {
  FUNC_1("create_file(%s/counter_names) failed: %d\n",
         VAR_15, VAR_16);
  goto bail;
 }
 VAR_16 = FUNC_0("portcounter_names", VAR_2|VAR_3, VAR_13, &VAR_14,
     &VAR_8[0], VAR_12);
 if (VAR_16) {
  FUNC_1("create_file(%s/%s) failed: %d\n",
         VAR_15, "portcounter_names", VAR_16);
  goto bail;
 }
 for (VAR_17 = 1; VAR_17 <= VAR_12->num_pports; VAR_17++) {
  char VAR_18[24];

  FUNC_3(VAR_18, "port%dcounters", VAR_17);

  VAR_16 = FUNC_0(VAR_18, VAR_2|VAR_3, VAR_13, &VAR_14,
      &VAR_8[VAR_17], VAR_12);
  if (VAR_16) {
   FUNC_1("create_file(%s/%s) failed: %d\n",
    VAR_15, VAR_18, VAR_16);
   goto bail;
  }
  if (!(VAR_12->flags & VAR_0))
   continue;
  FUNC_3(VAR_18, "qsfp%d", VAR_17);
  VAR_16 = FUNC_0(VAR_18, VAR_2|VAR_3, VAR_13, &VAR_14,
      &VAR_9[VAR_17 - 1], VAR_12);
  if (VAR_16) {
   FUNC_1("create_file(%s/%s) failed: %d\n",
    VAR_15, VAR_18, VAR_16);
   goto bail;
  }
 }

 VAR_16 = FUNC_0("flash", VAR_2|VAR_4|VAR_3, VAR_13, &VAR_14,
     &VAR_7, VAR_12);
 if (VAR_16)
  FUNC_1("create_file(%s/flash) failed: %d\n",
   VAR_15, VAR_16);
bail:
 return VAR_16;
}
