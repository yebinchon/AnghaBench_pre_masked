
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_4__ {int sum; unsigned long aibv; unsigned long aisb; int aisbo; scalar_t__ aibvo; int noi; int isc; } ;
struct zpci_fib {TYPE_1__ fmt0; int member_0; } ;
struct zpci_dev {int aisb; TYPE_3__* aibv; int fh; } ;
struct TYPE_6__ {scalar_t__ vector; } ;
struct TYPE_5__ {scalar_t__ vector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (int ,struct zpci_fib*,int *) ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static int FUNC_3(struct zpci_dev *VAR_4)
{
 u64 VAR_5 = FUNC_0(VAR_4->fh, 0, VAR_2);
 struct zpci_fib VAR_6 = {0};
 u8 VAR_7;

 VAR_6.fmt0.isc = VAR_1;
 VAR_6.fmt0.sum = 1;
 VAR_6.fmt0.noi = FUNC_1(VAR_4->aibv);
 VAR_6.fmt0.aibv = (unsigned long) VAR_4->aibv->vector;
 VAR_6.fmt0.aibvo = 0;
 VAR_6.fmt0.aisb = (unsigned long) VAR_3->vector + (VAR_4->aisb/64)*8;
 VAR_6.fmt0.aisbo = VAR_4->aisb & 63;

 return FUNC_2(VAR_5, &VAR_6, &VAR_7) ? -VAR_0 : 0;
}
