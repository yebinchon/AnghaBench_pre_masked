
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;


 struct scatterlist* FUNC_0 (struct scatterlist*) ;
 int FUNC_1 (struct scatterlist*) ;

__attribute__((used)) static inline struct scatterlist *FUNC_2(struct scatterlist **VAR_0,
  struct scatterlist *VAR_1)
{
 if (!*VAR_0)
  return VAR_1;
 FUNC_1(*VAR_0);
 return FUNC_0(*VAR_0);
}
