
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct bio_vec {int bv_offset; int bv_len; int bv_page; } ;


 struct scatterlist* FUNC_0 (struct scatterlist**,struct scatterlist*) ;
 int FUNC_1 (struct scatterlist*,int ,int ,int ) ;

__attribute__((used)) static inline int FUNC_2(struct bio_vec VAR_0,
  struct scatterlist *VAR_1, struct scatterlist **VAR_2)
{
 *VAR_2 = FUNC_0(VAR_2, VAR_1);
 FUNC_1(*VAR_2, VAR_0.bv_page, VAR_0.bv_len, VAR_0.bv_offset);
 return 1;
}
