
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bpf_prog_aux {int verifier_zext; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const,int,int const,int ,int const,int,int **) ;
 int FUNC_1 (int ,int ,int,int **) ;

__attribute__((used)) static inline void FUNC_2(const bool VAR_2, const u8 VAR_3,
         const u8 VAR_4[], const u32 VAR_5,
         bool VAR_6, u8 **VAR_7,
         const struct bpf_prog_aux *VAR_8)
{
 u8 *VAR_9 = *VAR_7;
 u32 VAR_10 = 0;

 if (VAR_2 && (VAR_5 & (1<<31)))
  VAR_10 = (u32)~0;

 FUNC_0(VAR_2, 0, VAR_3, VAR_1, VAR_5, VAR_6, &VAR_9);
 if (VAR_2)
  FUNC_0(VAR_2, 1, VAR_3, VAR_0, VAR_10, VAR_6, &VAR_9);
 else if (!VAR_8->verifier_zext)
  FUNC_1(VAR_0, 0, VAR_6, &VAR_9);

 *VAR_7 = VAR_9;
}
