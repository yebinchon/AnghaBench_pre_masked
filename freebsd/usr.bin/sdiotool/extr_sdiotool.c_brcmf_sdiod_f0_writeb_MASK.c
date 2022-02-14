
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
typedef int u8 ;
struct sdio_func {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sdio_func*,int ,scalar_t__,int*) ;
 int FUNC_1 (struct sdio_func*,int ,scalar_t__,int*) ;

__attribute__((used)) static inline int FUNC_2(struct sdio_func *VAR_2,
     uint VAR_3, u8 VAR_4) {
 int VAR_5;






 if ((VAR_3 == VAR_0) ||
     (VAR_3 == VAR_1))
  FUNC_1(VAR_2, VAR_4, VAR_3, &VAR_5);
 else
  FUNC_0(VAR_2, VAR_4, VAR_3, &VAR_5);

 return VAR_5;
}
