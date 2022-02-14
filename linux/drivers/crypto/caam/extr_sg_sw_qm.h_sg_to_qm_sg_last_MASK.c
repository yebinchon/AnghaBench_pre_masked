
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct scatterlist {int dummy; } ;
struct qm_sg_entry {int dummy; } ;


 int FUNC_0 (struct qm_sg_entry*) ;
 int FUNC_1 (struct qm_sg_entry*,int ) ;
 struct qm_sg_entry* FUNC_2 (struct scatterlist*,int,struct qm_sg_entry*,int ) ;

__attribute__((used)) static inline void FUNC_3(struct scatterlist *VAR_0, int VAR_1,
        struct qm_sg_entry *VAR_2, u16 VAR_3)
{
 VAR_2 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_1(VAR_2, FUNC_0(VAR_2));
}
