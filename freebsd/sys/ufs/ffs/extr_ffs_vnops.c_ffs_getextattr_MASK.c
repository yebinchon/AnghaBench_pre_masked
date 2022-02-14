
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct vop_getextattr_args {int* a_size; int a_td; int a_cred; TYPE_1__* a_vp; int * a_uio; int a_name; int a_attrnamespace; } ;
struct inode {unsigned int i_ea_len; int * i_ea_area; } ;
struct TYPE_5__ {scalar_t__ v_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct inode* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_3 (int *,unsigned int,int ,int ,int *,int **) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (int *,int,int *) ;

__attribute__((used)) static int
FUNC_6(struct vop_getextattr_args *VAR_5)
{
 struct inode *VAR_6;
 u_char *VAR_7, *VAR_8;
 unsigned VAR_9;
 int VAR_10, VAR_11;

 VAR_6 = FUNC_0(VAR_5->a_vp);

 if (VAR_5->a_vp->v_type == VAR_3 || VAR_5->a_vp->v_type == VAR_2)
  return (VAR_1);

 VAR_10 = FUNC_1(VAR_5->a_vp, VAR_5->a_attrnamespace,
     VAR_5->a_cred, VAR_5->a_td, VAR_4);
 if (VAR_10)
  return (VAR_10);

 VAR_10 = FUNC_4(VAR_5->a_vp, VAR_5->a_cred, VAR_5->a_td);
 if (VAR_10)
  return (VAR_10);

 VAR_7 = VAR_6->i_ea_area;
 VAR_9 = VAR_6->i_ea_len;

 VAR_11 = FUNC_3(VAR_7, VAR_9, VAR_5->a_attrnamespace, VAR_5->a_name,
     ((void*)0), &VAR_8);
 if (VAR_11 >= 0) {
  VAR_10 = 0;
  if (VAR_5->a_size != ((void*)0))
   *VAR_5->a_size = VAR_11;
  else if (VAR_5->a_uio != ((void*)0))
   VAR_10 = FUNC_5(VAR_8, VAR_11, VAR_5->a_uio);
 } else
  VAR_10 = VAR_0;

 FUNC_2(VAR_5->a_vp, 0, VAR_5->a_cred, VAR_5->a_td);
 return (VAR_10);
}
