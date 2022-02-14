
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct hci_dev {int dummy; } ;
struct btrtl_device_info {int cfg_len; unsigned char* cfg_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int,int ) ;
 int FUNC_2 (unsigned char*,unsigned char*,int) ;
 int FUNC_3 (struct hci_dev*,char*,int,int) ;
 int FUNC_4 (struct hci_dev*,unsigned char*,int) ;
 int FUNC_5 (struct hci_dev*,struct btrtl_device_info*,unsigned char**) ;

__attribute__((used)) static int FUNC_6(struct hci_dev *VAR_2,
    struct btrtl_device_info *VAR_3)
{
 unsigned char *VAR_4 = ((void*)0);
 int VAR_5;
 u8 *VAR_6;

 VAR_5 = FUNC_5(VAR_2, VAR_3, &VAR_4);
 if (VAR_5 < 0)
  goto out;

 if (VAR_3->cfg_len > 0) {
  VAR_6 = FUNC_1(VAR_5 + VAR_3->cfg_len, VAR_1);
  if (!VAR_6) {
   VAR_5 = -VAR_0;
   goto out;
  }

  FUNC_2(VAR_6, VAR_4, VAR_5);
  FUNC_0(VAR_4);

  FUNC_2(VAR_6 + VAR_5, VAR_3->cfg_data, VAR_3->cfg_len);
  VAR_5 += VAR_3->cfg_len;

  VAR_4 = VAR_6;
 }

 FUNC_3(VAR_2, "cfg_sz %d, total sz %d", VAR_3->cfg_len, VAR_5);

 VAR_5 = FUNC_4(VAR_2, VAR_4, VAR_5);

out:
 FUNC_0(VAR_4);
 return VAR_5;
}
