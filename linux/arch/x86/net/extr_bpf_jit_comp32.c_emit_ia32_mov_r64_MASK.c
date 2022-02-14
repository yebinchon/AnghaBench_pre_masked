
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bpf_prog_aux {int verifier_zext; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int **) ;
 int FUNC_1 (int ,int ,int,int,int **) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline void FUNC_2(const bool VAR_4, const u8 VAR_5[],
         const u8 VAR_6[], bool VAR_7,
         bool VAR_8, u8 **VAR_9,
         const struct bpf_prog_aux *VAR_10)
{
 FUNC_1(VAR_1, VAR_3, VAR_7, VAR_8, VAR_9);
 if (VAR_4)

  FUNC_1(VAR_0, VAR_2, VAR_7, VAR_8, VAR_9);
 else if (!VAR_10->verifier_zext)

  FUNC_0(VAR_0, 0, VAR_7, VAR_9);
}
