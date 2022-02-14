
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hid_device*,int *,size_t) ;
 int FUNC_1 (struct hid_device*,int ,int *,size_t,unsigned char,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,size_t,int ) ;

__attribute__((used)) static int FUNC_4(struct hid_device *VAR_4, u8 *VAR_5, size_t VAR_6,
        unsigned char VAR_7)
{
 u8 *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(VAR_5, VAR_6, VAR_1);
 if (!VAR_8)
  return -VAR_0;

 if (VAR_7 == VAR_2)
  VAR_9 = FUNC_0(VAR_4, VAR_8, VAR_6);
 else
  VAR_9 = FUNC_1(VAR_4, VAR_8[0], VAR_8, VAR_6, VAR_7,
    VAR_3);

 FUNC_2(VAR_8);
 return VAR_9;
}
