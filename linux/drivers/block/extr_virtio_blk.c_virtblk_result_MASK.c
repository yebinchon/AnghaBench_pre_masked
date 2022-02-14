
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtblk_req {int status; } ;
typedef int blk_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



__attribute__((used)) static inline blk_status_t FUNC_0(struct virtblk_req *VAR_3)
{
 switch (VAR_3->status) {
 case 129:
  return VAR_2;
 case 128:
  return VAR_1;
 default:
  return VAR_0;
 }
}
