
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct brcmstb_i2c_dev {int dummy; } ;
typedef enum bsc_xfer_cmd { ____Placeholder_bsc_xfer_cmd } bsc_xfer_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct brcmstb_i2c_dev*,int) ;
 int FUNC_1 (struct brcmstb_i2c_dev*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct brcmstb_i2c_dev *VAR_4,
           u8 *VAR_5, unsigned int VAR_6)
{
 enum bsc_xfer_cmd VAR_7 = VAR_6 ? VAR_0 : VAR_1;

 FUNC_1(VAR_4, 1, VAR_2);
 FUNC_1(VAR_4, *VAR_5, VAR_3);

 return FUNC_0(VAR_4, VAR_7);
}
