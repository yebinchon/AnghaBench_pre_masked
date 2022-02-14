
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unit ;
struct super_block {int s_root; } ;
struct qib_devdata {int unit; int num_pports; int flags; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int VAR_0 ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 struct dentry* FUNC_4 (int ) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct dentry* FUNC_8 (char*,struct dentry*,int ) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (struct dentry*,char*) ;
 int FUNC_11 (int ,struct dentry*) ;
 int FUNC_12 (char*,int,char*,int) ;
 int FUNC_13 (char*,char*,int) ;
 int FUNC_14 (char*) ;

__attribute__((used)) static int FUNC_15(struct super_block *VAR_1,
          struct qib_devdata *VAR_2)
{
 struct dentry *VAR_3, *VAR_4;
 char VAR_5[10];
 int VAR_6, VAR_7;

 VAR_4 = FUNC_4(VAR_1->s_root);
 FUNC_6(FUNC_3(VAR_4));
 FUNC_12(VAR_5, sizeof(VAR_5), "%u", VAR_2->unit);
 VAR_3 = FUNC_8(VAR_5, VAR_4, FUNC_14(VAR_5));

 if (FUNC_0(VAR_3)) {
  VAR_6 = FUNC_1(VAR_3);
  FUNC_9("Lookup of %s failed\n", VAR_5);
  goto bail;
 }

 FUNC_6(FUNC_3(VAR_3));
 FUNC_10(VAR_3, "counters");
 FUNC_10(VAR_3, "counter_names");
 FUNC_10(VAR_3, "portcounter_names");
 for (VAR_7 = 0; VAR_7 < VAR_2->num_pports; VAR_7++) {
  char VAR_8[24];

  FUNC_13(VAR_8, "port%dcounters", VAR_7 + 1);
  FUNC_10(VAR_3, VAR_8);
  if (VAR_2->flags & VAR_0) {
   FUNC_13(VAR_8, "qsfp%d", VAR_7 + 1);
   FUNC_10(VAR_3, VAR_8);
  }
 }
 FUNC_10(VAR_3, "flash");
 FUNC_7(FUNC_3(VAR_3));
 VAR_6 = FUNC_11(FUNC_3(VAR_4), VAR_3);
 FUNC_2(VAR_3);
 FUNC_5(VAR_3);

bail:
 FUNC_7(FUNC_3(VAR_4));
 FUNC_5(VAR_4);
 return VAR_6;
}
