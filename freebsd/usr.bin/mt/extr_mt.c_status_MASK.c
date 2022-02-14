
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_desc {scalar_t__ t_type; char* t_name; int t_erbits; int t_dsbits; } ;
struct mtget {int mt_type; int mt_resid; scalar_t__ mt_erreg; scalar_t__ mt_dsreg; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,unsigned short,int ) ;
 int FUNC_2 (char) ;
 int FUNC_3 (struct mtget*) ;
 struct tape_desc* VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct mtget *VAR_2)
{
 const struct tape_desc *VAR_3;

 for (VAR_3 = VAR_1;; VAR_3++) {
  if (VAR_3->t_type == 0) {
   (void)FUNC_0("%d: unknown tape drive type\n",
       VAR_2->mt_type);
   return;
  }
  if (VAR_3->t_type == VAR_2->mt_type)
   break;
 }
 if(VAR_3->t_type == VAR_0)
  FUNC_3(VAR_2);
 else {
  (void)FUNC_0("%s tape drive, residual=%d\n",
      VAR_3->t_name, VAR_2->mt_resid);
  FUNC_1("ds", (unsigned short)VAR_2->mt_dsreg, VAR_3->t_dsbits);
  FUNC_1("\ner", (unsigned short)VAR_2->mt_erreg, VAR_3->t_erbits);
  (void)FUNC_2('\n');
 }
}
