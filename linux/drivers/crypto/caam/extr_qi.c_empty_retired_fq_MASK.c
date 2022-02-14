
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qman_portal {int dummy; } ;
struct qman_fq {int flags; int fqid; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,int ) ;
 struct qman_portal* FUNC_1 (int ) ;
 int FUNC_2 (struct qman_portal*,int) ;
 int FUNC_3 (struct qman_fq*,int,int) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct device *VAR_5, struct qman_fq *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_3(VAR_6, VAR_2 |
        VAR_1,
        VAR_4 |
        VAR_3);
 if (VAR_7) {
  FUNC_0(VAR_5, "Volatile dequeue fail for FQ: %u\n", VAR_6->fqid);
  return VAR_7;
 }

 do {
  struct qman_portal *VAR_8;

  VAR_8 = FUNC_1(FUNC_4());
  FUNC_2(VAR_8, 16);
 } while (VAR_6->flags & VAR_0);

 return 0;
}
