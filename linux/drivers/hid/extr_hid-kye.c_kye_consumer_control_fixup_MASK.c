
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {int dummy; } ;
typedef int __u8 ;


 int FUNC_0 (struct hid_device*,char*,char const*) ;

__attribute__((used)) static __u8 *FUNC_1(struct hid_device *VAR_0, __u8 *VAR_1,
  unsigned int *VAR_2, int VAR_3, const char *VAR_4) {





 if (*VAR_2 >= VAR_3 + 31 &&

     VAR_1[VAR_3] == 0x05 && VAR_1[VAR_3 + 1] == 0x0c &&

     VAR_1[VAR_3 + 2] == 0x09 && VAR_1[VAR_3 + 3] == 0x01 &&

     VAR_1[VAR_3 + 10] == 0x2a && VAR_1[VAR_3 + 12] > 0x2f) {
  FUNC_0(VAR_0, "fixing up %s report descriptor\n", VAR_4);
  VAR_1[VAR_3 + 12] = 0x2f;
 }
 return VAR_1;
}
