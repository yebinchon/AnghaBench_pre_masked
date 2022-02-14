
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_conn_info {int dummy; } ;
typedef int pthread_attr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int *,int ,int *) ;
 int FUNC_5 (int *,int *) ;
 int VAR_4 ;
 int FUNC_6 (int,char*) ;

void *FUNC_7 (struct fuse_conn_info *VAR_5) {
  FUNC_6 (2, "ff_init\n");
  FUNC_5 (&VAR_1, ((void*)0));
  if (VAR_3) {
    pthread_attr_t VAR_6;
    FUNC_1 (&VAR_6);
    FUNC_2 (&VAR_6, VAR_0);
    FUNC_3 (&VAR_6, 4 << 20);
    FUNC_4 (&VAR_2, &VAR_6, VAR_4, ((void*)0));
    FUNC_0 (&VAR_6);
    VAR_3 = 0;
  }
  return ((void*)0);
}
