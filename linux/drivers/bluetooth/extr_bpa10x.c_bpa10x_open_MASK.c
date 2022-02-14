
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int name; } ;
struct bpa10x_data {int rx_anchor; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*) ;
 struct bpa10x_data* FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct hci_dev *VAR_0)
{
 struct bpa10x_data *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 FUNC_0("%s", VAR_0->name);

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2 < 0)
  goto error;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2 < 0)
  goto error;

 return 0;

error:
 FUNC_4(&VAR_1->rx_anchor);

 return VAR_2;
}
