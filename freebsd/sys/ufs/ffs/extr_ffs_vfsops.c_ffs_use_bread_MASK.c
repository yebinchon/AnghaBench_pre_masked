
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct buf {int b_flags; int b_data; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,void*,int) ;
 int FUNC_2 (struct vnode*,int ,int,int ,struct buf**) ;
 int FUNC_3 (struct buf*) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int,int ,int ) ;

__attribute__((used)) static int
FUNC_6(void *VAR_5, off_t VAR_6, void **VAR_7, int VAR_8)
{
 struct buf *VAR_9;
 int VAR_10;

 FUNC_0(*VAR_7 == ((void*)0), ("ffs_use_bread: non-NULL *bufp %p\n", *VAR_7));
 *VAR_7 = FUNC_5(VAR_8, VAR_2, VAR_3);
 if ((VAR_10 = FUNC_2((struct vnode *)VAR_5, FUNC_4(VAR_6), VAR_8, VAR_4,
     &VAR_9)) != 0)
  return (VAR_10);
 FUNC_1(VAR_9->b_data, *VAR_7, VAR_8);
 VAR_9->b_flags |= VAR_0 | VAR_1;
 FUNC_3(VAR_9);
 return (0);
}
