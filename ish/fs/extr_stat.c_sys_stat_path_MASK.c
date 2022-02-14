
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statbuf {int dummy; } ;
struct newstat64 {int dummy; } ;
struct fd {int dummy; } ;
typedef int path ;
typedef int fd_t ;
typedef int dword_t ;
typedef int addr_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct fd* FUNC_1 (int ) ;
 int FUNC_2 (struct fd*,char*,struct statbuf*,int) ;
 struct newstat64 FUNC_3 (struct statbuf) ;
 scalar_t__ FUNC_4 (int ,struct newstat64) ;
 scalar_t__ FUNC_5 (int ,char*,int) ;

__attribute__((used)) static dword_t FUNC_6(fd_t VAR_3, addr_t VAR_4, addr_t VAR_5, bool VAR_6) {
    int VAR_7;
    char VAR_8[VAR_0];
    if (FUNC_5(VAR_4, VAR_8, sizeof(VAR_8)))
        return VAR_2;
    FUNC_0("stat(at=%d, path=\"%s\", statbuf=0x%x, follow_links=%d)", VAR_3, VAR_8, VAR_5, VAR_6);
    struct fd *VAR_9 = FUNC_1(VAR_3);
    if (VAR_9 == ((void*)0))
        return VAR_1;
    struct statbuf VAR_10;
    if ((VAR_7 = FUNC_2(VAR_9, VAR_8, &VAR_10, VAR_6)) < 0)
        return VAR_7;
    struct newstat64 VAR_11 = FUNC_3(VAR_10);
    if (FUNC_4(VAR_5, VAR_11))
        return VAR_2;
    return 0;
}
