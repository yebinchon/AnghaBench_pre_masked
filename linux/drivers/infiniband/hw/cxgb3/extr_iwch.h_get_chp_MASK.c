
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwch_dev {int cqs; } ;
struct iwch_cq {int dummy; } ;


 struct iwch_cq* FUNC_0 (int *,int ) ;

__attribute__((used)) static inline struct iwch_cq *FUNC_1(struct iwch_dev *VAR_0, u32 VAR_1)
{
 return FUNC_0(&VAR_0->cqs, VAR_1);
}
