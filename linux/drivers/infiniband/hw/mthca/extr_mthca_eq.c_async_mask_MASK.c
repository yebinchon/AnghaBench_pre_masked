
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mthca_dev {int mthca_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline u64 FUNC_0(struct mthca_dev *VAR_3)
{
 return VAR_3->mthca_flags & VAR_1 ?
  VAR_0 | VAR_2 :
  VAR_0;
}
