
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int m32_segmap; int m64_segmap; int io_segmap; } ;
struct pnv_phb {scalar_t__ type; TYPE_1__ ioda; } ;
struct pnv_ioda_pe {struct pnv_phb* phb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct pnv_ioda_pe*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct pnv_ioda_pe *VAR_5)
{
 struct pnv_phb *VAR_6 = VAR_5->phb;

 if (VAR_6->type == VAR_3) {
  FUNC_0(VAR_5, VAR_0,
         VAR_6->ioda.io_segmap);
  FUNC_0(VAR_5, VAR_1,
         VAR_6->ioda.m32_segmap);
  FUNC_0(VAR_5, VAR_2,
         VAR_6->ioda.m64_segmap);
 } else if (VAR_6->type == VAR_4) {
  FUNC_0(VAR_5, VAR_1,
         VAR_6->ioda.m32_segmap);
 }
}
