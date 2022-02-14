
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hci_dev {int dev; } ;
struct firmware {int size; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct firmware const*) ;
 int FUNC_2 (struct firmware const**,char const*,int *) ;
 int FUNC_3 (struct hci_dev*,char*,char const*) ;

__attribute__((used)) static int FUNC_4(struct hci_dev *VAR_2, const char *VAR_3, u8 **VAR_4)
{
 const struct firmware *VAR_5;
 int VAR_6;

 FUNC_3(VAR_2, "loading %s", VAR_3);
 VAR_6 = FUNC_2(&VAR_5, VAR_3, &VAR_2->dev);
 if (VAR_6 < 0)
  return VAR_6;
 VAR_6 = VAR_5->size;
 *VAR_4 = FUNC_0(VAR_5->data, VAR_6, VAR_1);
 if (!*VAR_4)
  VAR_6 = -VAR_0;

 FUNC_1(VAR_5);

 return VAR_6;
}
