
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hid_device*,unsigned char,int *,size_t,unsigned char,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (size_t,int ) ;
 int FUNC_3 (int *,int *,size_t) ;

__attribute__((used)) static int FUNC_4(struct hid_device *VAR_3, unsigned char VAR_4,
     u8 *VAR_5, size_t VAR_6, unsigned char VAR_7)
{
 u8 *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(VAR_6, VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_8, VAR_6,
           VAR_7, VAR_2);
 FUNC_3(VAR_5, VAR_8, VAR_6);
 FUNC_1(VAR_8);
 return VAR_9;
}
