
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rome_config {scalar_t__ dnld_type; int dnld_mode; int fwname; } ;
struct hci_dev {int dev; } ;
struct firmware {int size; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct hci_dev*,char*,int ,int) ;
 int FUNC_1 (struct hci_dev*,char*,int ,int) ;
 int FUNC_2 (struct hci_dev*,char*,int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct rome_config*,struct firmware const*) ;
 int FUNC_6 (struct hci_dev*,int,int const*,int ) ;
 int FUNC_7 (struct firmware const*) ;
 int FUNC_8 (struct firmware const**,int ,int *) ;

__attribute__((used)) static int FUNC_9(struct hci_dev *VAR_4,
      struct rome_config *VAR_5)
{
 const struct firmware *VAR_6;
 const u8 *VAR_7;
 int VAR_8, VAR_9, VAR_10 = 0;

 FUNC_2(VAR_4, "QCA Downloading %s", VAR_5->fwname);

 VAR_8 = FUNC_8(&VAR_6, VAR_5->fwname, &VAR_4->dev);
 if (VAR_8) {
  FUNC_1(VAR_4, "QCA Failed to request file: %s (%d)",
      VAR_5->fwname, VAR_8);
  return VAR_8;
 }

 FUNC_5(VAR_5, VAR_6);

 VAR_7 = VAR_6->data;
 VAR_9 = VAR_6->size;
 while (VAR_9 > 0) {
  int VAR_11 = FUNC_3(VAR_0, VAR_9);

  FUNC_0(VAR_4, "Send segment %d, size %d", VAR_10++, VAR_11);

  VAR_9 -= VAR_11;

  if (!VAR_9 || VAR_11 < VAR_0)
   VAR_5->dnld_mode = VAR_1;

  VAR_8 = FUNC_6(VAR_4, VAR_11, VAR_7,
         VAR_5->dnld_mode);
  if (VAR_8)
   goto out;

  VAR_7 += VAR_11;
 }







 if (VAR_5->dnld_type == VAR_3 ||
     VAR_5->dnld_type == VAR_2)
  VAR_8 = FUNC_4(VAR_4);

out:
 FUNC_7(VAR_6);

 return VAR_8;
}
