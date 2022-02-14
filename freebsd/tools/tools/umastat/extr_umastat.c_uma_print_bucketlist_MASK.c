
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int ub ;
struct uma_bucket {int ub_cnt; scalar_t__ ub_entries; } ;
struct bucketlist {int dummy; } ;
typedef int kvm_t ;


 struct uma_bucket* FUNC_0 (struct bucketlist*) ;
 struct uma_bucket* FUNC_1 (struct uma_bucket*,int ) ;
 int FUNC_2 (int,char*,int ) ;
 int FUNC_3 (int *,struct uma_bucket*,struct uma_bucket*,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,...) ;
 int VAR_0 ;
 int FUNC_6 (struct uma_bucket*,char*) ;

__attribute__((used)) static void
FUNC_7(kvm_t *VAR_1, struct bucketlist *VAR_2,
    const char *VAR_3, const char *VAR_4)
{
 struct uma_bucket *VAR_5, VAR_6;
 uint64_t VAR_7, VAR_8;
 int VAR_9, VAR_10;

 FUNC_5("%s%s {", VAR_4, VAR_3);

 VAR_7 = VAR_8 = 0;
 VAR_9 = 0;
 for (VAR_5 = FUNC_0(VAR_2); VAR_5 != ((void*)0); VAR_5 =
     FUNC_1(&VAR_6, VAR_0)) {
  VAR_10 = FUNC_3(VAR_1, VAR_5, &VAR_6, sizeof(VAR_6), 0);
  if (VAR_10 != 0)
   FUNC_2(-1, "uma_print_bucketlist: %s", FUNC_4(VAR_1));
  if (VAR_9 % 2 == 0)
   FUNC_5("\n%s  ", VAR_4);
  FUNC_6(&VAR_6, "");
  FUNC_5(" ");
  VAR_7 += VAR_6.ub_entries;
  VAR_8 += VAR_6.ub_cnt;
  VAR_9++;
 }

 FUNC_5("\n");
 FUNC_5("%s};  // total cnt %ju, total entries %ju\n", VAR_4,
     VAR_8, VAR_7);
}
