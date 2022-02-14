
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statbuf {int mode; } ;
struct fd {int dummy; } ;


 int VAR_0 ;
 struct fd* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct fd* FUNC_1 (char const*,int ,int ) ;
 int FUNC_2 (int ,char const*,struct statbuf*,int) ;

__attribute__((used)) static struct fd *FUNC_3(const char *VAR_4) {
    struct statbuf VAR_5;
    int VAR_6 = FUNC_2(VAR_0, VAR_4, &VAR_5, 1);
    if (VAR_6 < 0)
        return FUNC_0(VAR_6);
    if (!(VAR_5.mode & VAR_2))
        return FUNC_0(VAR_3);

    return FUNC_1(VAR_4, VAR_1, 0);
}
