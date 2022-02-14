
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct veriexec_devhead {int dummy; } ;
struct veriexec_dev_list {scalar_t__ fsid; int file_head; } ;
typedef scalar_t__ dev_t ;


 struct veriexec_dev_list* FUNC_0 (struct veriexec_devhead*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct veriexec_devhead*,struct veriexec_dev_list*,int ) ;
 struct veriexec_dev_list* FUNC_3 (struct veriexec_dev_list*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct veriexec_dev_list*,int ) ;
 struct veriexec_dev_list* FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_4 ;

__attribute__((used)) static struct veriexec_dev_list *
FUNC_8(dev_t VAR_5, struct veriexec_devhead *VAR_6)
{
 struct veriexec_dev_list *VAR_7;
 struct veriexec_dev_list *VAR_8 = ((void*)0);

search:

 for (VAR_7 = FUNC_0(VAR_6); VAR_7 != ((void*)0);
      VAR_7 = FUNC_3(VAR_7, VAR_3))
  if (VAR_7->fsid == VAR_5) break;

 if (VAR_7 == ((void*)0)) {
  if (VAR_8 == ((void*)0)) {





   VAR_8 = FUNC_5(sizeof(struct veriexec_dev_list),
       VAR_1, VAR_0);
   if (VAR_8 == ((void*)0)) {




    FUNC_7(&VAR_4);
    VAR_8 = FUNC_5(sizeof(struct veriexec_dev_list),
        VAR_1, VAR_2);
    FUNC_6(&VAR_4);




    goto search;
   }
  }
  if (VAR_8) {

   VAR_7 = VAR_8;
   FUNC_1(&(VAR_7->file_head));
   VAR_7->fsid = VAR_5;
   FUNC_2(VAR_6, VAR_7, VAR_3);
  }
 } else if (VAR_8) {



  FUNC_7(&VAR_4);
  FUNC_4(VAR_8, VAR_1);
  FUNC_6(&VAR_4);
 }

 return (VAR_7);
}
