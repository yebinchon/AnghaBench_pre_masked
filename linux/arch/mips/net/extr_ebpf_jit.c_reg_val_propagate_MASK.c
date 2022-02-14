
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct jit_ctx {int* reg_val_types; struct bpf_prog* skf; } ;
struct bpf_prog {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct jit_ctx*,int,int,int) ;
 int FUNC_2 (int*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct jit_ctx *VAR_6)
{
 const struct bpf_prog *VAR_7 = VAR_6->skf;
 u64 VAR_8;
 int VAR_9;
 int VAR_10;





 VAR_8 = 0;


 for (VAR_9 = VAR_0; VAR_9 <= VAR_1; VAR_9++)
  FUNC_2(&VAR_8, VAR_9, VAR_2);





 FUNC_1(VAR_6, VAR_8, 0, 0);
restart_search:






 for (VAR_10 = 0; VAR_10 < VAR_7->len; VAR_10++) {
  u64 VAR_11 = VAR_6->reg_val_types[VAR_10];

  if ((VAR_11 & VAR_5) == VAR_3 ||
      (VAR_11 & VAR_5) == 0)
   continue;
  if ((VAR_11 & VAR_5) == VAR_4) {
   FUNC_1(VAR_6, VAR_11 & ~VAR_5, VAR_10, 1);
  } else {
   FUNC_0(1, "Unexpected RVT_BRANCH_TAKEN case.\n");
   FUNC_1(VAR_6, VAR_11 & ~VAR_5, VAR_10, 0);
  }
  goto restart_search;
 }






 return 0;
}
