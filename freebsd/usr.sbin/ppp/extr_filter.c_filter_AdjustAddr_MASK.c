
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncpaddr {int dummy; } ;
struct in_addr {int dummy; } ;
struct filterent {scalar_t__ f_action; scalar_t__ f_srctype; scalar_t__ f_dsttype; int f_dst; int f_src; } ;
struct filter {struct filterent* rule; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (struct ncpaddr*) ;
 int FUNC_1 (int *,struct ncpaddr*) ;
 int FUNC_2 (int *,struct in_addr) ;

void
FUNC_3(struct filter *VAR_10, struct ncpaddr *VAR_11,
                  struct ncpaddr *VAR_12, struct in_addr *VAR_13)
{
  struct filterent *VAR_14;
  int VAR_15;

  for (VAR_14 = VAR_10->rule, VAR_15 = 0; VAR_15 < VAR_3; VAR_14++, VAR_15++)
    if (VAR_14->f_action != VAR_2) {
      if (VAR_11) {
        if (VAR_14->f_srctype == VAR_8 && FUNC_0(VAR_11) == VAR_0)
          FUNC_1(&VAR_14->f_src, VAR_11);
        if (VAR_14->f_dsttype == VAR_8 && FUNC_0(VAR_11) == VAR_0)
          FUNC_1(&VAR_14->f_dst, VAR_11);

        if (VAR_14->f_srctype == VAR_9 && FUNC_0(VAR_11) == VAR_1)
          FUNC_1(&VAR_14->f_src, VAR_11);
        if (VAR_14->f_dsttype == VAR_9 && FUNC_0(VAR_11) == VAR_1)
          FUNC_1(&VAR_14->f_dst, VAR_11);

      }
      if (VAR_12) {
        if (VAR_14->f_srctype == VAR_6 && FUNC_0(VAR_12) == VAR_0)
          FUNC_1(&VAR_14->f_src, VAR_12);
        if (VAR_14->f_dsttype == VAR_6 && FUNC_0(VAR_12) == VAR_0)
          FUNC_1(&VAR_14->f_dst, VAR_12);

        if (VAR_14->f_srctype == VAR_7 && FUNC_0(VAR_12) == VAR_1)
          FUNC_1(&VAR_14->f_src, VAR_12);
        if (VAR_14->f_dsttype == VAR_7 && FUNC_0(VAR_12) == VAR_1)
          FUNC_1(&VAR_14->f_dst, VAR_12);

      }
      if (VAR_13) {
        if (VAR_14->f_srctype == VAR_4)
          FUNC_2(&VAR_14->f_src, VAR_13[0]);
        if (VAR_14->f_dsttype == VAR_4)
          FUNC_2(&VAR_14->f_dst, VAR_13[0]);
        if (VAR_14->f_srctype == VAR_5)
          FUNC_2(&VAR_14->f_src, VAR_13[1]);
        if (VAR_14->f_dsttype == VAR_5)
          FUNC_2(&VAR_14->f_dst, VAR_13[1]);
      }
    }
}
