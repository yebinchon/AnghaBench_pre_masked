
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct amd_northbridge {TYPE_4__* misc; } ;
struct amd64_pvt {int fam; int model; TYPE_3__* ranges; struct pci_dev* F1; } ;
struct TYPE_8__ {int vendor; } ;
struct TYPE_6__ {int lo; int hi; } ;
struct TYPE_5__ {int lo; int hi; } ;
struct TYPE_7__ {TYPE_2__ lim; TYPE_1__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,int ) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_3 (struct amd64_pvt*,unsigned int) ;
 int FUNC_4 (struct amd64_pvt*,unsigned int) ;
 struct amd_northbridge* FUNC_5 (int ) ;
 int FUNC_6 (struct pci_dev*) ;
 struct pci_dev* FUNC_7 (int ,unsigned int,TYPE_4__*) ;

__attribute__((used)) static void FUNC_8(struct amd64_pvt *VAR_8, unsigned VAR_9)
{
 struct amd_northbridge *VAR_10;
 struct pci_dev *VAR_11 = ((void*)0);
 unsigned int VAR_12;
 int VAR_13 = VAR_9 << 3;
 u32 VAR_14;

 FUNC_2(VAR_8->F1, VAR_1 + VAR_13, &VAR_8->ranges[VAR_9].base.lo);
 FUNC_2(VAR_8->F1, VAR_3 + VAR_13, &VAR_8->ranges[VAR_9].lim.lo);

 if (VAR_8->fam == 0xf)
  return;

 if (!FUNC_4(VAR_8, VAR_9))
  return;

 FUNC_2(VAR_8->F1, VAR_0 + VAR_13, &VAR_8->ranges[VAR_9].base.hi);
 FUNC_2(VAR_8->F1, VAR_2 + VAR_13, &VAR_8->ranges[VAR_9].lim.hi);


 if (VAR_8->fam != 0x15)
  return;

 VAR_10 = FUNC_5(FUNC_3(VAR_8, VAR_9));
 if (FUNC_1(!VAR_10))
  return;

 if (VAR_8->model == 0x60)
  VAR_12 = VAR_6;
 else if (VAR_8->model == 0x30)
  VAR_12 = VAR_5;
 else
  VAR_12 = VAR_7;

 VAR_11 = FUNC_7(VAR_10->misc->vendor, VAR_12, VAR_10->misc);
 if (FUNC_1(!VAR_11))
  return;

 FUNC_2(VAR_11, VAR_4, &VAR_14);

 VAR_8->ranges[VAR_9].lim.lo &= FUNC_0(15, 0);


 VAR_8->ranges[VAR_9].lim.lo |= ((VAR_14 & 0x1fff) << 3 | 0x7) << 16;

 VAR_8->ranges[VAR_9].lim.hi &= FUNC_0(7, 0);


 VAR_8->ranges[VAR_9].lim.hi |= VAR_14 >> 13;

 FUNC_6(VAR_11);
}
