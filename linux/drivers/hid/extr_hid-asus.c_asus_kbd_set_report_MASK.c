
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hid_device*,int ,unsigned char*,size_t,int ,int ) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int *,size_t,int ) ;

__attribute__((used)) static int FUNC_3(struct hid_device *VAR_5, u8 *VAR_6, size_t VAR_7)
{
 unsigned char *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(VAR_6, VAR_7, VAR_2);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_5, VAR_1, VAR_8,
     VAR_7, VAR_3,
     VAR_4);
 FUNC_1(VAR_8);

 return VAR_9;
}
