
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_aes_reqctx {int mode; } ;
struct atmel_aes_dev {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct atmel_aes_dev *VAR_1,
          const struct atmel_aes_reqctx *VAR_2)
{

 VAR_1->flags = (VAR_1->flags & VAR_0) | VAR_2->mode;
}
