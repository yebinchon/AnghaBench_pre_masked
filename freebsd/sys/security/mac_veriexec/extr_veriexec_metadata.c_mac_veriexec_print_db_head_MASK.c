
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct veriexec_devhead {int dummy; } ;
struct veriexec_dev_list {scalar_t__ fsid; } ;
struct sbuf {int dummy; } ;


 struct veriexec_dev_list* FUNC_0 (struct veriexec_devhead*) ;
 struct veriexec_dev_list* FUNC_1 (struct veriexec_dev_list*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct sbuf*,struct veriexec_dev_list*) ;
 int FUNC_3 (struct sbuf*,char*,int ) ;

__attribute__((used)) static void
FUNC_4(struct sbuf *VAR_1, struct veriexec_devhead *VAR_2)
{
 struct veriexec_dev_list *VAR_3;

 for (VAR_3 = FUNC_0(VAR_2); VAR_3 != ((void*)0); VAR_3 = FUNC_1(VAR_3, VAR_0)) {
  FUNC_3(VAR_1, " FS id: %ju\n", (uintmax_t)VAR_3->fsid);
  FUNC_2(VAR_1, VAR_3);
 }

}
