
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {unsigned int type; } ;
typedef enum vb2_memory { ____Placeholder_vb2_memory } vb2_memory ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct vb2_queue*) ;
 scalar_t__ FUNC_1 (struct vb2_queue*) ;
 scalar_t__ FUNC_2 (struct vb2_queue*) ;
 int FUNC_3 (int,char*) ;
 scalar_t__ FUNC_4 (struct vb2_queue*) ;

int FUNC_5(struct vb2_queue *VAR_5,
  enum vb2_memory VAR_6, unsigned int VAR_7)
{
 if (VAR_6 != VAR_3 && VAR_6 != VAR_4 &&
     VAR_6 != VAR_2) {
  FUNC_3(1, "unsupported memory type\n");
  return -VAR_1;
 }

 if (VAR_7 != VAR_5->type) {
  FUNC_3(1, "requested type is incorrect\n");
  return -VAR_1;
 }





 if (VAR_6 == VAR_3 && FUNC_1(VAR_5)) {
  FUNC_3(1, "MMAP for current setup unsupported\n");
  return -VAR_1;
 }

 if (VAR_6 == VAR_4 && FUNC_2(VAR_5)) {
  FUNC_3(1, "USERPTR for current setup unsupported\n");
  return -VAR_1;
 }

 if (VAR_6 == VAR_2 && FUNC_0(VAR_5)) {
  FUNC_3(1, "DMABUF for current setup unsupported\n");
  return -VAR_1;
 }






 if (FUNC_4(VAR_5)) {
  FUNC_3(1, "file io in progress\n");
  return -VAR_0;
 }
 return 0;
}
