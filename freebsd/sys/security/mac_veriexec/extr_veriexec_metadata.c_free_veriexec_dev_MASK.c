
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct veriexec_devhead {int dummy; } ;
struct veriexec_dev_list {scalar_t__ fsid; struct veriexec_dev_list* label; struct veriexec_devhead file_head; } ;
struct mac_veriexec_file_info {scalar_t__ fsid; struct mac_veriexec_file_info* label; struct veriexec_devhead file_head; } ;
typedef scalar_t__ dev_t ;


 int VAR_0 ;
 struct veriexec_dev_list* FUNC_0 (struct veriexec_devhead*) ;
 struct veriexec_dev_list* FUNC_1 (struct veriexec_dev_list*,int ) ;
 int FUNC_2 (struct veriexec_dev_list*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct veriexec_dev_list*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_6(dev_t VAR_4, struct veriexec_devhead *VAR_5)
{
 struct veriexec_dev_list *VAR_6;
 struct mac_veriexec_file_info *VAR_7, *VAR_8;


 for (VAR_6 = FUNC_0(VAR_5); VAR_6 != ((void*)0);
      VAR_6 = FUNC_1(VAR_6, VAR_2))
  if (VAR_6->fsid == VAR_4) break;


 if (VAR_6 == ((void*)0))
  return VAR_0;


 FUNC_2(VAR_6, VAR_2);


 FUNC_5(&VAR_3);


 for (VAR_7 = FUNC_0(&(VAR_6->file_head)); VAR_7 != ((void*)0); VAR_7 = VAR_8) {
  VAR_8 = FUNC_1(VAR_7, VAR_2);
  FUNC_2(VAR_7, VAR_2);
  if (VAR_7->label)
   FUNC_3(VAR_7->label, VAR_1);
  FUNC_3(VAR_7, VAR_1);
 }


 FUNC_3(VAR_6, VAR_1);


 FUNC_4(&VAR_3);
 return 0;
}
