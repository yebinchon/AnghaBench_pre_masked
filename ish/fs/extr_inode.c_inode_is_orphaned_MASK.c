
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {int dummy; } ;
struct inode_data {int dummy; } ;
typedef int ino_t ;


 struct inode_data* FUNC_0 (struct mount*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

bool FUNC_3(struct mount *VAR_1, ino_t VAR_2) {
    FUNC_1(&VAR_0);
    struct inode_data *VAR_3 = FUNC_0(VAR_1, VAR_2);
    FUNC_2(&VAR_0);
    return VAR_3 == ((void*)0);
}
