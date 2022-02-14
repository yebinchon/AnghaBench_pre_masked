
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_ctxtdata {TYPE_1__* dd; } ;
struct qib_base_info {int spi_runtime_flags; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(struct qib_ctxtdata *VAR_5,
      struct qib_base_info *VAR_6)
{
 VAR_6->spi_runtime_flags |= VAR_1 |
  VAR_0 | VAR_2;

 if (VAR_5->dd->flags & VAR_4)
  VAR_6->spi_runtime_flags |= VAR_3;

 return 0;
}
