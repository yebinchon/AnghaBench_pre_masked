
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dmar_unit {int inv_waitd_seq; int inv_waitd_gen; } ;
struct dmar_qi_genseq {int seq; int gen; } ;


 int FUNC_0 (struct dmar_unit*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct dmar_unit*) ;
 int FUNC_4 (struct dmar_unit*,int,int,int,int) ;
 int FUNC_5 (struct dmar_unit*,int) ;
 int FUNC_6 (struct dmar_unit*,struct dmar_qi_genseq*) ;

__attribute__((used)) static void
FUNC_7(struct dmar_unit *VAR_0, struct dmar_qi_genseq *VAR_1,
    bool VAR_2)
{
 struct dmar_qi_genseq VAR_3;
 uint32_t VAR_4;

 FUNC_1(VAR_1 != ((void*)0), ("wait descriptor with no place for seq"));
 FUNC_0(VAR_0);
 if (VAR_0->inv_waitd_seq == 0xffffffff) {
  VAR_3.gen = VAR_0->inv_waitd_gen;
  VAR_3.seq = VAR_0->inv_waitd_seq;
  FUNC_5(VAR_0, 1);
  FUNC_4(VAR_0, VAR_3.seq, 0, 1, 0);
  FUNC_3(VAR_0);
  while (!FUNC_6(VAR_0, &VAR_3))
   FUNC_2();
  VAR_0->inv_waitd_gen++;
  VAR_0->inv_waitd_seq = 1;
 }
 VAR_4 = VAR_0->inv_waitd_seq++;
 VAR_1->gen = VAR_0->inv_waitd_gen;
 VAR_1->seq = VAR_4;
 if (VAR_2) {
  FUNC_5(VAR_0, 1);
  FUNC_4(VAR_0, VAR_4, 1, 1, 0);
 }
}
