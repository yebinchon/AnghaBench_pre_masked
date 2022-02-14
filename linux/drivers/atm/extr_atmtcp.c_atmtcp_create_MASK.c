
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct atmtcp_dev_data {int dummy; } ;
struct TYPE_3__ {int vci_bits; int vpi_bits; } ;
struct atm_dev {struct atmtcp_dev_data* dev_data; TYPE_1__ ci_range; } ;
struct TYPE_4__ {int persist; int * vcc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_0 (struct atm_dev*) ;
 struct atm_dev* FUNC_1 (int ,int *,int *,int,int *) ;
 int VAR_6 ;
 int FUNC_2 (struct atmtcp_dev_data*) ;
 struct atmtcp_dev_data* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(int VAR_7,int VAR_8,struct atm_dev **VAR_9)
{
 struct atmtcp_dev_data *VAR_10;
 struct atm_dev *VAR_11;

 VAR_10 = FUNC_3(sizeof(*VAR_10),VAR_3);
 if (!VAR_10)
  return -VAR_2;

 VAR_11 = FUNC_1(VAR_0,((void*)0),&VAR_6,VAR_7,((void*)0));
 if (!VAR_11) {
  FUNC_2(VAR_10);
  return VAR_7 == -1 ? -VAR_2 : -VAR_1;
 }
 VAR_11->ci_range.vpi_bits = VAR_5;
 VAR_11->ci_range.vci_bits = VAR_4;
 VAR_11->dev_data = VAR_10;
 FUNC_0(VAR_11)->vcc = ((void*)0);
 FUNC_0(VAR_11)->persist = VAR_8;
 if (VAR_9) *VAR_9 = VAR_11;
 return 0;
}
