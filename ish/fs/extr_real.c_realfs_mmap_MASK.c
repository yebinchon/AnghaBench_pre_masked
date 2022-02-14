
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem {int dummy; } ;
struct fd {int real_fd; } ;
typedef int pages_t ;
typedef int page_t ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_0 (int *,int,int,int,int ,int) ;
 int FUNC_1 (struct mem*,int ,int,char*,int,int) ;
 int VAR_8 ;

int FUNC_2(struct fd *VAR_9, struct mem *VAR_10, page_t VAR_11, pages_t VAR_12, off_t VAR_13, int VAR_14, int VAR_15) {
    if (VAR_12 == 0)
        return 0;

    int VAR_16 = 0;
    if (VAR_15 & VAR_2) VAR_16 |= VAR_0;
    if (VAR_15 & VAR_3) VAR_16 |= VAR_1;
    int VAR_17 = VAR_5;
    if (VAR_14 & VAR_7) VAR_17 |= VAR_6;

    off_t VAR_18 = (VAR_13 / VAR_8) * VAR_8;
    off_t VAR_19 = VAR_13 - VAR_18;
    char *VAR_20 = FUNC_0(((void*)0), (VAR_12 * VAR_4) + VAR_19,
            VAR_17, VAR_16, VAR_9->real_fd, VAR_18);
    return FUNC_1(VAR_10, VAR_11, VAR_12, VAR_20, VAR_19, VAR_14);
}
