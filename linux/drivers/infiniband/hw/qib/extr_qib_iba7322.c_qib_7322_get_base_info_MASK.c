
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qib_ctxtdata {TYPE_2__* dd; } ;
struct qib_base_info {int spi_runtime_flags; } ;
struct TYPE_4__ {int flags; TYPE_1__* cspec; } ;
struct TYPE_3__ {scalar_t__ r1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_0(struct qib_ctxtdata *VAR_8,
      struct qib_base_info *VAR_9)
{
 VAR_9->spi_runtime_flags |= VAR_0 |
  VAR_3 | VAR_2 |
  VAR_1 | VAR_5;
 if (VAR_8->dd->cspec->r1)
  VAR_9->spi_runtime_flags |= VAR_4;
 if (VAR_8->dd->flags & VAR_7)
  VAR_9->spi_runtime_flags |= VAR_6;

 return 0;
}
