
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hid_device*,char*,int) ;
 int FUNC_1 (struct hid_device*,int ,int *,size_t,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_3, u8 VAR_4, u8 *VAR_5,
       size_t VAR_6, unsigned int VAR_7)
{
 int VAR_8;

 do {
  VAR_8 = FUNC_1(VAR_3, VAR_5[0], VAR_5, VAR_6, VAR_4,
    VAR_2);
 } while ((VAR_8 == -VAR_1 || VAR_8 == -VAR_0) && --VAR_7);

 if (VAR_8 < 0)
  FUNC_0(VAR_3, "wacom_set_report: ran out of retries "
   "(last error = %d)\n", VAR_8);

 return VAR_8;
}
