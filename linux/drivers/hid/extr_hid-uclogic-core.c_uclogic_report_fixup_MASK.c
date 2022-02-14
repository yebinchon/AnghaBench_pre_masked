
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uclogic_drvdata {unsigned int desc_size; int * desc_ptr; } ;
struct hid_device {int dummy; } ;
typedef int __u8 ;


 struct uclogic_drvdata* FUNC_0 (struct hid_device*) ;

__attribute__((used)) static __u8 *FUNC_1(struct hid_device *VAR_0, __u8 *VAR_1,
     unsigned int *VAR_2)
{
 struct uclogic_drvdata *VAR_3 = FUNC_0(VAR_0);

 if (VAR_3->desc_ptr != ((void*)0)) {
  VAR_1 = VAR_3->desc_ptr;
  *VAR_2 = VAR_3->desc_size;
 }
 return VAR_1;
}
