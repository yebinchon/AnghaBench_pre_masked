
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_iommu_req_tail {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
__attribute__((used)) static int FUNC_0(void *VAR_7, size_t VAR_8)
{
 struct virtio_iommu_req_tail *VAR_9 = VAR_7 + VAR_8 - sizeof(*VAR_9);

 switch (VAR_9->status) {
 case 130:
  return 0;
 case 128:
  return -VAR_5;
 case 134:
  return -VAR_1;
 case 129:
  return -VAR_6;
 case 132:
  return -VAR_3;
 case 135:
  return -VAR_0;
 case 131:
  return -VAR_4;
 case 133:
 case 136:
 default:
  return -VAR_2;
 }
}
