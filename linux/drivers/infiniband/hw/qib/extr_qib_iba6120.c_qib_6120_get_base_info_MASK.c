
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_ctxtdata {int dummy; } ;
struct qib_base_info {int spi_runtime_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;

__attribute__((used)) static int FUNC_1(struct qib_ctxtdata *VAR_4,
      struct qib_base_info *VAR_5)
{
 if (FUNC_0())
  VAR_5->spi_runtime_flags |= VAR_1;

 VAR_5->spi_runtime_flags |= VAR_2 |
  VAR_0 | VAR_3;
 return 0;
}
