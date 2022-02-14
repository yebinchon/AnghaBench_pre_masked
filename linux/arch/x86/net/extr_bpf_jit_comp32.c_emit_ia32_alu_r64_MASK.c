
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bpf_prog_aux {int verifier_zext; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const,int,int const,int ,int ,int,int,int **) ;
 int FUNC_1 (int ,int ,int,int **) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline void FUNC_2(const bool VAR_4, const u8 VAR_5,
         const u8 VAR_6[], const u8 VAR_7[],
         bool VAR_8, bool VAR_9,
         u8 **VAR_10, const struct bpf_prog_aux *VAR_11)
{
 u8 *VAR_12 = *VAR_10;

 FUNC_0(VAR_4, 0, VAR_5, VAR_1, VAR_3, VAR_8, VAR_9, &VAR_12);
 if (VAR_4)
  FUNC_0(VAR_4, 1, VAR_5, VAR_0, VAR_2, VAR_8, VAR_9,
    &VAR_12);
 else if (!VAR_11->verifier_zext)
  FUNC_1(VAR_0, 0, VAR_8, &VAR_12);
 *VAR_10 = VAR_12;
}
