
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wacom {int lock; } ;
struct hid_device {scalar_t__ bus; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct wacom* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct hid_device* FUNC_3 (struct device*) ;
 int FUNC_4 (struct wacom*,int,int ,unsigned int,char const*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_4, int VAR_5,
     const char *VAR_6, size_t VAR_7)
{
 struct hid_device *VAR_8 = FUNC_3(VAR_4);
 struct wacom *VAR_9 = FUNC_0(VAR_8);
 int VAR_10;
 unsigned VAR_11;
 u8 VAR_12;

 if (VAR_8->bus == VAR_0) {
  VAR_11 = 256;
  VAR_12 = VAR_2;
 } else {
  VAR_11 = 1024;
  VAR_12 = VAR_3;
 }

 if (VAR_7 != VAR_11)
  return -VAR_1;

 FUNC_1(&VAR_9->lock);

 VAR_10 = FUNC_4(VAR_9, VAR_5, VAR_12, VAR_11, VAR_6);

 FUNC_2(&VAR_9->lock);

 return VAR_10 < 0 ? VAR_10 : VAR_7;
}
