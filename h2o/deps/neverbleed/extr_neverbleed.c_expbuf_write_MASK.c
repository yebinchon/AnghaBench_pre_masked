
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vecs ;
struct iovec {size_t* iov_base; int iov_len; int * member_0; } ;
struct expbuf_t {size_t* start; } ;
typedef int ssize_t ;
typedef int bufsz ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 size_t FUNC_1 (struct expbuf_t*) ;
 int FUNC_2 (int,struct iovec*,int) ;

__attribute__((used)) static int FUNC_3(struct expbuf_t *VAR_2, int VAR_3)
{
    struct iovec VAR_4[2] = {{((void*)0)}};
    size_t VAR_5 = FUNC_1(VAR_2);
    int VAR_6;
    ssize_t VAR_7;

    VAR_4[0].iov_base = &VAR_5;
    VAR_4[0].iov_len = sizeof(VAR_5);
    VAR_4[1].iov_base = VAR_2->start;
    VAR_4[1].iov_len = VAR_5;

    for (VAR_6 = 0; VAR_6 != sizeof(VAR_4) / sizeof(VAR_4[0]);) {
        while ((VAR_7 = FUNC_2(VAR_3, VAR_4 + VAR_6, sizeof(VAR_4) / sizeof(VAR_4[0]) - VAR_6)) == -1 && VAR_1 == VAR_0)
            ;
        if (VAR_7 == -1)
            return -1;
        FUNC_0(VAR_7 != 0);
        while (VAR_7 != 0 && VAR_7 >= VAR_4[VAR_6].iov_len) {
            VAR_7 -= VAR_4[VAR_6].iov_len;
            ++VAR_6;
        }
        if (VAR_7 != 0) {
            VAR_4[VAR_6].iov_base = (char *)VAR_4[VAR_6].iov_base + VAR_7;
            VAR_4[VAR_6].iov_len -= VAR_7;
        }
    }

    return 0;
}
