
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct pci_dn {TYPE_3__* phb; int devfn; int busno; TYPE_2__* edev; } ;
struct TYPE_6__ {unsigned long buid; } ;
struct TYPE_5__ {TYPE_1__* pe; } ;
struct TYPE_4__ {int state; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct pci_dn*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int,int,int*,unsigned long,int,...) ;
 unsigned long FUNC_4 (int ,int ,int) ;

int FUNC_5(struct pci_dn *VAR_7, int VAR_8, int VAR_9, u32 *VAR_10)
{
 int VAR_11 = -1;
 unsigned long VAR_12, VAR_13;
 int VAR_14;

 if (!VAR_7)
  return VAR_2;
 if (!FUNC_2(VAR_7, VAR_8))
  return VAR_1;






 VAR_13 = FUNC_4(VAR_7->busno, VAR_7->devfn, VAR_8);
 VAR_12 = VAR_7->phb->buid;
 if (VAR_12) {
  VAR_14 = FUNC_3(VAR_5, 4, 2, &VAR_11,
    VAR_13, FUNC_0(VAR_12), FUNC_1(VAR_12), VAR_9);
 } else {
  VAR_14 = FUNC_3(VAR_6, 2, 2, &VAR_11, VAR_13, VAR_9);
 }
 *VAR_10 = VAR_11;

 if (VAR_14)
  return VAR_2;

 return VAR_4;
}
