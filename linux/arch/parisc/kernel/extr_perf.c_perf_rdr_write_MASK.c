
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct rdr_tbl_ent {scalar_t__ width; size_t num_words; } ;
typedef size_t int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct rdr_tbl_ent* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(uint32_t VAR_2, uint64_t *VAR_3)
{
 const struct rdr_tbl_ent *VAR_4;
 int32_t VAR_5;

FUNC_3("perf_rdr_write\n");
 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4->width == 0) { return; }

 VAR_5 = VAR_4->num_words;
 while (VAR_5--) {
  if (VAR_1 == VAR_0) {
   FUNC_1(VAR_2, VAR_3[VAR_5]);
  } else {
   FUNC_2(VAR_2, VAR_3[VAR_5]);
  }
 }
FUNC_3("perf_rdr_write done\n");
}
