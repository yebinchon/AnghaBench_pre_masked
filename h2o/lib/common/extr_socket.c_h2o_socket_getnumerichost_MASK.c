
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
typedef int socklen_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (struct sockaddr*,int ,char*,int ,int *,int ,int ) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (char*,char*,int,int,int,int) ;
 size_t FUNC_3 (char*) ;

size_t FUNC_4(struct sockaddr *VAR_4, socklen_t VAR_5, char *VAR_6)
{
    if (VAR_4->sa_family == VAR_0) {

        struct sockaddr_in *VAR_7 = (void *)VAR_4;
        uint32_t VAR_8;
        VAR_8 = FUNC_1(VAR_7->sin_addr.s_addr);
        return FUNC_2(VAR_6, "%d.%d.%d.%d", VAR_8 >> 24, (VAR_8 >> 16) & 255, (VAR_8 >> 8) & 255, VAR_8 & 255);
    }

    if (FUNC_0(VAR_4, VAR_5, VAR_6, VAR_1, ((void*)0), 0, VAR_2) != 0)
        return VAR_3;
    return FUNC_3(VAR_6);
}
