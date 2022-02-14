
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct ref_store {int dummy; } ;
struct packed_ref_store {int lock; int path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct packed_ref_store*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (struct packed_ref_store*) ;
 int FUNC_3 (char*,int*) ;
 scalar_t__ FUNC_4 (int *,int ,int,int) ;
 struct packed_ref_store* FUNC_5 (struct ref_store*,int,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct strbuf*,char*,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,struct strbuf*) ;

int FUNC_10(struct ref_store *VAR_3, int VAR_4, struct strbuf *VAR_5)
{
 struct packed_ref_store *VAR_6 =
  FUNC_5(VAR_3, VAR_1 | VAR_0,
    "packed_refs_lock");
 static int VAR_7 = 0;
 static int VAR_8 = 1000;

 if (!VAR_7) {
  FUNC_3("core.packedrefstimeout", &VAR_8);
  VAR_7 = 1;
 }






 if (FUNC_4(
       &VAR_6->lock,
       VAR_6->path,
       VAR_4, VAR_8) < 0) {
  FUNC_9(VAR_6->path, VAR_2, VAR_5);
  return -1;
 }

 if (FUNC_1(&VAR_6->lock)) {
  FUNC_7(VAR_5, "unable to close %s: %s", VAR_6->path, FUNC_8(VAR_2));
  FUNC_6(&VAR_6->lock);
  return -1;
 }
 FUNC_0(VAR_6);





 FUNC_2(VAR_6);
 return 0;
}
