
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint_t ;
struct sockaddr_max_ {int dummy; } ;
struct inode_data {int dummy; } ;
struct TYPE_2__ {struct inode_data* unix_name_inode; int * unix_name_abstract; } ;
struct fd {TYPE_1__ socket; int real_fd; } ;
typedef int int_t ;
typedef int fd_t ;
typedef int addr_t ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,void*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct inode_data*) ;
 struct fd* FUNC_4 (int ) ;
 int FUNC_5 (int ,struct sockaddr_max_*,int *,struct fd*) ;
 int FUNC_6 (int *) ;

int_t FUNC_7(fd_t VAR_1, addr_t VAR_2, uint_t VAR_3) {
    FUNC_0("bind(%d, 0x%x, %d)", VAR_1, VAR_2, VAR_3);
    struct fd *VAR_4 = FUNC_4(VAR_1);
    if (VAR_4 == ((void*)0))
        return VAR_0;
    struct sockaddr_max_ VAR_5;
    struct inode_data *VAR_6 = ((void*)0);
    int VAR_7 = FUNC_5(VAR_2, &VAR_5, &VAR_3, VAR_4);
    if (VAR_7 < 0)
        return VAR_7;

    VAR_7 = FUNC_1(VAR_4->real_fd, (void *) &VAR_5, VAR_3);
    if (VAR_7 < 0) {
        FUNC_3(VAR_4->socket.unix_name_inode);
        if (VAR_4->socket.unix_name_abstract != ((void*)0))
            FUNC_6(VAR_4->socket.unix_name_abstract);
        return FUNC_2();
    }
    VAR_4->socket.unix_name_inode = VAR_6;
    return 0;
}
