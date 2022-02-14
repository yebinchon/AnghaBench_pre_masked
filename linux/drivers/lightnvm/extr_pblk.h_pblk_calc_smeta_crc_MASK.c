
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pblk_line_meta {int smeta_len; } ;
struct pblk {struct pblk_line_meta lm; } ;
struct line_smeta {int dummy; } ;
struct line_header {int dummy; } ;
typedef int crc ;


 int FUNC_0 (int ,unsigned char*,int) ;

__attribute__((used)) static inline u32 FUNC_1(struct pblk *VAR_0,
          struct line_smeta *VAR_1)
{
 struct pblk_line_meta *VAR_2 = &VAR_0->lm;
 u32 VAR_3 = ~(u32)0;

 VAR_3 = FUNC_0(VAR_3, (unsigned char *)VAR_1 +
    sizeof(struct line_header) + sizeof(VAR_3),
    VAR_2->smeta_len -
    sizeof(struct line_header) - sizeof(VAR_3));

 return VAR_3;
}
